/*
	Player clicked arrest/ok
*/

private ["_time"];

if(playerSide != west) exitWith {};
if(isNil "life_pInact_curTarget") exitWith {};

//Get minutes
_time = ctrlText 1400;

if(! ([_time] call TON_fnc_isnumber)) exitWith {
	hint localize "STR_ATM_notnumeric";
};

_time = parseNumber _time; //requested number
_time = round _time;

if(_time < 5 || _time > 120) exitWith { hint "5분에서 60분 까지 구속시간을 설정할 수 있습니다."; };

closeDialog 0;
[life_pInact_curTarget, _time] call life_fnc_arrestAction;