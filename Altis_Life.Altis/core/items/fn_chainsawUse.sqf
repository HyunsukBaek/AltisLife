#include <macro.h>
/*
	File: fn_chainsawUse.sqf
	Author: Bryan "Tonic" Boardwine
	Edit: blaster
	
	Description:
	Main functionality for chainsaw in logging.
*/
closeDialog 0;
private["_mine","_itemWeight","_diff","_itemName"];
_mine = "";

switch (true) do {
	case (player distance (getMarkerPos "wood_1") < 50): {_mine = ["wood",2];};
	case (player distance (getMarkerPos "wood_2") < 50): {_mine = ["wood",2];};
	default {""};
};
//Mine check
if(EQUAL(_mine,"")) exitWith {hint localize "STR_ISTR_Logging_NotNear"};
if(vehicle player != player) exitWith {hint localize "STR_ISTR_Logging_MineVeh";};

_diff = [SEL(_mine,0),SEL(_mine,1),life_carryWeight,life_maxWeight] call life_fnc_calWeightDiff;

if(EQUAL(_diff,0)) exitWith {hint localize "STR_NOTF_InvFull"};

life_action_inUse = true;
for "_i" from 0 to 2 do {
	player say3D "chainsaw";
	
	player playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
	waitUntil{animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";};
	sleep 2.5;
};

if(([true,SEL(_mine,0),_diff] call life_fnc_handleInv)) then {
	_itemName = M_CONFIG(getText,"VirtualItems",SEL(_mine,0),"displayName");
	titleText[format[localize "STR_ISTR_Logging_Success",(localize _itemName),_diff],"PLAIN"];
};

life_action_inUse = false;