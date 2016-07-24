/*
이 스크립트는 ARMA AOS 서버의 소유물입니다.
무단으로 수정 및 배포 시 문제가 발생됨을 알려드립니다.
문의 : magicianaos@gmail.com
홈페이지 : http://cafe.naver.com/alflrss
*/
//Female Glide
removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;

player forceAddUniform "A3L_Bikini_Girl";
for "_i" from 1 to 3 do {player addItemToUniform "30Rnd_45ACP_Mag_SMG_01";};
player addBackpack "FLAY_HangGliderBlack_Bag";

player addWeapon "bv_FlashLight";
player addWeapon "Rangefinder";

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadio";
player linkItem "I_UavTerminal";
player linkItem "NVGoggles_OPFOR";

player setFace "RyanZombieNoFace";
player setSpeaker "Male03GRE";
