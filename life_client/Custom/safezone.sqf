#define SAFETY_ZONES    [["Safe_Kav", 300],["Safe_Pyrgos", 300],["Safe_Airport", 100], ["Safe_Athira", 100], ["Safe_Sofia", 100], ["Safe_Casino", 30]] // Syntax: [["marker1", radius1], ["marker2", radius2], ...]
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