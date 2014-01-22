SpellAuras.cpp 
@@ -11620,8 +11620,15 @@ void SpellAuraHolder::HandleSpellSpecificBoosts(bool apply) 
} 
case SPELLFAMILY_MAGE: 
{ 
+            // Arcane Missiles! 
+            if (m_spellProto->Id == 79683) 
+            { 
+                // Arcane Missiles Aurastate 
+                spellId1 = 79808; 
+                break; 
+            } 
// Ice Barrier (non stacking from one caster) 
-            if (m_spellProto->SpellIconID == 32) 
+            else if (m_spellProto->SpellIconID == 32) 
{ 
if (!apply && m_removeMode == AURA_REMOVE_BY_DISPEL || m_removeMode == AURA_REMOVE_BY_SHIELD_BREAK) 
{ 

UnitAuraProcHandler.cpp 
@@ -4145,6 +4145,17 @@ SpellAuraProcResult Unit::HandleProcTriggerSpellAuraProc(Unit *pVictim, uint32 d 
(((Creature*)pVictim)->GetCreatureInfo()->MechanicImmuneMask & (1 << (MECHANIC_STUN - 1))) == 0)) 
return SPELL_AURA_PROC_FAILED; 
} 
+            else if (auraSpellInfo->Id == 79684)            // Offensive State (DND) 
+            { 
+                // do not proc without Arcane Missiles learned 
+                if (!HasSpell(5143)) 
+                    return SPELL_AURA_PROC_FAILED; 
+ 
+                // do not proc from Arane Missiles themselves 
+                if (!procSpell || procSpell->IsFitToFamily(SPELLFAMILY_MAGE, UI64LIT(0x200800))) 
+                    return SPELL_AURA_PROC_FAILED; 
+                break; 
+            } 
break; 
case SPELLFAMILY_WARRIOR: 
// Deep Wounds (replace triggered spells to directly apply DoT), dot spell have familyflags
