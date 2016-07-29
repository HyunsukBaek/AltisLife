#include "\life_server\script_macros.hpp"
/*
    File: fn_jailSys.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    I forget?
*/
private["_unit","_bad","_id","_ret"];
params [
  ["_unit",objNull,[objNull]],
  ["_bad",false,[false]]
];
if (isNull _unit) exitWith {};
_id = owner _unit;

_ret = [_unit] call life_fnc_wantedPerson;
[_ret,_bad] remoteExec ["life_fnc_jailMe",_id];
