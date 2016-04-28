/*
	File: fn_wantedAdd.sqf
	Author: Bryan "Tonic" Boardwine"
	Database Persistence By: ColinM
	Assistance by: Paronity
	Stress Tests by: Midgetgrimm

	This file is for Nanou's HeadlessClient.

	Description:
	Adds or appends a unit to the wanted list.
*/
private["_uid","_type","_index","_data","_crimes","_val","_customBounty","_name","_pastCrimes","_query","_queryResult"];
_uid = [_this,0,"",[""]] call BIS_fnc_param;
_name = [_this,1,"",[""]] call BIS_fnc_param;
_type = [_this,2,"",[""]] call BIS_fnc_param;
_customBounty = [_this,3,-1,[0]] call BIS_fnc_param;
if(_uid == "" OR _type == "" OR _name == "") exitWith {}; //Bad data passed.

//What is the crime?
switch(_type) do
{
	case "187V": {_type = ["187V",50000]};
	case "187": {_type = ["187",80000]};
	case "901": {_type = ["901",50000]};
	case "215": {_type = ["215",5000]};
	case "213": {_type = ["213",60000]};
	case "211": {_type = ["211",30000]};
	case "207": {_type = ["207",40000]};
	case "207A": {_type = ["207A",20000]};
	case "390": {_type = ["390",15000]};
	case "487": {_type = ["487",40000]};
	case "488": {_type = ["488",10000]};
	case "480": {_type = ["480",5000]};
	case "481": {_type = ["481",20000]};
	case "482": {_type = ["482",5000]};
	case "483": {_type = ["483",100000]};
	case "459": {_type = ["459",65000]};
	case "666": {_type = ["666",20000]};
	case "667": {_type = ["667",300000]};
	case "668": {_type = ["668",65000]};
	case "1": {_type = ["1",5000]};
	case "2": {_type = ["2",2000]};
	case "3": {_type = ["3",1500]};
	case "4": {_type = ["4",10000]};
	case "5": {_type = ["5",10000]};
	case "6": {_type = ["6",8000]};
	case "7": {_type = ["7",5000]};
	case "8": {_type = ["8",25000]};
	case "9": {_type = ["9",25000]};
	case "10": {_type = ["10",75000]};
	case "11": {_type = ["11",100000]};
	case "12": {_type = ["12",25000]};
	case "13": {_type = ["13",15000]};
	case "14": {_type = ["14",15000]};
	case "15": {_type = ["15",50000]};
	case "16": {_type = ["16",15000]};
	case "17": {_type = ["17",5000]};
	case "18": {_type = ["18",20000]};
	case "19": {_type = ["19",15000]};
	case "20": {_type = ["20",5000]};
	case "21": {_type = ["21",30000]};
	case "22": {_type = ["22",100000]};
	case "23": {_type = ["23",500000]};
	case "24": {_type = ["24",80000]};
	case "25": {_type = ["25",100000]};
	default {_type = [];};
};

if(count _type == 0) exitWith {}; //Not our information being passed...
//Is there a custom bounty being sent? Set that as the pricing.
if(_customBounty != -1) then {_type set[1,_customBounty];};
//Search the wanted list to make sure they are not on it.

_query = format["SELECT wantedID FROM wanted WHERE wantedID='%1'",_uid];
_queryResult = [_query,2,true] call HC_fnc_asyncCall;
_val = [(_type select 1)] call HC_fnc_numberSafe;
_number = _type select 0;

if(count _queryResult != 0) then
{
	_crime = format["SELECT wantedCrimes, wantedBounty FROM wanted WHERE wantedID='%1'",_uid];
	_crimeresult = [_crime,2] call HC_fnc_asyncCall;
	_pastcrimess = [_crimeresult select 0] call HC_fnc_mresToArray;
	if(_pastcrimess isEqualType "") then {_pastcrimess = call compile format["%1", _pastcrimess];};
	_pastCrimes = _pastcrimess;
	_pastCrimes pushBack _number;
	_pastCrimes = [_pastCrimes] call HC_fnc_mresArray;
	_query = format["UPDATE wanted SET wantedCrimes = '%1', wantedBounty = wantedBounty + '%2', active = '1' WHERE wantedID='%3'",_pastCrimes,_val,_uid];
	[_query,1] call HC_fnc_asyncCall;
} else {
	_crimes = [_type select 0];
	_crimes = [_crimes] call HC_fnc_mresArray;
	_query = format["INSERT INTO wanted (wantedID, wantedName, wantedCrimes, wantedBounty, active) VALUES('%1', '%2', '%3', '%4', '1')",_uid,_name,_crimes,_val];
	[_query,1] call HC_fnc_asyncCall;
};
