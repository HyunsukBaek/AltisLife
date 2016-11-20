/*
	File: fn_processCasinoTest.sqf
	
	Author: Steven for WolfPack Server

	Description:
	Master handling for processing casino slots
*/
if(life_atmbank > 9999999) exitWith {hint "통장에 1천만원 이상 가진 유저는 사용할 수 없습니다."};
if(life_cash > 999999) exitWith {hint "현금 1백만원 이상 가진 유저는 사용할 수 없습니다."};
if( (life_atmbank + life_cash) < 2000000) exitWith {hint "자산이 2백만원 이하인 유저는 사용할 수 없습니다."};


private["_source","_hasLicense","_ui","_needID","_cP","_cost","_type","_winAmount","_rollA","_rollB","_rollC","_slots","_idxA","_idxB","_idxC"];
_source = param [0,ObjNull,[ObjNull]];
_type = param [3,-1,[0]];

//Error check
if(isNull _source) exitWith {};

/*
경찰 사용
if(playerSide != civilian) exitWith 
{
	hint "You are not allowed to gamble whitelist on duty."; 
	//5 cutText ["","PLAIN"]; 
	life_is_processing = false;
};
*/

if(player distance _source > 20) exitWith 
{
	hint "You need to stay within 20m to play."; 
	//5 cutText ["","PLAIN"]; 
	life_is_processing = false;
};

//_needID = ["license_civ_idcard"] call life_fnc_varToStr;
//_hasLicense = missionNamespace getVariable ((["idcard",0] call life_fnc_licenseType) select 0);
//if(!_hasLicense) exitWith{hint format["You need an %1 to gamble!",_needID]; 5 cutText ["","PLAIN"]; life_is_processing = false;};

switch (_type) do
{
	case 0:{_cost = 1000;};//penny snatcher's
	case 1:{_cost = 2000;};//average joe's
	case 2:{_cost = 5000;};//high roller's
	case 3:{_cost = 10000;};//불법 카지노 1
	case 4:{_cost = 20000;};//불법 카지노 2	
	case 5:{_cost = 50000;};//불법 카지노 1
};
_winAmount = 0;

if(life_cash >= _cost) then
{
	//Setup our background
	disableSerialization;
	
	_source say3D "caching";
	
	5 cutRsc ["life_slotmachine","PLAIN"];
	_ui = uiNameSpace getVariable "life_slotmachine";
	_rollA = _ui displayCtrl 38207;
	_rollB = _ui displayCtrl 38208;
	_rollC = _ui displayCtrl 38209;
	_cP = 0.0;

	//_slots = ["textures\casino\slotrol_A.jpg","textures\casino\slotrol_B.jpg","textures\casino\slotrol_C.jpg","textures\casino\slotrol_WP.jpg"];
	_slots = ["textures\Slots\SlotMachine\cherry.jpg","textures\Slots\SlotMachine\leaf.jpg","textures\Slots\SlotMachine\plum.jpg","textures\Slots\SlotMachine\grapes.jpg","textures\Slots\SlotMachine\glass.jpg","textures\Slots\SlotMachine\bell.jpg","textures\Slots\SlotMachine\seven.jpg","textures\Slots\SlotMachine\bar.jpg"];
	
	life_is_processing = true;
	//hint "SPINNING..."; 5 cutText ["","PLAIN"];
	_source say3D "slotspinSound";
	//[["slotspinSound"],"life_fnc_casinoSounds",nil,true] spawn life_fnc_MP;
	
	//_rollA ctrlSetText ("textures\Slots\SlotMachine\spinning.paa");
	//_rollB ctrlSetText ("textures\Slots\SlotMachine\spinning.paa");
	//_rollC ctrlSetText ("textures\Slots\SlotMachine\spinning.paa");
	
	while{true} do
	{
		sleep  0.1;
		_cP = _cP + 0.02;
		if(_cp <= 0.5)then
		{
			_idxA = [] call life_fnc_slotMachineRandomizer; // Get random number
			_rollA ctrlSetText (_slots select _idxA); // Show final state.
		};
		if(_cp <= 0.7)then
		{
			_idxB = [] call life_fnc_slotMachineRandomizer; // Get random number
			_rollB ctrlSetText (_slots select _idxB); // Show final state.
		};
		if(_cp <= 0.9)then
		{
			_idxC = [] call life_fnc_slotMachineRandomizer; // Get random number
			_rollC ctrlSetText (_slots select _idxC); // Show final state.
		};
		if(_cP >= 1.1) exitWith 
		{
		};
		if(player distance _source > 50) exitWith {};
	};
	if(player distance _source > 50) exitWith {hint "You need to stay within 50m to play."; 5 cutText ["","PLAIN"]; life_is_processing = false;};
	
	life_cash = life_cash - _cost;
	
	//At the moment results are calculated by the combination of the 3 end positions of the rolls
	_winAmount = [_idxA,_idxB,_idxC,_type] call life_fnc_slotMachineRewards; 
	
	//now see if we won
	if(_winAmount > 0) then
	{
		life_cash = life_cash + _winAmount;
		if(_winAmount >= 200000) then
		{
			//5 cutText ["","PLAIN"];
			hint format["You have won the jackpot of $%1",_winAmount]; 
			//5 cutText ["","PLAIN"];
			//titleText[format["You have won the jackpot of £%1",_winAmount],"PLAIN"];
			_source say3D "jackpotSound";
			[[_source],"life_fnc_SlotJackpotSound",nil,true] spawn life_fnc_MP;
			// Does this work?
			[["jackpotSound"],"life_fnc_casinoSounds",nil,true] spawn life_fnc_MP;
			_cP = 0.01;
			while{true} do
			{
				sleep  0.3;
				_cP = _cP + 0.10;
				if(_cP >= 1) exitWith {};
			};
		}
		else
		{
			if(_winAmount == _cost) then //won back money
			{
				//5 cutText ["","PLAIN"];
				hint format["You have won your money back. ($%1)",_winAmount];
				//5 cutText ["","PLAIN"];
				//titleText[format["You have won your money back. (£%1)",_winAmount],"PLAIN"];
			}
			else
			{
				//5 cutText ["","PLAIN"];
				hint format["You have won $%1",_winAmount];
				//5 cutText ["","PLAIN"];
				//titleText[format["You have won £%1",_winAmount],"PLAIN"];
			};
		};
	}
	else
	{
		//5 cutText ["","PLAIN"];
		hint format["You have lost your bet of ($%1)",_cost];
		//5 cutText ["","PLAIN"];
		//titleText[format["You have lost your bet of ($%1)",_cost],"PLAIN"];
	};
	
	life_is_processing = false;
}
else
{
	if(life_cash < _cost) exitWith {hint (format["You need $%1 to play this machine.",_cost]); 
	//5 cutText ["","PLAIN"]; 
	life_is_processing = false;};
};

5 cutText ["","PLAIN"];