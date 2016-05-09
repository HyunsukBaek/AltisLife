#include "..\..\script_macros.hpp"
/*
    File: fn_playerSkins.sqf
    Author: Daniel Stuart

    Description:
    Sets skins for players by their side and uniform.
*/
private["_skinName"];

switch(playerSide) do {
	case civilian: {
		if(EQUAL(LIFE_SETTINGS(getNumber,"civ_skins"),1)) then {
			
			if(uniform player == "U_C_Poloshirt_blue") then {
				player setObjectTextureGlobal [0, "textures\civ\clothes\Civ_Super.jpg"];
			};
			
			if(uniform player == "U_C_Poloshirt_burgundy") then {
				player setObjectTextureGlobal [0, "textures\civ\clothes\Civ_Barbie.jpg"];
			};
			
			if(uniform player == "U_C_Poloshirt_redwhite") then {
				player setObjectTextureGlobal [0, "textures\civ\clothes\Civ_Kitty.jpg"];
			};
			
			if(uniform player == "U_C_Poloshirt_salmon") then {
				player setObjectTextureGlobal [0, "textures\civ\clothes\Civ_Gay_2.jpg"];
			};
			
			if(uniform player == "U_C_Poloshirt_stripped") then {
				player setObjectTextureGlobal [0, "textures\civ\clothes\Civ_Gay_1.jpg"];
			};
			
			if(uniform player == "U_C_TeeSurfer_shorts_1") then {
				player setObjectTextureGlobal [0, "textures\civ\clothes\Civ_Gay_3.jpg"];
			};
			if(uniform player == "U_C_TeeSurfer_shorts_2") then {
				player setObjectTextureGlobal [0, "textures\civ\clothes\Civ_Tiger.jpg"];
			};
			
			if(uniform player == "U_Competitor") then {
				player setObjectTextureGlobal [0, "textures\civ\clothes\Civ_Broadcast.jpg"];
			};
			
			if(uniform player == "U_I_Wetsuit") then {
				player setObjectTextureGlobal [0, "textures\civ\clothes\Civ_Dive_Green.jpg"];
			};
			
			if(uniform player == "U_O_Wetsuit") then {
				player setObjectTextureGlobal [0, "textures\civ\clothes\Civ_Dive_Blue.jpg"];
			};
			
			if(uniform player == "U_B_Wetsuit") then {
				player setObjectTextureGlobal [0, "textures\civ\clothes\Civ_Dive_Red.jpg"];
			};
			
			
		};
	};

	case west: {
		if(uniform player == "U_Rangemaster") then {
			_skinName = "textures\cop_uniform.jpg";
			if(EQUAL(LIFE_SETTINGS(getNumber,"cop_extendedSkins"),1)) then {
				if(FETCH_CONST(life_coplevel) == 3) then {
					_skinName = "textures\cop_uniform_white.jpg";
				};
				if(FETCH_CONST(life_coplevel) == 4) then {
					_skinName = "textures\cop_uniform_blue.jpg";
				};
			};
			player setObjectTextureGlobal [0, _skinName];
		};
		if(uniform player == "U_B_CombatUniform_mcam") then {
			player setObjectTextureGlobal [0, "textures\cop_uniform_white.jpg"];
		};
		if(uniform player == "U_B_CombatUniform_mcam_worn") then {
			player setObjectTextureGlobal [0, "textures\cop_uniform_blue.jpg"];
		};
	};

	case independent: {
		if(uniform player == "U_Rangemaster") then {
			player setObjectTextureGlobal [0, "textures\medic_uniform.jpg"];
		};
		if(uniform player == "U_B_CombatUniform_mcam") then {
			player setObjectTextureGlobal [0, "textures\ems\clothes\paramedic_uniform_hv.paa"];
		};
		if(uniform player == "U_B_CombatUniform_mcam_worn") then {
			player setObjectTextureGlobal [0, "textures\ems\clothes\paramedic_unifrom.paa"];
		};
	};
};
