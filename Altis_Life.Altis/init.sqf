/*
    File: init.sqf
    Author: 
    
    Description:
    
*/
StartProgress = false;

[] execVM "briefing.sqf"; //Load Briefing
[] execVM "KRON_Strings.sqf";

//Custom Script
[] execVM "Custom\randomWeather2.sqf";
//[] execVM "Custom\statusbar.sqf";
[] execVM "Custom\statusbar_loop.sqf";  //Status Bar Loop
[] execVM "Custom\safezone.sqf";

//Cop & Medic Radio disable
enableRadio false;
enableSentences false;
StartProgress = true;
