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
		_statusText = "";	//Left Message
		((uiNamespace getVariable "statusBar")displayCtrl 1000)ctrlSetText format[
		"%6 | Cop : %1 | Medic : %2 | Civ: %3 | Cash: %4 | Bank: %5", 
		west countSide playableUnits, independent countSide playableUnits, civilian countSide playableUnits, [CASH] call life_fnc_numberText,[BANK] call life_fnc_numberText, _statusText, _counter];
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