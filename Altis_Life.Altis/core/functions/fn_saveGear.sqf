#include "..\..\script_macros.hpp"
/*
    File: fn_saveGear.sqf
    Author: Bryan "Tonic" Boardwine
    Full Gear/Y-Menu Save by Vampire
    Edited: Itsyuka

    Description:
    Saves the players gear for syncing to the database for persistence..
*/
private["_return","_uItems","_bItems","_vItems","_pItems","_hItems","_yItems","_uMags","_vMags","_bMags","_pMag","_hMag","_uni","_ves","_bag","_handled","_savedVirtualItems"];
_return = [];
_savedVirtualItems = LIFE_SETTINGS(getArray,"saved_virtualItems");

_return pushBack uniform player;
_return pushBack vest player;
_return pushBack backpack player;
_return pushBack goggles player;
_return pushBack headgear player;
_return pushBack assignedITems player;
if(playerSide == west || playerSide == civilian && {LIFE_SETTINGS(getNumber,"save_civilian_weapons") isEqualTo 1}) then {
    _return pushBack primaryWeapon player;
    _return pushBack handgunWeapon player;
} else {
    _return pushBack [];
    _return pushBack [];
};

_uItems = [];
_uMags  = [];
_bItems = [];
_bMags  = [];
_vItems = [];
_vMags  = [];
_pItems = [];
_hItems = [];
_yItems = [];
_uni = [];
_ves = [];
_bag = [];

if(!(uniform player isEqualTo "")) then {
    {
        if (_x in (magazines player)) then {
            ADD(_uMags,[_x]);
        } else {
            ADD(_uItems,[_x]);
        };
    } forEach (uniformItems player);
};

if(!(backpack player isEqualTo "")) then {
    {
        if (_x in (magazines player)) then {
            ADD(_bMags,[_x]);
        } else {
            ADD(_bItems,[_x]);
        };
    } forEach (backpackItems player);
};

if(!(vest player isEqualTo "")) then {
    {
        if (_x in (magazines player)) then {
            ADD(_vMags,[_x]);
        } else {
            ADD(_vItems,[_x]);
        };
    } forEach (vestItems player);
};

if(count (primaryWeaponMagazine player) > 0 && alive player) then {
    _pMag = SEL((primaryWeaponMagazine player),0);

    if(!(_pMag isEqualTo "")) then {
        _uni = player canAddItemToUniform _pMag;
        _ves = player canAddItemToVest _pMag;
        _bag = player canAddItemToBackpack _pMag;
        _handled = false;

        if(_ves) then {
            ADD(_vMags,[_pMag]);
            _handled = true;
        };

        if(_uni && !_handled) then {
            ADD(_uMags,[_pMag]);
            _handled = true;
        };

        if(_bag && !_handled) then {
            ADD(_bMags,[_pMag]);
            _handled = true;
        };
    };
};

if(count (handgunMagazine player) > 0 && alive player) then {
    _hMag = ((handgunMagazine player) select 0);

    if(!(_hMag isEqualTo "")) then {
        _uni = player canAddItemToUniform _hMag;
        _ves = player canAddItemToVest _hMag;
        _bag = player canAddItemToBackpack _hMag;
        _handled = false;

        if(_ves) then {
            ADD(_vMags,[_hMag]);
            _handled = true;
        };

        if(_uni && !_handled) then {
            ADD(_uMags,[_hMag]);
            _handled = true;
        };

        if(_bag && !_handled) then {
            ADD(_uMags,[_hMag]);
            _handled = true;
        };
    };
};

if(count (primaryWeaponItems player) > 0) then {
    {
        ADD(_pItems,[_x]);
    } forEach (primaryWeaponItems player);
};

if(count (handgunItems player) > 0) then {
    {
        ADD(_hItems,[_x]);
    } forEach (handGunItems player);
};

{
    _val = ITEM_VALUE(_x);
    if (_val > 0) then {
        _yItems pushBack [_x,_val];
    };
} forEach _savedVirtualItems;

_return pushBack _uItems;
_return pushBack _uMags;
_return pushBack _bItems;
_return pushBack _bMags;
_return pushBack _vItems;
_return pushBack _vMags;
_return pushBack _pItems;
_return pushBack _hItems;
if(LIFE_SETTINGS(getNumber,"save_virtualItems") isEqualTo 1) then {
    _return pushBack _yItems;
} else {
    _return pushBack [];
};

life_gear = _return;
