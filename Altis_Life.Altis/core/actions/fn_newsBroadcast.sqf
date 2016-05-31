#include "..\..\script_macros.hpp"
/*
    File: fn_newsBroadcast.sqf
    Author: Jesse "tkcjesse" Schultz

    Description:
    Creates the dialog and populates some data for the Channel 7 News Station.
*/
#define Cost 100103
#define Confirm 100104

private ["_msgCost","_display","_displayCost","_confirmBtn","_msgCooldown"];

if (!dialog) then {
    createDialog "life_news_broadcast";
};

disableSerialization;
_msgCooldown = LIFE_SETTINGS(getNumber,"news_broadcast_cooldown");
_msgCost = LIFE_SETTINGS(getNumber,"news_broadcast_cost");

_display = findDisplay 100100;
_displayCost = _display displayCtrl Cost;
_confirmBtn = _display displayCtrl Confirm;

_displayCost ctrlSetText format [localize "STR_News_BroadcastCost",[_msgCost] call life_fnc_numberText];
if (CASH < _msgCost) then {
    _confirmBtn buttonSetAction "[2] call life_fnc_postNewsBroadcast; closeDialog 0;";
} else {
    if (isNil "life_broadcastTimer" || {(time - life_broadcastTimer) > _msgCooldown}) then {
        _confirmBtn buttonSetAction "[0] call life_fnc_postNewsBroadcast; [ctrlText 100101,ctrlText 100102,profilename] remoteExec ['life_fnc_AAN',-2]; closeDialog 0;";
    } else {
        _confirmBtn buttonSetAction "[1] call life_fnc_postNewsBroadcast; closeDialog 0;";
    };
};
