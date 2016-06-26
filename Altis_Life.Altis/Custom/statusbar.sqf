#include "..\script_macros.hpp"
waitUntil {!(isNull (findDisplay 46))};
disableSerialization;

_rscLayer = "statusBar" call BIS_fnc_rscLayer;
_rscLayer cutRsc["statusBar","PLAIN"];
systemChat format["Welcome to AOSOUL Life Server", _rscLayer];

[] spawn {
	sleep 5;
	_statusText = "Welcome";
	_counter = 180;
	_timeSinceLastUpdate = 0;
	while {true} do
	{
		sleep 1;
		_counter = _counter - 1;
		_statusText = "cafe.naver.com/alflrss";
		((uiNamespace getVariable "statusBar")displayCtrl 1000)ctrlSetText format[
		"%7 | FPS: %1 | Cop : %2 | Medic : %3 | Civ: %4 | Cash: %5 | Bank: %6", 
		round diag_fps, west countSide playableUnits, independent countSide playableUnits, civilian countSide playableUnits, [CASH] call life_fnc_numberText,[BANK] call life_fnc_numberText, _statusText, _counter];
	}; 
	uiSleep 20;


		if(isNull ((uiNamespace getVariable "statusBar")displayCtrl 55554)) then
		{
			diag_log "statusbar is null create";
			disableSerialization;
			_rscLayer = "statusBar" call BIS_fnc_rscLayer;
			_rscLayer cutRsc["statusBar","PLAIN"];
		};
};