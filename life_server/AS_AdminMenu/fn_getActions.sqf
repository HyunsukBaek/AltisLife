_player = _this select 0;
_pid = getPlayerUID _player;


diag_log format ["%1",_pid];
[] call TON_fnc_config;

_allowed = false;
_level = 0;
{
	if ((_x select 0) isEqualTo _pid) then {_level = _x select 1; _allowed = true;};
} forEach AS_Allowed;

if (_level < 1 OR !_allowed) exitWith {[1,0] remoteExec ["life_fnc_ASreceiver",_player];};

_actions = [];
{
	_arr = _x select 1;
	if ((_x select 0) == _level) then
	{
		_actions = _arr;
	};
} forEach AS_Actions;

[0,_actions] remoteExec ["life_fnc_ASreceiver",_player];
[1,_level] remoteExec ["life_fnc_ASreceiver",_player];
