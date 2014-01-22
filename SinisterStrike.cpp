Player.cpp 
@@ -3052,11 +3052,15 @@ void Player::GiveLevel(uint32 level) 
      phaseMgr->NotifyConditionChanged(phaseUdateData); 
   
      // resend quests status directly 
 -    if (GetSession()) 
 -    { 
 -        WorldPacket packet = WorldPacket(); 
 -        GetSession()->HandleQuestgiverStatusMultipleQuery(packet); 
 -    } 
 +    WorldPacket packet = WorldPacket(); 
 +    GetSession()->HandleQuestgiverStatusMultipleQuery(packet); 
 + 
 +    // learn Running Wild 
 +    if (level >= 20 && getRace() == RACE_WORGEN && !HasSpell(94098)) 
 +        learnSpell(94098, false); 
 +    // learn Sinister Strike Enabler 
 +    if (level >= 3 && getClass() == CLASS_ROGUE && !HasSpell(79327)) 
 +        learnSpell(79327, false); 
  } 
   
  void Player::UpdateFreeTalentPoints(bool resetIfNeed)
