#include "..\..\script_macros.hpp"
/*
    File: fn_handleDamage.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Handles damage, specifically for handling the 'tazer' pistol and nothing else.
*/
private["_unit","_damage","_source","_projectile","_part","_curWep"];
_unit = SEL(_this,0);
_part = SEL(_this,1);
_damage = SEL(_this,2);
_source = SEL(_this,3);
_projectile = SEL(_this,4);

//Handle the tazer first (Top-Priority).
if (!isNull _source) then {
    if (_source != _unit) then {
        //if (!(_unit getVariable["Revive",false])) exitWith {};
        _curWep = currentWeapon _source;
        if (_projectile in ["B_9x21_Ball","B_556x45_dual"] && _curWep in ["hgun_P07_snds_F","arifle_SDAR_F"]) then {
            if (side _source == west && playerSide == civilian) then {
                private["_distance"];
                _distance = if (_projectile == "B_556x45_dual") then {100} else {35};
                _damage = false;
                if (_unit distance _source < _distance) then {
                    if (!life_istazed && !life_isknocked && !(_unit getVariable ["restrained",false])) then {
                        if (vehicle player != player) then {
                            if (typeOf (vehicle player) == "B_Quadbike_01_F") then {
                                player action ["Eject",vehicle player];
                                [_unit,_source] spawn life_fnc_tazed;
                            };
                        } else {
                            [_unit,_source] spawn life_fnc_tazed;
                        };
                    };
                };
            };

            //Temp fix for super tasers on cops.
            if (side _source == west && (playerSide == west || playerSide == independent)) then {
                _damage = false;
            };
        };
    };
};

if(vest _unit == "V_HarnessOGL_gry") then {
	if((time - life_action_delay) < 15) exitWith {hint localize "STR_NOTF_ActionDelay";};
	[_unit] spawn life_fnc_jihad;
	life_action_delay = time;
};

[] spawn life_fnc_hudUpdate;
_damage;
