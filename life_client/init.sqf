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
[] execVM "Custom\CL.sqf";
[] execVM "Custom\CL2.sqf";
[] execVM "admintools\loop.sqf";	//Admin Helper
[] execVM "Custom\teargas.sqf"; //TearGas

//Cop & Medic Radio disable
enableRadio false;
enableSentences false;
StartProgress = true;


//--- Disable remote sensors (raycasting)
disableRemoteSensors true;

//--- Group cleanup
[] spawn {
  while {true} do {
    uiSleep 30;

    //--- Group cleanup
    {
      private _group = _x;

      //--- If group is local and empty
      if (local _group && {count units _group <= 0}) then {
        deleteGroup _x;
      };
    } forEach allGroups;
  };
};