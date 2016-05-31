#include "..\..\script_macros.hpp"
/*
    File: fn_postNewsBroadcast.sqf
    Author: Jesse "tkcjesse" Schultz

    Description:
    Handles actions after the broadcast button is clicked.
*/
_mode = _this select 0;
private ["_mode","_coolDown"];

switch (_mode) do {
    case 0: {
        CASH = CASH - LIFE_SETTINGS(getNumber,"news_broadcast_cost");
        [0] call SOCK_fnc_updatePartial;
        life_broadcastTimer = time;
        publicVariable "life_broadcastTimer";
    };
    case 1: {
        _coolDown = LIFE_SETTINGS(getNumber,"news_broadcast_cooldown");
        hint format[localize "STR_News_BroadcastCooldown",[(_coolDown - (time - life_broadcastTimer))] call life_fnc_numberText];
    };
    case 2: {
        hint format[localize "STR_News_NotEnough",[LIFE_SETTINGS(getNumber,"news_broadcast_cost")] call life_fnc_numberText];
    };
};
