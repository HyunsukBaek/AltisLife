/*
	File: init.sqf
	Author: 
	
	Description:
	
*/
StartProgress = false;

[] execVM "briefing.sqf"; //Load Briefing
[] execVM "KRON_Strings.sqf";
[] execVM "randomWeather2.sqf";
StartProgress = true;