diff --git a/src/game/Chat.cpp b/src/game/Chat.cpp   
index 3444776..2685798 100644   
--- a/src/game/Chat.cpp   
+++ b/src/game/Chat.cpp   
@@ -454,6 +454,7 @@ ChatCommand * ChatHandler::getCommandTable()   
              { "spell_scripts",               SEC_ADMINISTRATOR, true,  &ChatHandler::HandleReloadSpellScriptsCommand,            "", NULL },   
              { "spell_target_position",       SEC_ADMINISTRATOR, true,  &ChatHandler::HandleReloadSpellTargetPositionCommand,     "", NULL },   
              { "spell_threats",               SEC_ADMINISTRATOR, true,  &ChatHandler::HandleReloadSpellThreatsCommand,            "", NULL },   
+        { "spell_disabled",              SEC_ADMINISTRATOR, true,  &ChatHandler::HandleReloadSpellDisabledCommand,           "", NULL },   
           
              { NULL,                          0,                 false, NULL,                    "", NULL }   
          };   
diff --git a/src/game/Chat.h b/src/game/Chat.h   
index 18ef9cc..08cb422 100644   
--- a/src/game/Chat.h   
+++ b/src/game/Chat.h   
@@ -380,6 +380,7 @@ class ChatHandler   
              bool HandleReloadSpellTargetPositionCommand(char* args);   
              bool HandleReloadSpellThreatsCommand(char* args);   
              bool HandleReloadSpellPetAurasCommand(char* args);   
+        bool HandleReloadSpellDisabledCommand(char* args);   
           
              bool HandleResetAchievementsCommand(char * args);   
              bool HandleResetAllCommand(char * args);   
diff --git a/src/game/Level3.cpp b/src/game/Level3.cpp   
index 6eeaff4..1b1c243 100644   
--- a/src/game/Level3.cpp   
+++ b/src/game/Level3.cpp   
@@ -162,6 +162,7 @@ bool ChatHandler::HandleReloadAllSpellCommand(const char*)   
          HandleReloadSpellTargetPositionCommand((char*)"a");   
          HandleReloadSpellThreatsCommand((char*)"a");   
          HandleReloadSpellPetAurasCommand((char*)"a");   
+    HandleReloadSpellDisabledCommand((char*)"a");   
          return true;   
      }   
           
@@ -812,6 +813,17 @@ bool ChatHandler::HandleReloadLocalesQuestCommand(const char* /*arg*/)   
          return true;   
      }   
           
+bool ChatHandler::HandleReloadSpellDisabledCommand(char* /*arg*/)   
+{   
+    sLog.outString( "Re-Loading spell disabled table...");   
+   
+    sObjectMgr.LoadSpellDisabledEntrys();   
+   
+    SendGlobalSysMessage("DB table `spell_disabled` reloaded.");   
+   
+    return true;   
+}   
+   
      bool ChatHandler::HandleLoadScriptsCommand(const char* args)   
      {   
          if(!LoadScriptingModule(args)) return true;   
diff --git a/src/game/ObjectMgr.cpp b/src/game/ObjectMgr.cpp   
index 8f3e5e1..7ac4dea 100644   
--- a/src/game/ObjectMgr.cpp   
+++ b/src/game/ObjectMgr.cpp   
@@ -6735,6 +6735,46 @@ const char *ObjectMgr::GetMangosString(int32 entry, int locale_idx) const   
          return "<error>";   
      }   
           
+void ObjectMgr::LoadSpellDisabledEntrys()   
+{   
+    m_spell_disabled.clear();                    // need for reload case   
+    QueryResult *result = WorldDatabase.Query("SELECT entry, ischeat_spell FROM spell_disabled where active=1");   
+   
+    uint32 total_count = 0;   
+    uint32 cheat_spell_count=0;   
+   
+    if( !result ) 
+    { 
+   
+        sLog.outString();   
+        sLog.outString( ">> Loaded %u disabled spells", total_count );   
+        return;   
+    }   
+ 
+   
+    Field* fields;   
+    do   
+    { 
+        fields = result->Fetch();   
+        uint32 spellid = fields[0].GetUInt32();   
+        bool ischeater = fields[1].GetBool();   
+        m_spell_disabled[spellid] = ischeater;   
+        ++total_count;   
+        if(ischeater)   
+        ++cheat_spell_count;   
+   
+   } while ( result->NextRow() );   
+   
+    delete result;   
+   
+    sLog.outString();   
+    sLog.outString( ">> Loaded %u disabled spells ( %u - is cheaters spells)", total_count, cheat_spell_count);   
+}   
+   
      void sObjectMgr::LoadFishingBaseSkillLevel()   
      {   
          mFishingBaseForArea.clear();                            // for reload case   
diff --git a/src/game/ObjectMgr.h b/src/game/ObjectMgr.h   
index 7aa3e30..3a64f38 100644   
--- a/src/game/ObjectMgr.h   
+++ b/src/game/ObjectMgr.h   
@@ -694,7 +694,21 @@ class ObjectMgr   
           
              static bool CheckDeclinedNames(std::wstring mainpart, DeclinedName const& names);   
           
-        int GetIndexForLocale(LocaleConstant loc);   
+        void LoadSpellDisabledEntrys();   
+        uint8 IsSpellDisabled(uint32 spellid)   
+        {   
+            uint8 result=0;   
+            SpellDisabledMap::const_iterator itr = m_spell_disabled.find(spellid);   
+            if(itr != m_spell_disabled.end())   
+            {   
+                result=1;   
+                if(itr->second != 0)   
+                    result=2;   
+            }   
+        return result;   
+        }   
+   
+        int GetIndexForLocale(LocaleConstant loc);   
              LocaleConstant GetLocaleForIndex(int i);   
           
              uint16 GetConditionId(ConditionType condition, uint32 value1, uint32 value2);   
@@ -813,6 +827,9 @@ class ObjectMgr   
              typedef std::set<std::wstring> ReservedNamesMap;   
              ReservedNamesMap    m_ReservedNames;   
           
+        typedef UNORDERED_MAP<uint32, uint32> SpellDisabledMap;   
+        SpellDisabledMap  m_spell_disabled;   
+   
              GraveYardMap        mGraveYardMap;   
           
              GameTeleMap         m_GameTeleMap;   
diff --git a/src/game/Spell.cpp b/src/game/Spell.cpp   
index 338c00e..b011eb1 100644   
--- a/src/game/Spell.cpp   
+++ b/src/game/Spell.cpp   
@@ -2246,6 +2246,19 @@ void Spell::Prepare(SpellCastTargets const* targets, Aura* triggeredByAura)   
              return;   
          }   
           
+    if(uint8 result = sObjectMgr.IsSpellDisabled(m_spellInfo->Id))   
+    {   
+        if(m_caster->GetTypeId() == TYPEID_PLAYER)   
+        {   
+            sLog.outDebug("Player %s cast a spell %u which was disabled by server administrator",   m_caster->GetName(), m_spellInfo->Id);   
+            if(result == 2)   
+            sLog.outChar("Player %s cast a spell %u which was disabled by server administrator and marked as CheatSpell",   m_caster->GetName(), m_spellInfo->Id);   
+        }   
+        SendCastResult(SPELL_FAILED_SPELL_UNAVAILABLE);   
+        finish(false);   
+        return;   
+    }   
+   
          // Fill cost data   
          m_powerCost = CalculatePowerCost();   
           
diff --git a/src/game/World.cpp b/src/game/World.cpp   
index 1bfe545..8cca693 100644   
--- a/src/game/World.cpp   
+++ b/src/game/World.cpp   
@@ -1259,6 +1259,9 @@ void World::SetInitialWorldSettings()   
          sLog.outString( "Loading Player Corpses..." );   
          sObjectMgr.LoadCorpses();   
           
+    sLog.outString( "Loading Spell disabled..." );   
+    sObjectMgr.LoadSpellDisabledEntrys();   
+   
          sLog.outString( "Loading Loot Tables..." );   
          sLog.outString();   
          LoadLootTables();

========
sql code
========
CREATE TABLE spell_disabled (   
       entry int(11) unsigned NOT NULL default '0' COMMENT 'spell entry',   
       ischeat_spell tinyint(3) unsigned NOT NULL default '0' COMMENT 'mark spell as cheat',   
       active tinyint(3) unsigned NOT NULL default '1' COMMENT 'enable check of this spell',   
       PRIMARY KEY  (entry)   
) ENGINE=MyISAM DEFAULT CHARSET=utf8 ROW_FORMAT=FIXED COMMENT='Dissabled Spell System';
