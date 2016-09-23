/*
    File: fn_tazeSound.sqf
    Author:

    Description:

*/
private["_source"];
_source = param [0,objNull,[objNull]];
if (isNull _source) exitWith {};
_source say3D "tazerSound";
