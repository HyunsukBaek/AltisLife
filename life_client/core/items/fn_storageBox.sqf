#include "..\..\script_macros.hpp"
/*
    File : fn_storageBox.sqf
    Author: NiiRoZz

    Description:
    Create Storage and attachto player;
*/
private["_object","_attachPos"];
params [
    ["_size",false,[false]]
];
if (!(nearestObject [player, "House"] in life_vehicles)) exitWith {hint localize "STR_ISTR_Box_NotinHouse";};

life_container_active = true;
closeDialog 0;

if (_size) then {
    _object = "B_supplyCrate_F" createVehicle [0,0,0];
} else {
    _object = "Box_IND_Grenades_F" createVehicle [0,0,0];
};

life_container_activeObj = _object;
_attachPos = [0.16, 3, ((boundingBoxReal _object) select 1) select 2];
[_object,false] remoteExecCall ["enableSimulationGlobal", RSERV];
_object attachTo[player, _attachPos];

clearWeaponCargoGlobal _object;
clearMagazineCargoGlobal _object;
clearItemCargoGlobal _object;
clearBackpackCargoGlobal _object;

titleText [localize "STR_NOTF_PlaceContainer", "PLAIN"];

//Loop Prevent running outside with the crate..
[] spawn {
    for "_i" from 0 to 1 step 0 do {
        if (!life_container_active || life_container_activeObj isEqualTo objNull || !((typeOf life_container_activeObj) in ["B_supplyCrate_F","Box_IND_Grenades_F"])) exitWith {};
        if (!(nearestObject [player, "House"] in life_vehicles)) exitWith {
            hint localize "STR_ISTR_Box_NotinHouse";
            detach life_container_activeObj;
            deleteVehicle life_container_activeObj;
            life_container_active = false;
            life_container_activeObj = objNull;
        };
        uiSleep 1;
    };
};
