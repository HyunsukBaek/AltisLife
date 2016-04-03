#define SAFETY_ZONES    [["Safe_Kav", 500],["Safe_Pirgos", 400]] // Syntax: [["marker1", radius1], ["marker2", radius2], ...]
#define MESSAGE "!!!!!!You are in a Safe Zone. Do not Fire!!!!!!"

     if (isDedicated) exitWith {};
     waitUntil {!isNull player};

switch (playerSide) do
{
	case west:
	{
	};
	
	case independent:
	{
		player addEventHandler ["Fired", {
            if ({(_this select 0) distance getMarkerPos (_x select 0) < _x select 1} count SAFETY_ZONES > 0) then
            {
             deleteVehicle (_this select 6);
             titleText [MESSAGE, "PLAIN", 3];
             };
        }];
	};
	case civilian:
	{
     player addEventHandler ["Fired", {
            if ({(_this select 0) distance getMarkerPos (_x select 0) < _x select 1} count SAFETY_ZONES > 0) then
            {
             deleteVehicle (_this select 6);
             titleText [MESSAGE, "PLAIN", 3];
             };
        }];
	};
};