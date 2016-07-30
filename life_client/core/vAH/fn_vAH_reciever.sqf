#include "..\..\script_macros.hpp"
/*
	File: fn_vAH_reciever.sqf
	Description: messages and gives moneys etc from some auction house shiz
	Author: Ryan. Edited by Fresqo for our auction house
*/
private["_seller","_price","_item"];
params [
 [_mode, -1],
 [_info, -1]
];

switch (_mode) do
{
	case 0:
	{
		_item = _info select 0;
		_price = _info select 1;
		_seller = _info select 2;
		hint format["You bought items from %1 for $%2",_seller,[_price]call life_fnc_numberText];
		closeDialog 0;
	};
	case 1:
	{
		_seller = _info select 0;
		_price = _info select 1;
		hint parseText format
		[
			"%1 accepted one of your offers, you recieved<br/>
			<t color='#228B22'>%3%2</t><br/>", name _seller,[_price]call life_fnc_numberText,"$"
		];
		BANK = BANK + _price;
	};

};
