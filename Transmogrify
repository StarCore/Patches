#include "ScriptPCH.h"
 
class npc_transmogweap : public CreatureScript
{
public:
       npc_transmogweap() : CreatureScript("npc_transmogweap") { }
 
       bool OnGossipHello(Player *player, Creature *_creature)
       {
           if (player->isInCombat())
           {
               player->CLOSE_GOSSIP_MENU();
               _creature->MonsterWhisper("Бой!", player->GetGUID());
               return true;
           }
           else
           {
               player->ADD_GOSSIP_ITEM( 3, "|cffBB0000Оружие"                    , GOSSIP_SENDER_MAIN, 1);
               player->ADD_GOSSIP_ITEM( 3, "Экипировка Т4"                    , GOSSIP_SENDER_MAIN, 2);
               player->ADD_GOSSIP_ITEM( 3, "Экипировка Т5"                    , GOSSIP_SENDER_MAIN, 3);
               player->ADD_GOSSIP_ITEM( 3, "Экипировка Т6"                    , GOSSIP_SENDER_MAIN, 4);
               player->ADD_GOSSIP_ITEM( 3, "Экипировка Т7"                    , GOSSIP_SENDER_MAIN, 5);
               player->ADD_GOSSIP_ITEM( 3, "Экипировка Т8"                    , GOSSIP_SENDER_MAIN, 6);
               player->ADD_GOSSIP_ITEM( 3, "Экипировка Т9"                    , GOSSIP_SENDER_MAIN, 7);
               player->ADD_GOSSIP_ITEM( 3, "Экипировка Т10"                    , GOSSIP_SENDER_MAIN, 8);
               player->ADD_GOSSIP_ITEM( 3, "Экипировка Т11"                    , GOSSIP_SENDER_MAIN, 9);
               player->ADD_GOSSIP_ITEM( 3, "Другое"                    , GOSSIP_SENDER_MAIN, 10);
               player->ADD_GOSSIP_ITEM( 3, "|cffFF0000Спасибо, воздержусь от трансмогификации."                    ,GOSSIP_SENDER_MAIN, 999);
           }
 
           player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _creature->GetGUID());            
           return true;
       }
 
       bool OnGossipSelect(Player *player, Creature *_creature, uint32 sender, uint32 uiAction)
       {
           if (sender == GOSSIP_SENDER_MAIN)
           {
               player->PlayerTalkClass->ClearMenus();
               switch(uiAction)
               {
      case 999:
                  player->CLOSE_GOSSIP_MENU();
               _creature->MonsterWhisper("Заходи снова друг!", player->GetGUID());
      break;      
           case 1://weapons
                           player->ADD_GOSSIP_ITEM( 3, "|cff3300FFГромовая Ярость, благословенный клинок Искателя Ветра" , GOSSIP_SENDER_MAIN, 100);
                           player->ADD_GOSSIP_ITEM( 3, "|cff3300FFБоевой клинок Аззинота (левая рука)"   , GOSSIP_SENDER_MAIN, 101);
                           player->ADD_GOSSIP_ITEM( 3, "|cff3300FFБоевой клинок Аззинота (правая рука)"                      , GOSSIP_SENDER_MAIN, 102);
                           player->ADD_GOSSIP_ITEM( 3, "|cff3300FFТори'дал, Звeздная Ярость (лук)"                      , GOSSIP_SENDER_MAIN, 103);
                           player->ADD_GOSSIP_ITEM( 3, "|cff3300FFДлинный лук Края Пустоты"                    , GOSSIP_SENDER_MAIN, 104);
                           player->ADD_GOSSIP_ITEM( 3, "|cff3300FFСокрушитель"                      , GOSSIP_SENDER_MAIN, 105);
                           player->ADD_GOSSIP_ITEM( 3, "|cff3300FFВал'анир, молот древних королей"                    , GOSSIP_SENDER_MAIN, 106);
                           player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _creature->GetGUID());            
                           break;
 
               case 2://t4
                           player->ADD_GOSSIP_ITEM( 3, "Т4 Друид" , GOSSIP_SENDER_MAIN, 110);
                           player->ADD_GOSSIP_ITEM( 3, "Т4 Охотник" , GOSSIP_SENDER_MAIN, 111);
                           player->ADD_GOSSIP_ITEM( 3, "Т4 Маг" , GOSSIP_SENDER_MAIN, 112);
                           player->ADD_GOSSIP_ITEM( 3, "Т4 Паладин" , GOSSIP_SENDER_MAIN, 113);
                           player->ADD_GOSSIP_ITEM( 3, "Т4 Жрец" , GOSSIP_SENDER_MAIN, 114);
                           player->ADD_GOSSIP_ITEM( 3, "Т4 Разбойник" , GOSSIP_SENDER_MAIN, 115);
                           player->ADD_GOSSIP_ITEM( 3, "Т4 Шаман" , GOSSIP_SENDER_MAIN, 116);
                           player->ADD_GOSSIP_ITEM( 3, "Т4 Чернокнижник" , GOSSIP_SENDER_MAIN, 117);
                           player->ADD_GOSSIP_ITEM( 3, "Т4 Воин" , GOSSIP_SENDER_MAIN, 118);
                           player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _creature->GetGUID());            
                           break;
 
               case 3://t5
                           player->ADD_GOSSIP_ITEM( 3, "Т5 Друид" , GOSSIP_SENDER_MAIN, 120);
                           player->ADD_GOSSIP_ITEM( 3, "Т5 Охотник" , GOSSIP_SENDER_MAIN, 121);
                           player->ADD_GOSSIP_ITEM( 3, "Т5 Маг" , GOSSIP_SENDER_MAIN, 122);
                           player->ADD_GOSSIP_ITEM( 3, "Т5 Паладин" , GOSSIP_SENDER_MAIN, 123);
                           player->ADD_GOSSIP_ITEM( 3, "Т5 Жрец" , GOSSIP_SENDER_MAIN, 124);
                           player->ADD_GOSSIP_ITEM( 3, "Т5 Разбойник" , GOSSIP_SENDER_MAIN, 125);
                           player->ADD_GOSSIP_ITEM( 3, "Т5 Шаман" , GOSSIP_SENDER_MAIN, 126);
                           player->ADD_GOSSIP_ITEM( 3, "Т5 Чернокнижник" , GOSSIP_SENDER_MAIN, 127);
                           player->ADD_GOSSIP_ITEM( 3, "Т5 Воин" , GOSSIP_SENDER_MAIN, 128);
                           player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _creature->GetGUID());        
                     break;
 
               case 4://t6
                           player->ADD_GOSSIP_ITEM( 3, "Т6 Друид" , GOSSIP_SENDER_MAIN, 130);
                           player->ADD_GOSSIP_ITEM( 3, "Т6 Охотник" , GOSSIP_SENDER_MAIN, 131);
                           player->ADD_GOSSIP_ITEM( 3, "Т6 Маг" , GOSSIP_SENDER_MAIN, 132);
                           player->ADD_GOSSIP_ITEM( 3, "Т6 Паладин" , GOSSIP_SENDER_MAIN, 133);
                           player->ADD_GOSSIP_ITEM( 3, "Т6 Жрец" , GOSSIP_SENDER_MAIN, 134);
                           player->ADD_GOSSIP_ITEM( 3, "Т6 Разбойник" , GOSSIP_SENDER_MAIN, 135);
                           player->ADD_GOSSIP_ITEM( 3, "Т6 Шаман" , GOSSIP_SENDER_MAIN, 136);
                           player->ADD_GOSSIP_ITEM( 3, "Т6 Чернокнижник" , GOSSIP_SENDER_MAIN, 137);
                           player->ADD_GOSSIP_ITEM( 3, "Т6 Воин" , GOSSIP_SENDER_MAIN, 138);
                           player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _creature->GetGUID());        
                     break;
 
               case 5://t7
                           player->ADD_GOSSIP_ITEM( 3, "Т7 Друид" , GOSSIP_SENDER_MAIN, 140);
                           player->ADD_GOSSIP_ITEM( 3, "Т7 Охотник" , GOSSIP_SENDER_MAIN, 141);
                           player->ADD_GOSSIP_ITEM( 3, "Т7 Маг" , GOSSIP_SENDER_MAIN, 142);
                           player->ADD_GOSSIP_ITEM( 3, "Т7 Паладин" , GOSSIP_SENDER_MAIN, 143);
                           player->ADD_GOSSIP_ITEM( 3, "Т7 Жрец" , GOSSIP_SENDER_MAIN, 144);
                           player->ADD_GOSSIP_ITEM( 3, "Т7 Разбойник" , GOSSIP_SENDER_MAIN, 145);
                           player->ADD_GOSSIP_ITEM( 3, "Т7 Шаман" , GOSSIP_SENDER_MAIN, 146);
                           player->ADD_GOSSIP_ITEM( 3, "Т7 Чернокнижник" , GOSSIP_SENDER_MAIN, 147);
                           player->ADD_GOSSIP_ITEM( 3, "Т7 Воин" , GOSSIP_SENDER_MAIN, 148);
                           player->ADD_GOSSIP_ITEM( 3, "Т7 Рыцарь смерти" , GOSSIP_SENDER_MAIN, 149);
                           player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _creature->GetGUID());  
       
               case 6://t8
                           player->ADD_GOSSIP_ITEM( 3, "Т8 Друид" , GOSSIP_SENDER_MAIN, 150);
                           player->ADD_GOSSIP_ITEM( 3, "Т8 Охотник" , GOSSIP_SENDER_MAIN, 151);
                           player->ADD_GOSSIP_ITEM( 3, "Т8 Маг" , GOSSIP_SENDER_MAIN, 152);
                           player->ADD_GOSSIP_ITEM( 3, "Т8 Паладин" , GOSSIP_SENDER_MAIN, 153);
                           player->ADD_GOSSIP_ITEM( 3, "Т8 Жрец" , GOSSIP_SENDER_MAIN, 154);
                           player->ADD_GOSSIP_ITEM( 3, "Т8 Разбойник" , GOSSIP_SENDER_MAIN, 155);
                           player->ADD_GOSSIP_ITEM( 3, "Т8 Шаман" , GOSSIP_SENDER_MAIN, 156);
                           player->ADD_GOSSIP_ITEM( 3, "Т8 Чернокнижник" , GOSSIP_SENDER_MAIN, 157);
                           player->ADD_GOSSIP_ITEM( 3, "Т8 Воин" , GOSSIP_SENDER_MAIN, 158);
                           player->ADD_GOSSIP_ITEM( 3, "Т8 Рыцарь смерти" , GOSSIP_SENDER_MAIN, 159);
                           player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _creature->GetGUID());    
                     break;
       
               case 7://t9
                           player->ADD_GOSSIP_ITEM( 3, "Т9 Друид" , GOSSIP_SENDER_MAIN, 160);
                           player->ADD_GOSSIP_ITEM( 3, "Т9 Охотник" , GOSSIP_SENDER_MAIN, 161);
                           player->ADD_GOSSIP_ITEM( 3, "Т9 Маг" , GOSSIP_SENDER_MAIN, 162);
                           player->ADD_GOSSIP_ITEM( 3, "Т7 Паладин" , GOSSIP_SENDER_MAIN, 163);
                           player->ADD_GOSSIP_ITEM( 3, "Т9 Жрец" , GOSSIP_SENDER_MAIN, 164);
                           player->ADD_GOSSIP_ITEM( 3, "Т9 Разбойник" , GOSSIP_SENDER_MAIN, 165);
                           player->ADD_GOSSIP_ITEM( 3, "Т9 Шаман" , GOSSIP_SENDER_MAIN, 166);
                           player->ADD_GOSSIP_ITEM( 3, "Т9 Чернокнижник" , GOSSIP_SENDER_MAIN, 167);
                           player->ADD_GOSSIP_ITEM( 3, "Т9 Воин" , GOSSIP_SENDER_MAIN, 168);
                           player->ADD_GOSSIP_ITEM( 3, "Т9 Рыцарь смерти" , GOSSIP_SENDER_MAIN, 169);
                           player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _creature->GetGUID());    
                     break;
       
               case 8://t10
                           player->ADD_GOSSIP_ITEM( 3, "Т10 Друид" , GOSSIP_SENDER_MAIN, 170);
                           player->ADD_GOSSIP_ITEM( 3, "Т10 Охотник" , GOSSIP_SENDER_MAIN, 171);
                           player->ADD_GOSSIP_ITEM( 3, "Т10 Маг" , GOSSIP_SENDER_MAIN, 172);
                           player->ADD_GOSSIP_ITEM( 3, "Т10 Паладин" , GOSSIP_SENDER_MAIN, 173);
                           player->ADD_GOSSIP_ITEM( 3, "Т10 Жрец" , GOSSIP_SENDER_MAIN, 174);
                           player->ADD_GOSSIP_ITEM( 3, "Т10 Разбойник" , GOSSIP_SENDER_MAIN, 175);
                           player->ADD_GOSSIP_ITEM( 3, "Т10 Шаман" , GOSSIP_SENDER_MAIN, 176);
                           player->ADD_GOSSIP_ITEM( 3, "Т10 Чернокнижник" , GOSSIP_SENDER_MAIN, 177);
                           player->ADD_GOSSIP_ITEM( 3, "Т10 Воин" , GOSSIP_SENDER_MAIN, 178);
                           player->ADD_GOSSIP_ITEM( 3, "Т10 Рыцарь смерти" , GOSSIP_SENDER_MAIN, 179);
                           player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _creature->GetGUID());    
                     break;
       
               case 9://t11
                           player->ADD_GOSSIP_ITEM( 3, "Т11 Друид" , GOSSIP_SENDER_MAIN, 180);
                           player->ADD_GOSSIP_ITEM( 3, "Т11 Охотник" , GOSSIP_SENDER_MAIN, 181);
                           player->ADD_GOSSIP_ITEM( 3, "Т11 Маг" , GOSSIP_SENDER_MAIN, 182);
                           player->ADD_GOSSIP_ITEM( 3, "Т11 Паладин" , GOSSIP_SENDER_MAIN, 183);
                           player->ADD_GOSSIP_ITEM( 3, "Т11 Жрец" , GOSSIP_SENDER_MAIN, 184);
                           player->ADD_GOSSIP_ITEM( 3, "Т11 Разбойник" , GOSSIP_SENDER_MAIN, 185);
                           player->ADD_GOSSIP_ITEM( 3, "Т11 Шаман" , GOSSIP_SENDER_MAIN, 186);
                           player->ADD_GOSSIP_ITEM( 3, "Т11 Чернокнижник" , GOSSIP_SENDER_MAIN, 187);
                           player->ADD_GOSSIP_ITEM( 3, "Т11 Воин" , GOSSIP_SENDER_MAIN, 188);
                           player->ADD_GOSSIP_ITEM( 3, "Т11 Рыцарь смерти" , GOSSIP_SENDER_MAIN, 189);
                           player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _creature->GetGUID());    
                     break;
 
               case 10://t5
                           player->ADD_GOSSIP_ITEM( 3, "Пират" , GOSSIP_SENDER_MAIN, 500);
                           player->ADD_GOSSIP_ITEM( 3, "Мурж. Костюм" , GOSSIP_SENDER_MAIN, 501);
                           player->ADD_GOSSIP_ITEM( 3, "Женс. Костюм (Сад чудес)" , GOSSIP_SENDER_MAIN, 502);
                           player->ADD_GOSSIP_ITEM( 3, "Тыква" , GOSSIP_SENDER_MAIN, 503);
                           player->ADD_GOSSIP_ITEM( 3, "Зимний наряд" , GOSSIP_SENDER_MAIN, 504);
                           player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _creature->GetGUID());        
       break;
                   case 100:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_16_ENTRYID, 19019);    
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Оружие трансмогифицировано!", player->GetGUID());
         break;
             case 101:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_16_ENTRYID, 32837);    
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Оружие трансмогифицировано!", player->GetGUID());
         break;
             case 102:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_17_ENTRYID, 32838);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Оружие трансмогифицировано!", player->GetGUID());
         break;
             case 103:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_18_ENTRYID, 34334);    
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Оружие трансмогифицировано!", player->GetGUID());
         break;
             case 104:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_18_ENTRYID, 30318);    
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Оружие трансмогифицировано!", player->GetGUID());
         break;
             case 105:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_16_ENTRYID, 30316);    
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Оружие трансмогифицировано!", player->GetGUID());
         break;
             case 106:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_16_ENTRYID, 46017);    
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Оружие трансмогифицировано!", player->GetGUID());
         break;
             case 110:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 29093);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 29095);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 29091);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 29092);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 29094);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т4 Друид", player->GetGUID());
         break;
             case 111:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 29081);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 29084);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 29082);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 29085);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 29083);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т4 Охотник", player->GetGUID());
         break;
             case 112:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 29076);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 29079);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 29077);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 29080);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 29078);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т4 Маг", player->GetGUID());
         break;
             case 113:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 29061);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 29064);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 29062);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 29065);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 29063);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т4 Паладин", player->GetGUID());
         break;
             case 114:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 29049);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 29054);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 29050);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 29055);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 29053);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т4 Жрец", player->GetGUID());
         break;
             case 115:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 29044);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 29047);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 29045);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 29048);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 29046);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т4 Разбойник", player->GetGUID());
         break;
             case 116:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 29035);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 29037);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 29033);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 29034);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 29036);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т4 Шаман", player->GetGUID());
         break;
             case 117:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 28963);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 28967);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 28964);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 28968);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 28966);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т4 Чернокнижник", player->GetGUID());
         break;
             case 118:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 29021);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 29023);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 29019);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 29020);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 29022);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т4 Воин", player->GetGUID());
         break;
             case 500:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 12185);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_6_ENTRYID, 22743);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_8_ENTRYID, 22744);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 22745);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 22742);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 0);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_9_ENTRYID, 0);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 0);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_19_ENTRYID, 0);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_16_ENTRYID, 0);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_18_ENTRYID, 8225);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_14_ENTRYID, 0);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_17_ENTRYID, 0);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Пират", player->GetGUID());
         break;
             case 501:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 49715);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_6_ENTRYID, 0);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_8_ENTRYID, 0);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 10035);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 10036);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 0);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_9_ENTRYID, 0);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 0);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_19_ENTRYID, 0);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_16_ENTRYID, 0);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_4_ENTRYID, 0);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_14_ENTRYID, 0);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_17_ENTRYID, 0);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Мурж. Костюм", player->GetGUID());
         break;
             case 502:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 44803);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_6_ENTRYID, 0);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_8_ENTRYID, 0);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 0);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 44800);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 0);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_9_ENTRYID, 0);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 0);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_19_ENTRYID, 0);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_16_ENTRYID, 0);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_4_ENTRYID, 6833);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_18_ENTRYID, 45067);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_14_ENTRYID, 0);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_17_ENTRYID, 0);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Женс. Костюм", player->GetGUID());
         break;
             case 503:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 33292);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Тыква", player->GetGUID());
         break;
             case 504:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 21524);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_6_ENTRYID, 0);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_8_ENTRYID, 34086);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 24262);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 34085);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 0);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_9_ENTRYID, 0);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 0);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_19_ENTRYID, 0);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_16_ENTRYID, 0);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_4_ENTRYID, 0);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_13_ENTRYID, 0);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_14_ENTRYID, 0);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_17_ENTRYID, 0);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Зимний наряд", player->GetGUID());
         break;
             case 120:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 30233);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 30235);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 30231);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 30232);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 30234);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т5 Друид", player->GetGUID());
         break;
             case 121:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 30141);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 30143);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 30139);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 30140);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 30142);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т5 Охотник", player->GetGUID());
         break;
             case 122:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 30206);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 30210);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 30196);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 30205);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 30207);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т5 Маг", player->GetGUID());
         break;
             case 123:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 30131);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 30133);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 30129);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 30130);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 30132);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т5 Паладин", player->GetGUID());
         break;
             case 124:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 30161);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 30163);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 30159);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 30160);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 30162);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т5 Жрец", player->GetGUID());
         break;
             case 125:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 30146);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 30149);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 30144);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 30145);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 30148);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т5 Разбойник", player->GetGUID());
         break;
             case 126:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 30166);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 30168);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 30164);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 30165);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 30167);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т5 Шаман", player->GetGUID());
         break;
             case 127:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 30212);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 30215);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 30214);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 30211);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 30213);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т5 Чернокнижник", player->GetGUID());
         break;
             case 128:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 30115);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 30117);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 30113);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 30114);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 30116);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т5 Воин", player->GetGUID());
         break;
             case 130:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 31040);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 31049);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 31043);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 31035);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 31046);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т6 Друид", player->GetGUID());
         break;
             case 131:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 31003);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 31006);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 31004);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 31001);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 31005);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т6 Охотник", player->GetGUID());
         break;
             case 132:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 31056);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 31059);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 31057);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 31055);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 31058);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т6 Маг", player->GetGUID());
         break;
             case 133:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 30987);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 30998);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 30991);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 30985);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 30995);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т6 Паладин", player->GetGUID());
         break;
             case 134:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 31063);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 31069);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 31066);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 31060);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 31068);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т6 Жрец", player->GetGUID());
         break;
             case 135:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 31027);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 31030);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 31028);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 31026);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 31029);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т6 Разбойник", player->GetGUID());
         break;
             case 136:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 31014);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 31023);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 31017);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 31008);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 31020);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т6 Шаман", player->GetGUID());
         break;
             case 137:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 31051);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 31054);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 31052);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 31050);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 31053);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т6 Чернокнижник", player->GetGUID());
         break;
             case 138:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 30972);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 30979);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 30975);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 30969);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 30977);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т6 Воин", player->GetGUID());
         break;
             case 140:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 40467);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 40470);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 40469);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 40466);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 40468);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т7 Друид", player->GetGUID());
         break;
             case 141:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 40505);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 40507);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 40503);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 40504);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 40506);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т7 Охотник", player->GetGUID());
         break;
             case 142:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 40416);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 40419);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 40418);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 40415);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 40417);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т7 Маг", player->GetGUID());
         break;
             case 143:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 40571);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 40573);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 40569);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 40570);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 40572);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т7 Паладин", player->GetGUID());
         break;
             case 144:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 40447);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 40450);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 40449);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 40445);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 40448);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т7 Жрец", player->GetGUID());
         break;
             case 145:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 40449);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 40502);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 40495);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 40496);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 40500);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т7 Разбойник", player->GetGUID());
         break;
             case 146:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 40516);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 40518);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 40514);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 40515);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 40517);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т7 Шаман", player->GetGUID());
         break;
             case 147:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 40421);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 40424);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 40423);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 40420);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 40422);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т7 Чернокнижник", player->GetGUID());
         break;
             case 148:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 40528);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 40530);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 40525);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 40527);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 40529);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т7 Воин", player->GetGUID());
         break;
             case 149:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 40554);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 40557);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 40550);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 40552);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 40556);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т7 Рыцарь смерти", player->GetGUID());
         break;
             case 150:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 46191);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 46196);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 46194);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 46189);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 46192);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т8 Друид", player->GetGUID());
         break;
             case 151:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 46143);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 46145);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 46141);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 46142);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 46144);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т8 Охотник", player->GetGUID());
         break;
             case 152:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 46129);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 46134);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 46130);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 46132);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 46133);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т8 Маг", player->GetGUID());
         break;
             case 153:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 46180);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 46182);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 46178);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 46179);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 46181);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т8 Паладин", player->GetGUID());
         break;
             case 154:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 46197);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 46190);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 46193);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 46188);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 46195);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т8 Жрец", player->GetGUID());
         break;
             case 155:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 46125);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 46127);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 46123);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 46124);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 46126);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т8 Разбойник", player->GetGUID());
         break;
             case 156:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 46209);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 46211);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 46206);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 46207);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 46210);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т8 Шаман", player->GetGUID());
         break;
             case 157:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 46140);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 46136);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 46137);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 46135);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 46139);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т8 Чернокнижник", player->GetGUID());
         break;
             case 158:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 46151);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 46149);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 46146);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 46148);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 46150);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т8 Воин", player->GetGUID());
         break;
             case 159:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 46115);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 46117);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 46111);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 46113);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 46116);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т8 Рыцарь смерти", player->GetGUID());
         break;
             case 160:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 48171);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 48168);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 48169);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 48172);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 48170);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т9 Друид", player->GetGUID());
         break;
             case 161:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 48262);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 48260);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 48264);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 48263);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 48261);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т9 Охотник", player->GetGUID());
         break;
             case 162:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 47761);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 47758);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 47759);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 47762);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 47760);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т9 Маг", player->GetGUID());
         break;
             case 163:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 48582);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 48580);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 48584);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 48583);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 48581);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т9 Паладин", player->GetGUID());
         break;
             case 164:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 48035);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 48029);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 48031);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 48037);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 48033);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т9 Жрец", player->GetGUID());
         break;
             case 165:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 48230);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 48228);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 48232);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 48231);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 48229);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т9 Разбойник", player->GetGUID());
         break;
             case 166:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 48323);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 48321);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 48325);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 48324);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 48322);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т9 Шаман", player->GetGUID());
         break;
             case 167:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 47789);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 47792);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 47791);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 47788);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 47790);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т9 Чернокнижник", player->GetGUID());
         break;
             case 168:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 48383);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 48381);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 48385);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 48384);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 48382);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т9 Воин", player->GetGUID());
         break;
             case 169:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 48488);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 48486);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 48490);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 48489);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 48487);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т9 Рыцарь смерти", player->GetGUID());
         break;
             case 170:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 51290);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 51292);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 51294);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 51291);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 51293);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т10 Друид", player->GetGUID());
         break;
             case 171:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 51286);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 51288);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 51289);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 51285);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 51287);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т10 Охотник", player->GetGUID());
         break;
             case 172:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 51281);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 51284);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 51283);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 51280);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 51282);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т10 Маг", player->GetGUID());
         break;
             case 173:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 51272);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 51273);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 51274);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 51270);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 51271);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т10 Паладин", player->GetGUID());
         break;
             case 174:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 51261);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 51264);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 51263);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 51260);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 51262);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т10 Жрец", player->GetGUID());
         break;
             case 175:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 51252);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 51254);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 51250);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 51251);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 51253);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т10 Разбойник", player->GetGUID());
         break;
             case 176:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 51237);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 51235);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 51239);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 51238);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 51236);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т10 Шаман", player->GetGUID());
         break;
             case 177:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 51231);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 51234);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 51233);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 51230);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 51232);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т10 Чернокнижник", player->GetGUID());
         break;
             case 178:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 51227);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 51229);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 51225);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 51226);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 51228);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т10 Воин", player->GetGUID());
         break;
             case 179:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 51312);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 51314);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 51310);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 51311);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 51313);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т10 Рыцарь смерти", player->GetGUID());
         break;
             case 180:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 65200);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 65203);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 65202);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 65199);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 65201);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т11 Друид", player->GetGUID());
         break;
             case 181:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 65206);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 65208);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 65204);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 65205);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 65207);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т11 Охотник", player->GetGUID());
         break;
             case 182:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 65210);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 65213);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 65212);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 65209);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 65211);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т11 Маг", player->GetGUID());
         break;
             case 183:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 65216);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 65218);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 65214);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 65215);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 65217);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т11 Паладин", player->GetGUID());
         break;
             case 184:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 65230);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 65233);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 65232);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 65229);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 65231);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т11 Жрец", player->GetGUID());
         break;
             case 185:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 65241);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 65243);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 65239);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 65240);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 65242);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т11 Разбойник", player->GetGUID());
         break;
             case 186:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 65256);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 65258);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 65254);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 65255);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 65257);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т11 Шаман", player->GetGUID());
         break;
             case 187:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 65260);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 65263);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 65262);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 65259);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 65261);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т11 Чернокнижник", player->GetGUID());
         break;
             case 188:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 65266);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 65268);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 65264);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 65265);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 65267);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т11 Воин", player->GetGUID());
         break;
             case 189:
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_1_ENTRYID, 65181);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_3_ENTRYID, 65183);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_5_ENTRYID, 65179);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_10_ENTRYID, 65180);
             player->UpdateUInt32Value(PLAYER_VISIBLE_ITEM_7_ENTRYID, 65182);
       player->CLOSE_GOSSIP_MENU();
             _creature->MonsterWhisper("Экипировка сменилась на Т11 Рыцарь смерти", player->GetGUID());
                     break;
           default:
           break;
       }
      }
     return true;
    }
};
 
void AddSC_npc_transmogweap()
{
       new npc_transmogweap();
}
