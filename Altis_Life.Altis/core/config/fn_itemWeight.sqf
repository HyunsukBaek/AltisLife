#include "..\..\script_macros.hpp"
/*
    File: fn_itemWeight.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Gets the items weight and returns it.
*/
private["_item"];
_item = param [0,"",[""]];
if (_item isEqualTo "") exitWith {};

M_CONFIG(getNumber,"VirtualItems",_item,"weight");
