Open the file:
plTarget->duel->startTimer = now;

And add after:
// reset cooldowns and HP/Mana 
pl->SetHealth(pl->GetMaxHealth()); 
plTarget->SetHealth(plTarget->GetMaxHealth()); 

if (pl->getPowerType() == POWER_MANA) pl->SetPower(POWER_MANA, pl->GetMaxPower(POWER_MANA)); 
if (plTarget->getPowerType() == POWER_MANA) plTarget->SetPower(POWER_MANA, plTarget->GetMaxPower(POWER_MANA)); 
//only for cooldowns which < 15 min 
if (!pl->GetMap()->IsDungeon()) { pl->RemoveArenaSpellCooldowns(); plTarget->RemoveArenaSpellCooldowns(); }

Code for rolling patch via GIT:
diff --git a/src/game/DuelHandler.cpp b/src/game/DuelHandler.cpp 
index 15cbf8c..616ca27 100644 
--- a/src/game/DuelHandler.cpp 
+++ b/src/game/DuelHandler.cpp 
@@ -51,6 +51,15 @@ 
pl->duel->startTimer = now; 
plTarget->duel->startTimer = now; 

+ // reset cooldowns and HP/Mana 
+ pl->SetHealth(pl->GetMaxHealth()); 
+ plTarget->SetHealth(plTarget->GetMaxHealth()); 
+ 
+ if (pl->getPowerType() == POWER_MANA) pl->SetPower(POWER_MANA, pl->GetMaxPower(POWER_MANA)); 
+ if (plTarget->getPowerType() == POWER_MANA) plTarget->SetPower(POWER_MANA, plTarget->GetMaxPower(POWER_MANA)); 
+ //only for cooldowns which < 15 min 
+ if (!pl->GetMap()->IsDungeon()) { pl->RemoveArenaSpellCooldowns(); plTarget->RemoveArenaSpellCooldowns(); } 
+ 
pl->SendDuelCountdown(3000); 
plTarget->SendDuelCountdown(3000); 
}
