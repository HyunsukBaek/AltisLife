#include "..\..\script_macros.hpp"
/*
    File: fn_knockedOut.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Starts and monitors the knocked out state.
*/
private "_obj";
params [
    ["_target",objNull,[objNull]],
    ["_who","",[""]]
];

if (isNull _target) exitWith {};
if (_target != player) exitWith {};
if (_who isEqualTo "") exitWith {};

titleText[format[localize "STR_Civ_KnockedOut",_who],"PLAIN"];
//player playMoveNow "Incapacitated";
player playAction "GestureSpasm4";	//모션 변경
disableUserInput true;

_obj = "Land_ClutterCutter_small_F" createVehicle ASLTOATL(visiblePositionASL player);
_obj setPosATL ASLTOATL(visiblePositionASL player);

life_isknocked = true;
player attachTo [_obj,[0,0,0]];
sleep 15;
player playMoveNow "AmovPpneMstpSrasWrflDnon";
player playAction "gestureNod";//모션 풀리 제스쳐
disableUserInput false;
detach player;
deleteVehicle _obj;
life_isknocked = false;
player setVariable ["robbed",false,true];
