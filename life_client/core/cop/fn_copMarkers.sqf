/*
    File: fn_copMarkers.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Marks cops on the map for other cops. Only initializes when the actual map is open.
*/
_markers = [];
_cops = [];
_units = [];

//Check if medics (indep) are in the room. -fn_requestMedic.sqf
_medicsOnline = {_x != player && {side _x isEqualTo independent} && {alive _x}} count playableUnits > 0;


sleep 0.5;
if (visibleMap) then {
    {if (side _x isEqualTo west) then {_cops pushBack _x;}} forEach playableUnits; //Fetch list of cops / blufor

    // Check to see if medics are online else create dead markers. -Raid
    if (!_medicsOnline) then {
        {
            _name = _x getVariable "name";
            _down = _x getVariable ["Revive",false];
            if (!isNil "_name" && !_down) then {
                _units pushBack _x;
            };
        } forEach allDeadMen;
        //Loop through and create markers.
        {
            _marker = createMarkerLocal [format["%1_dead_marker",_x],visiblePosition _x];
            _marker setMarkerColorLocal "ColorRed";
            _marker setMarkerTypeLocal "loc_Hospital";
            _marker setMarkerTextLocal format["%1",(_x getVariable ["name","Unknown Player"])];
            _markers pushBack _marker;
        } forEach _units;
    };

    //Create markers
    {
        if (_x != player) then {
            _marker = createMarkerLocal [format["%1_marker",_x],visiblePosition _x];
            _marker setMarkerColorLocal "ColorBLUFOR";
            _marker setMarkerTypeLocal "Mil_dot";
            _marker setMarkerTextLocal format["%1", _x getVariable ["realname",name _x]];

            _markers pushBack [_marker,_x];
        };
    } forEach _cops;

    while {visibleMap} do {
        {
            private["_unit"];
            _unit = _x select 1;
            if (!isNil "_unit" && !isNull _unit) then {
                (_x select 0) setMarkerPosLocal (visiblePosition _unit);
            };
        } forEach _markers;
        if (!visibleMap) exitWith {};
        sleep 0.02;
    };

    {deleteMarkerLocal (_x select 0);} forEach _markers;
    _markers = [];
    _cops = [];
};
