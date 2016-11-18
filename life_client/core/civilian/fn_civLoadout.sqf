/*
    File: fn_civLoadout.sqf
    Author: Tobias 'Xetoxyc' Sittenauer
    
    Description:
    Loads the civs out with the default gear, with randomized clothing.
*/
private["_handle"];
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

_clothings = ["BreakingBad","Caiden69","A3LCokeShirt","A3LCatShirt","cg_awesome1","cg_bb1",
"cg_beats1","cg_bipolar1","cg_burgerking1","cg_catvideos1","cg_chickens1","cg_condoms1",
"cg_csgo1","cg_dad1","cg_deeznuts1","cg_ea1","cg_et1","cg_evolution1","cg_ferrari1",
"cg_fightclub1","cg_gameover1","cg_gamerepeat1","cg_got1","cg_hand1","cg_hearts1",
"cg_homer1","cg_illuminati1","cg_jason1","cg_joker1","cg_kfc1","cg_lambo1","cg_lego1",
"cg_loading1","cg_lsd1","cg_mario1","cg_mayan1","cg_mtv1","cg_nike1","cg_masterrace1",
"cg_peanut1","cg_pepsi1","cg_pika1","cg_steam1","cg_stoned1","cg_strippers1","cg_superman1",
"cg_taylorswift1","cg_tupac1","cg_turtles1","cg_upyours1","cg_woods1","cg_wow1",
"U_CivilianJerseyCasual_B","U_CivilianJerseyCasual_D","U_CivilianJerseyCasual_C",
"U_CivilianJerseyCasual_A","U_CivilianJerseyCasual_E","U_CivilianJerseyCasual_G",
"U_CivilianJerseyCasual_F","U_CivilianTShirt_F","U_CivilianTShirt_B","U_CivilianTShirt_G",
"U_CivilianTShirt_C","U_CivilianTShirt_E","U_CivilianTShirt_A","U_CivilianTShirt_D",
"U_CivilianTShirtCasual_B","U_CivilianTShirtCasual_D","U_CivilianTShirtCasual_E",
"U_CivilianTShirtCasual_A","U_CivilianTShirtCasual_G","U_CivilianTShirtCasual_I","U_CivilianTShirtCasual_H",
"U_CivilianTShirtCasual_F","U_CivilianTShirtCasual_C","A3LCloudShirt","fn_bendozlia1",
"fn_bendozlia2","fn_bendozlia3","fn_lahey1","fn_lahey2","fn_lahey3","fn_leppy1","fn_mileshigh1",
"fn_mongo","fn_shark","fn_whiskey","fn_wildboy1","A3LHandShirt","HI1","PH","A3LPikaShirt","RastaCiv",
"RFShirt","A3L_SkidRow","A3L_SkullBlack","A3LTigerShirt","A3LWolfShirt","Zannaza69"];

player addUniform (selectRandom _clothings);

/* ITEMS */
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemGPS";


[] call life_fnc_playerSkins;
[] call life_fnc_saveGear;
