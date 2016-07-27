/*
    File: fn_wantedBounty.sqf
    Author: Bryan "Tonic" Boardwine"
    Database Persistence By: ColinM
    Assistance by: Paronity
    Stress Tests by: Midgetgrimm

    This file is for Nanou's HeadlessClient.

    Description:
    Checks if the person is on the bounty list and awards the cop for killing them.
*/
private["_civ","_cop","_id","_half","_result","_queryResult","_amount"];
params [
  ["_uid","",[""]],
  ["_civ",objNull,[objNull]],
  ["_cop",objNull,[objNull]],
  ["_half",false,[false]]
];
if (isNull _civ || isNull _cop) exitWith {};

_query = format["SELECT wantedID, wantedName, wantedCrimes, wantedBounty FROM wanted WHERE active='1' AND wantedID='%1'",_uid];
_queryResult = [_query,2] call HC_fnc_asyncCall;

if (count _queryResult != 0) then
{
    _amount = _queryResult select 3;
    if (_amount != 0) then {
        if (_half) then {
            [((_amount) / 2),_amount] remoteExecCall ["life_fnc_bountyReceive",_cop];
        } else {
            [_amount,_amount] remoteExecCall ["life_fnc_bountyReceive",_cop];
        };
    };
};
