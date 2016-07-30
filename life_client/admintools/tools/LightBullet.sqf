/*
이 스크립트는 ARMA AOS 서버의 소유물입니다.
무단으로 수정 및 배포 시 문제가 발생됨을 알려드립니다.
문의 : magicianaos@gmail.com
홈페이지 : http://cafe.naver.com/alflrss
*/
//Admin Light Bullet
if (isNil "PEDO_IS_FUKED" ) then {PEDO_IS_FUKED=0};

 if (PEDO_IS_FUKED==0) then 
 {
 PEDO_IS_FUKED=1;
 vehicle player removeAllEventHandlers "Fired";
 hint "Explosive Bullets ON";
 vehicle player addeventhandler ["Fired",{call Those_Massive_Bullets_Tho} ];

 Those_Massive_Bullets_Tho = 
 {
 if (isNull cursorTarget) then 
 {
 PEDO_IS_A_SEXY_CUNT = screenToWorld [0.5,0.5];
 } 
 else 
 {
 PEDO_IS_A_SEXY_CUNT = getpos cursorTarget;
 };
 private ["_caller"];
 _caller = _this select 0;
 omsz = false;


 _center = createCenter sideLogic; 
 _group = createGroup _center; 
 _target = PEDO_IS_A_SEXY_CUNT;
 _zlb = _group createUnit ["ModuleLightning_F",_target,[],0,""];
 _thunder = ["thunder_1", "thunder_2"] call BIS_fnc_selectRandom;
 playSound _thunder;

 omscz = true;
 true; 
 };
 }
 else
 {
 PEDO_IS_FUKED=0;
 hint "Explosive Bullets OFF";
 vehicle player removeAllEventHandlers "Fired";
 //Start Flare Gun
 player addEventHandler ["fired",{

	_p = _this select 6;
	_weapon = _this select 1;
	_v = velocity _p;
	if(_weapon == "SMG_02_F") then {
		_f = 'CMflare_Chaff_Ammo' createVehicle (position _p);
		_f setPosATL (getPosATL _p);_f setVelocity _v;
		[_p,_f] spawn {waitUntil{isNull (_this select 0)}; deleteVehicle (_this select 1);};
	};
	
}];
 }; 