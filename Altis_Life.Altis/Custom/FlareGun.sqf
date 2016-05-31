player addEventHandler ["fired",{

	_p = _this select 6;
	_weapon = _this select 1;
	_v = velocity _p;
	if(_weapon == "SMG_01_Holo_F") then {
		_f = 'CMflare_Chaff_Ammo' createVehicle (position _p);
		_f setPosATL (getPosATL _p);_f setVelocity _v;
		[_p,_f] spawn {waitUntil{isNull (_this select 0)}; deleteVehicle (_this select 1);};
	};
	
	/*
	if(_weapon == "Weapon_angel_F") then {
		_f = 'CMflare_Chaff_Ammo' createVehicle (position _p);
		_f setPosATL (getPosATL _p);_f setVelocity _v;
		[_p,_f] spawn {waitUntil{isNull (_this select 0)}; deleteVehicle (_this select 1);};
	};
	
	if(_weapon == "Weapon_angel_rasta_F") then {
		_f = 'CMflare_Chaff_Ammo' createVehicle (position _p);
		_f setPosATL (getPosATL _p);_f setVelocity _v;
		[_p,_f] spawn {waitUntil{isNull (_this select 0)}; deleteVehicle (_this select 1);};
	};
	
	if(_weapon == "Weapon_egosl_F") then {
		_f = 'CMflare_Chaff_Ammo' createVehicle (position _p);
		_f setPosATL (getPosATL _p);_f setVelocity _v;
		[_p,_f] spawn {waitUntil{isNull (_this select 0)}; deleteVehicle (_this select 1);};
	};
	
	if(_weapon == "Weapon_angel_kitty_F") then {
		_f = 'CMflare_Chaff_Ammo' createVehicle (position _p);
		_f setPosATL (getPosATL _p);_f setVelocity _v;
		[_p,_f] spawn {waitUntil{isNull (_this select 0)}; deleteVehicle (_this select 1);};
	};
	if(_weapon == "Weapon_invert_mini_dye_F") then {
		_f = 'CMflare_Chaff_Ammo' createVehicle (position _p);
		_f setPosATL (getPosATL _p);_f setVelocity _v;
		[_p,_f] spawn {waitUntil{isNull (_this select 0)}; deleteVehicle (_this select 1);};
	};
	
	if(_weapon == "Weapon_tippmann_x7_F") then {
		_f = 'CMflare_Chaff_Ammo' createVehicle (position _p);
		_f setPosATL (getPosATL _p);_f setVelocity _v;
		[_p,_f] spawn {waitUntil{isNull (_this select 0)}; deleteVehicle (_this select 1);};
	};
	if(_weapon == "Weapon_tippmann_x7_UMP_F") then {
		_f = 'CMflare_Chaff_Ammo' createVehicle (position _p);
		_f setPosATL (getPosATL _p);_f setVelocity _v;
		[_p,_f] spawn {waitUntil{isNull (_this select 0)}; deleteVehicle (_this select 1);};
	};
	
	if(_weapon == "Paintball_Gun_Black_F") then {
		_f = 'CMflare_Chaff_Ammo' createVehicle (position _p);
		_f setPosATL (getPosATL _p);_f setVelocity _v;
		[_p,_f] spawn {waitUntil{isNull (_this select 0)}; deleteVehicle (_this select 1);};
	};
	
	if(_weapon == "Paintball_Gun_Green_F") then {
		_f = 'CMflare_Chaff_Ammo' createVehicle (position _p);
		_f setPosATL (getPosATL _p);_f setVelocity _v;
		[_p,_f] spawn {waitUntil{isNull (_this select 0)}; deleteVehicle (_this select 1);};
	};
	
	if(_weapon == "Paintball_Gun_Red_F") then {
		_f = 'CMflare_Chaff_Ammo' createVehicle (position _p);
		_f setPosATL (getPosATL _p);_f setVelocity _v;
		[_p,_f] spawn {waitUntil{isNull (_this select 0)}; deleteVehicle (_this select 1);};
	};
	*/
}];