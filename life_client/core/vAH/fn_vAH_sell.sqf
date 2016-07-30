#include "..\..\script_macros.hpp"
/*
	File: fn_vAH_sell.sqf
	Author: Fresqo 
	Updated to 4.4r2 by: PhatPuke
	Description: sells items to our auction house and blah blah too much fml
*/

private["_able","_uid","_dialog","_myListbox","_myQuantity","_onGuy","_details","_tquantity","_myTotal","_price","_typeb","_type","_classname","_realName","_bad","_tax","_action","_selectedSell","_quantity","_tochangePriceText","_tochangePriceNumber","_tochangeQuantityText","_tochangeQuantityNumber","_invItem"];
disableSerialization;
_dialog = findDisplay 15600;
_myListbox = _dialog displayCtrl 15601;
_able = 4;

if (!vAH_loaded) exitWith {hint "현재 경매장 처리중입니다. 잠시후 다시 시도해주세요."};

_bad = false;
_realName = "";
//switch (FETCH_CONST(life_donorlevel)) do {
//case 1: {_able = 5};
//	case 2: {_able = 6};
//	case 3: {_able = 7};
//	case 4: {_able = 8};
//	case 5: {_able = 9};
//	default {_able = 4};
//};

_uid = getPlayerUID player;
if (({_x select 5 == _uid} count all_ah_items) >= _able) exitWith {hint format["%1 개의 아이템만 등록할수 있습니다",_able];closeDialog 0;};

_price = ctrlText 15603;
_quantity = ctrlText 15602;

if(! ([_price] call TON_fnc_isnumber)) exitWith {hint "가격창에 숫자를 입력해야합니다";};
if(! ([_quantity] call TON_fnc_isnumber)) exitWith {hint "수량란에 숫자를 입력해야합니다";};
_price = parseNumber _price;
_quantity = parseNumber _quantity;

if (lbCurSel _myListbox < 0) exitWith {hint "아이템을 선택하세요";};
_selectedSell = call compile (_myListbox lbData (lbCurSel _myListbox));

_classname = _selectedSell select 0;
if (_classname == "yolo") exitWith {};
_typeb = _selectedSell select 1;
_invItem = [_selectedSell,2,3,[3]] call BIS_fnc_param;
if (_invItem != 3) exitWith {hint "이미 팔렸거나 기간기 경과한 아이템은 구매할 수 없습니다"};
if(_typeb == "ymenu") then {_type = 0} else {_type = 1};

if (_price < 1) exitWith {hint "0원이상 입력하세요"};
if (_price > 20000000) exitWith {hint "20mil 이하로 입력하세요"};

_tax = round (_price * 0.03);

switch (_type) do
{
	case 0: {
				_realName = localize ITEM_NAME(_classname);
				if (_quantity > 100) then {_bad = true; hint "말이 되는소리를해 바보야.. 100개 이하로만 올리세요"};
			};
	case 1: {if (_quantity > 1) then
			{
				_details = [_classname] call life_fnc_fetchCfgDetails;
				if (!(_details select 6 == "CfgMagazines")) then {
				hint "You can only sell 1 of any of this item!";_bad = true;};
				_onGuy = {_classname == _x} count (magazines player);
				if (_onGuy < _quantity) then {hint "You dont have that many!";_bad = true;}
			};
			_realName = ([_classname] call life_fnc_fetchCfgDetails) select 1;
			};
};

if (_bad) exitWith {closeDialog 0;};

_action = [format["You will be taxed $%1 . Continue?",_tax],"Auction Confirmation","CONTINUE","CANCEL"] call BIS_fnc_guiMessage;
if(_action) then {
		if(BANK < _tax) exitWith {hint "수수료가 bank 에 모자랍니다";_bad = true;};

	switch (_type) do {
		case 0: {if(!([false,_classname,_quantity] call life_fnc_handleInv)) then {hint "You dont have that many!";_bad = true;};};
		case 1: {
			_tquantity = _quantity +1;
			for [{_i=1}, {_i<_tquantity}, {_i=_i+1}] do
			{
				[_classname,false] spawn life_fnc_handleItem;
			};
		};
	};
	if (_bad) exitWith {closeDialog 0;};
	[4,_type,_quantity,_price,getPlayerUID player,_classname,_realName,name player] remoteExecCall ["TON_fnc_vAH_update",RANY];
	hint "Auction Successfully Added";
	BANK = BANK - _tax;
	closeDialog 0;
} else {
	closeDialog 0;
};

[1] call SOCK_fnc_updatePartial;
[3] call SOCK_fnc_updatePartial;
