/*
    File: fn_corpse.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Hides dead bodies.
*/
private _corpse = param [0,objNull,[objNull]];
if (isNull _corpse) exitWith {};
if (alive _corpse) exitWith {}; //Stop script kiddies.

deleteVehicle _corpse;
