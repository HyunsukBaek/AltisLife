/*
    File: fn_manageSC.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    User management of whether or not they want to be on a sidechat for their side.
*/
params [
  ["_unit",objNull,[objNull]],
  ["_bool",false,[false]],
  ["_side",civilian,[civilian]]
];

if (isNull _unit) exitWith {};

switch (_side) do {
    case west: {
        if (_bool) then {
            life_radio_indep radioChannelAdd [_unit];
        } else {
            life_radio_indep radioChannelRemove [_unit];
        };
    };

    case independent: {
        if (_bool) then {
            life_radio_indep radioChannelAdd [_unit];
        } else {
            life_radio_indep radioChannelRemove [_unit];
        };
    };
};
