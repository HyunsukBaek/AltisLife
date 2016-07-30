/*
    File: fn_wantedBounty.sqf
    Author: Bryan "Tonic" Boardwine"
    Database Persistence By: ColinM
    Assistance by: Paronity
    Stress Tests by: Midgetgrimm

    Description:
    Checks if the person is on the bounty list and awards the cop for killing them.
*/
private["_id","_result","_queryResult","_amount"];
params [
  ["_uid","",[""]],
  ["_civ",objNull,[objNull]],
  ["_cop",objNull,[objNull]],
  ["_half",false,[false]]
];
if (isNull _civ || isNull _cop) exitWith {};

_query = format["SELECT wantedID, wantedName, wantedCrimes, wantedBounty FROM wanted WHERE active='1' AND wantedID='%1'",_uid];
_queryResult = [_query,2] call DB_fnc_asyncCall;

if (!(_queryResult isEqualTo [])) then {
    _amount = _queryResult select 3;
    if (_amount != 0) then {
        if (_half) then {
            [((_amount) / 2),_amount] remoteExecCall ["life_fnc_bountyReceive",(owner _cop)];
        } else {
            [_amount,_amount] remoteExecCall ["life_fnc_bountyReceive",(owner _cop)];
        };
    };
};
