/*
AOS JetPack Script
Made by AOS
http://cafe.naver.com/altisaos
*/

if (playerSide == civilian){
	if(life_atmbank < 150000) exitWith {hint "제트팩 이용시 은행 계좌에 150000$이 필요합니다"};
	life_atmbank = life_atmbank - 150000;
} else {
	if(life_atmbank < 50000) exitWith {hint "제트팩 이용시 은행 계좌에 50000$이 필요합니다"};
	life_atmbank = life_atmbank - 50000;
}

waitUntil { !isNull player };
	
//Backpack save
_backpackName = backpack player;
_backpackItems = backpackItems player;

//player addHeadgear "H_PilotHelmetFighter_B";  //헬멧추가
removeBackpack player; //제트팩 가방 제거 
player addBackpack "B_Parachute";  //낙하산추가

//연막시작
//[동서,남북,높이]
_smoke1 = "SmokeShellGreen" createVehicle position player;
_smoke2 = "SmokeShellYellow" createVehicle position player;
_smoke3 = "SmokeShell" createVehicle position player;
_smoke4 = "SmokeShellPurple" createVehicle position player;
_smoke5 = "SmokeShellBlue" createVehicle position player;
_smoke6 = "SmokeShellOrange" createVehicle position player;
_smoke1 attachTo [(vehicle player),[0.9,-0.2,-0.1]];
_smoke2 attachTo [(vehicle player),[0.5,0.1,-0.1]];
_smoke3 attachTo [(vehicle player),[0.1,0.5,-0.1]];
_smoke4 attachTo [(vehicle player),[-0.1,0.5,-0.1]];
_smoke5 attachTo [(vehicle player),[-0.5,0.1,-0.1]];
_smoke6 attachTo [(vehicle player),[-0.9,-0.2,-0.1]];

//조명
//[동서,남북,높이]
_light1 = "F_40mm_Green" createVehicle position player;  //F_40mm_Red, F_40mm_Green, F_40mm_Yellow, F_40mm_White, F_40mm_CIR
_light1 attachTo [(vehicle player),[0,-0.3,0.3]];


//제트팩이펙트
//[[0,format["%1님이 제트팩을 사용했습니다!!",name player]],"life_fnc_broadcast",true,false] spawn life_fnc_MP;
//[[player, "jetpack",10],"life_fnc_playSound",true,false] spawn life_fnc_MP;

	_aircraft = _this select 0;
	// remove the action and initialise a few variables
	_aircraft removeAction Rockets;
	_speed = 30;   // 가속도설정
	_rockettype = "M_NLAW_AT_F"; // 로켓 종류 기본값 M_NLAW_AT_F
	_boostcycle = 0;
	
	while {_boostcycle < 40 }  do {
		sleep 0.3; // interval at which the boost happens
		_boostcycle = _boostcycle+1; 
		_vel = velocity _aircraft;  // velocity of aircraft at current time 
		_dir = direction _aircraft; // vector of aircraft at current time
		
		// acceleration happens here
		_aircraft setVelocity [(_vel select 0)+(sin _dir*_speed),(_vel select 1)+ (cos _dir*_speed),80];  //높이설정 setVelocity [X,Y,Z];
		//_aircraft setVelocity [(_vel select 0)+(sin _dir*_speed),(_vel select 1)+ (cos _dir*_speed),(_vel select 2)];  
		
		/*
		//불효과 켜기
		if (_boostcycle == 1) then {
			_fire = "test_EmptyObjectForFireBig" createVehicle position player;  
			_fire attachTo [(vehicle player),[0,-5,0]];
			sleep 7;
			{if (typeOf _x == "#particlesource") then {deleteVehicle _x}} forEach (_fire nearObjects 300);
			deleteVehicle _fire;
		};
		*/
		if (_boostcycle == 5) then {
			// next step is attaching our rockets 
			rocket1 = _rockettype createVehicle position _aircraft;
			rocket1 attachTo [_aircraft,[0,0.1,0.4]];
			
			_dir = 0;   
			_angle = 0;   //로켓각도
			_pitch = 0;     
			_vecdx = sin(_dir) * cos(_angle);   
			_vecdy = cos(_dir) * cos(_angle);   
			_vecdz = sin(_angle);     
			_vecux = cos(_dir) * cos(_angle) * sin(_pitch);   
			_vecuy = sin(_dir) * cos(_angle) * sin(_pitch);  
			_vecuz = cos(_angle) * cos(_pitch);     
			rocket1 setVectorDirAndUp [ [_vecdx,_vecdy,_vecdz], [_vecux,_vecuy,_vecuz] ]; 
			_light1 = "F_40mm_Green" createVehicle position player;  //F_40mm_Red, F_40mm_Green, F_40mm_Yellow, F_40mm_White, F_40mm_CIR
			_light1 attachTo [(vehicle player),[0,-0.3,0.3]];
		};

		// since the burn time of the M_AT9_AT is about 3-4 seconds, we need to replace the rockets from time to time
		if (_boostcycle == 10) then {
			rocket2= _rockettype createVehicle position _aircraft;			
			rocket2 attachTo [_aircraft,[0,0.1,0.4]];
			
			_dir = 0;   
			_angle = 0;   //로켓각도
			_pitch = 0;     
			_vecdx = sin(_dir) * cos(_angle);   
			_vecdy = cos(_dir) * cos(_angle);   
			_vecdz = sin(_angle);     
			_vecux = cos(_dir) * cos(_angle) * sin(_pitch);   
			_vecuy = sin(_dir) * cos(_angle) * sin(_pitch);  
			_vecuz = cos(_angle) * cos(_pitch);     
			rocket2 setVectorDirAndUp [ [_vecdx,_vecdy,_vecdz], [_vecux,_vecuy,_vecuz] ]; 
			_light1 = "F_40mm_Green" createVehicle position player;  //F_40mm_Red, F_40mm_Green, F_40mm_Yellow, F_40mm_White, F_40mm_CIR
			_light1 attachTo [(vehicle player),[0,-0.3,0.3]];
			
			deleteVehicle rocket1;		
		};
		if (_boostcycle == 20) then {
			rocket3 = _rockettype createVehicle position _aircraft;			
			rocket3 attachTo [_aircraft,[0,0.1,0.4]];
			
			_dir = 0;   
			_angle = 0;   //로켓각도
			_pitch = 0;     
			_vecdx = sin(_dir) * cos(_angle);   
			_vecdy = cos(_dir) * cos(_angle);   
			_vecdz = sin(_angle);     
			_vecux = cos(_dir) * cos(_angle) * sin(_pitch);   
			_vecuy = sin(_dir) * cos(_angle) * sin(_pitch);  
			_vecuz = cos(_angle) * cos(_pitch);     
			rocket3 setVectorDirAndUp [ [_vecdx,_vecdy,_vecdz], [_vecux,_vecuy,_vecuz] ]; 
			_light1 = "F_40mm_Green" createVehicle position player;  //F_40mm_Red, F_40mm_Green, F_40mm_Yellow, F_40mm_White, F_40mm_CIR
			_light1 attachTo [(vehicle player),[0,-0.3,0.3]];
			
			deleteVehicle rocket2;			
		};
		if (_boostcycle == 30) then {
			rocket4 = _rockettype createVehicle position _aircraft;			
			rocket4 attachTo [_aircraft,[0,0.1,0.4]];
			
			_dir = 0;   
			_angle = 0;   //로켓각도
			_pitch = 0;     
			_vecdx = sin(_dir) * cos(_angle);   
			_vecdy = cos(_dir) * cos(_angle);   
			_vecdz = sin(_angle);     
			_vecux = cos(_dir) * cos(_angle) * sin(_pitch);   
			_vecuy = sin(_dir) * cos(_angle) * sin(_pitch);  
			_vecuz = cos(_angle) * cos(_pitch);     
			rocket4 setVectorDirAndUp [ [_vecdx,_vecdy,_vecdz], [_vecux,_vecuy,_vecuz] ]; 
			_light1 = "F_40mm_Green" createVehicle position player;  //F_40mm_Red, F_40mm_Green, F_40mm_Yellow, F_40mm_White, F_40mm_CIR
			_light1 attachTo [(vehicle player),[0,-0.3,0.3]];
			
			deleteVehicle rocket3;			
		};
	};
	// clean up the last set of rockets before they explode
	deleteVehicle rocket4;
	sleep 5.0;
	
//추가조명
_light2 = "F_40mm_Red" createVehicle position player;  //F_40mm_Red, F_40mm_Green, F_40mm_Yellow, F_40mm_White, F_40mm_CIR
_light2 attachTo [(vehicle player),[0,-0.3,0.3]];

//BackPack Load
waitUntil {isTouchingGround player};
	sleep 1;
	
	removeBackpack player;
	sleep 1;
	
	player addBackpack _backpackName;
	clearBackpackCargo player;
	{
		[_x,true,true] call life_fnc_handleItem;
	} foreach _backpackItems;