#include "..\..\script_macros.hpp"

/*
	File: autoSetPolice.sqf
	Author: Jason_000
	
	Description:
	Sets mx loadout to the player
*/
if (playerSide == independent) exitWith {hint "You must be a cop to purchase this!"};  //cops only
if (playerSide == civilian) exitWith {hint "You must be a cop to purchase this!"};  //cops only

if((FETCH_CONST(life_coplevel)) < 2) exitWith { hint "자동 아이템 세팅 하려면 경찰2레벨 이상되야합니다!"};  //level 2+
/*
{
	exitWith { hint "You are not the right level!"};  //level 3+
};
*/
if (life_cash > 79999) then //100k
{
	life_cash = life_cash - 80000;  //100k
	hintSilent "80000원이 차감되었습니다";
	sleep 2;
	hintSilent "유니폼제외 모두 벗고 새로 세팅합니다. ";
	//Removes all items the player has (Not Y Menu)
	RemoveAllWeapons player;
	{ player removeMagazine _x; } forEach (magazines player);
	removeVest player;
	removeBackpack player;
	removeHeadGear player;
	sleep 2;
	//Arma id for weapons, clothes, ...
	player addVest "V_TacVest_blk_POLICE";
	player addBackpack "B_AssaultPack_blk";
	player addHeadGear "H_Beret_blk_POLICE";
	player addWeapon "arifle_SDAR_F"; //lethal
	player addMagazine "20Rnd_556x45_UW_mag";
	player addMagazine "20Rnd_556x45_UW_mag";
	player addMagazine "20Rnd_556x45_UW_mag";
	player addMagazine "20Rnd_556x45_UW_mag";	
	player addMagazine "20Rnd_556x45_UW_mag";	
	player addMagazine "20Rnd_556x45_UW_mag";	
	player addWeapon "hgun_P07_snds_F"; //tazer
	player addMagazine "16Rnd_9x21_Mag";
	player addMagazine "16Rnd_9x21_Mag";
	player addMagazine "16Rnd_9x21_Mag";
	player addMagazine "16Rnd_9x21_Mag";
	player addWeapon "NVGoggles"; // silencer
	//player addItem "ToolKit"; // silencer
	player addItem "FirstAidKit"; // silencer
	player addItem "FirstAidKit"; // silencer
	player addItem "Binocular";
	//Virtual items, who knows might be used... -check config_master
	hintSilent "모든 장비가 세팅되었습니다! 오늘도 순찰 열심히!!!";
}
else
{
 hintSilent "8만원입니다.. 돈찾아오세요!";
};