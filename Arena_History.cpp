diff --git a/src/game/BattleGround.cpp b/src/game/BattleGround.cpp 
index f30d223..d66bc45 100644 
--- a/src/game/BattleGround.cpp 
+++ b/src/game/BattleGround.cpp 
@@ -827,6 +827,9 @@ void BattleGround::EndBattleGround(uint32 winner) 
// this way all arena team members will get notified, not only the ones who participated in this match 
winner_arena_team->NotifyStatsChanged(); 
loser_arena_team->NotifyStatsChanged(); 
+ CharacterDatabase.BeginTransaction(); 
+ CharacterDatabase.PExecute("INSERT INTO arena_team_history (winner_team, winner_rating, loser_team, loser_rating, type, map) VALUES ('%u', '%u', '%u', '%u', '%u', '%u')", winner_arena_team->GetId(), winner_arena_team->GetRating(), loser_arena_team->GetId(), loser_arena_team->GetRating(), winner_arena_team->GetType(), GetMapId()); 
+ CharacterDatabase.CommitTransaction(); 
} 

if (winmsg_id)

========
Sql Code
========

DROP TABLE IF EXISTS `arena_team_history`; 
CREATE TABLE `arena_team_history` ( 
`id` int(11) NOT NULL auto_increment COMMENT 'Identifier', 
`winner_team` int(10) unsigned NOT NULL default '0', 
`winner_rating` int(10) unsigned NOT NULL default '0', 
`loser_team` int(10) unsigned NOT NULL default '0', 
`loser_rating` int(10) unsigned NOT NULL default '0', 
`change` int(10) unsigned NOT NULL default '0', 
`type` int(2) unsigned NOT NULL default '0', 
`map` int(10) unsigned NOT NULL default '0', 
`play_time` timestamp NOT NULL default CURRENT_TIMESTAMP, 
PRIMARY KEY (`id`) 
) ENGINE=InnoDB AUTO_INCREMENT=1669 DEFAULT CHARSET=utf8;
