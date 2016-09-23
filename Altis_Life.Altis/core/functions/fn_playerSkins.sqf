#include "..\..\script_macros.hpp"
/*
    File: fn_playerSkins.sqf
    Author: Daniel Stuart

    Description:
    Sets skins for players by their side and uniform.
*/
private["_skinName"];

switch (playerSide) do {
    case civilian: {
        if (LIFE_SETTINGS(getNumber,"civ_skins") isEqualTo 1) then {
            if (uniform player isEqualTo "U_C_Poloshirt_blue") then {
                player setObjectTextureGlobal [0, "textures\civ\clothes\Civ_Super.paa"];
            };
            if (uniform player isEqualTo "U_C_Poloshirt_burgundy") then {
                player setObjectTextureGlobal [0, "textures\civ\clothes\Civ_Barbie.paa"];
            };
            if (uniform player isEqualTo "U_C_Poloshirt_redwhite") then {
                player setObjectTextureGlobal [0, "textures\civ\clothes\Civ_Kitty.paa"];
            };
            if (uniform player isEqualTo "U_C_Poloshirt_salmon") then {
                player setObjectTextureGlobal [0, "textures\civ\clothes\civ_yakuja.paa"];
            };
            
            if (uniform player isEqualTo "U_C_Poloshirt_stripped") then {
                player setObjectTextureGlobal [0, "textures\civ\clothes\Civ_Gay_1.paa"];
            };
            
            if (uniform player isEqualTo "U_C_TeeSurfer_shorts_1") then {
                player setObjectTextureGlobal [0, "textures\civ\clothes\Civ_Gay_3.paa"];
            };
            if (uniform player isEqualTo "U_C_TeeSurfer_shorts_2") then {
                player setObjectTextureGlobal [0, "textures\civ\clothes\Civ_Tiger.paa"];
            };
            
            if (uniform player isEqualTo "U_Competitor") then {
                player setObjectTextureGlobal [0, "textures\civ\clothes\Civ_Broadcast.paa"];
            };
            
            if (uniform player isEqualTo "U_I_Wetsuit") then {
                player setObjectTextureGlobal [0, "textures\civ\clothes\Civ_Dive_Green.paa"];
            };
            
            if (uniform player isEqualTo "U_O_Wetsuit") then {
                player setObjectTextureGlobal [0, "textures\civ\clothes\Civ_Dive_Blue.paa"];
            };
            
            if (uniform player isEqualTo "U_B_Wetsuit") then {
                player setObjectTextureGlobal [0, "textures\civ\clothes\Civ_Dive_Red.paa"];
            };
        };
    };

    case west: {
        if (uniform player isEqualTo "U_Rangemaster") then {
            _skinName = "textures\cop_uniform.jpg";
            if (LIFE_SETTINGS(getNumber,"cop_extendedSkins") isEqualTo 1) then {
                if (FETCH_CONST(life_coplevel) == 3) then {
                    _skinName = "textures\cop_uniform_white.jpg";
                };
                if (FETCH_CONST(life_coplevel) == 4) then {
                    _skinName = "textures\cop_uniform_blue.jpg";
                };
            };
            player setObjectTextureGlobal [0, _skinName];
        };
        if (uniform player isEqualTo "U_B_CombatUniform_mcam") then {
            player setObjectTextureGlobal [0, "textures\cop\clothes\scotpol_hvuniform.paa"];
        };
        if (uniform player isEqualTo "U_B_CombatUniform_mcam_worn") then {
            player setObjectTextureGlobal [0, "textures\cop\clothes\scotpol_pcsouniform.paa"];
        };
        if (uniform player isEqualTo "U_B_CTRG_1") then {
            player setObjectTextureGlobal [0, "textures\cop\clothes\scotpol_blackuniform.paa"];
        };
    };

    case independent: {
        if (uniform player isEqualTo "U_Rangemaster") then {
            player setObjectTextureGlobal [0, "textures\medic_uniform.jpg"];
        };
        if (uniform player isEqualTo "U_B_CombatUniform_mcam") then {
            player setObjectTextureGlobal [0, "textures\ems\clothes\paramedic_uniform_hv.paa"];
        };
        if (uniform player isEqualTo "U_B_CombatUniform_mcam_worn") then {
            player setObjectTextureGlobal [0, "textures\ems\clothes\paramedic_unifrom.paa"];
        };
        if (uniform player isEqualTo "U_Competitor") then {
            player setObjectTextureGlobal [0, "textures\ems\clothes\orange_EMS.paa"];
        };
    };
};
