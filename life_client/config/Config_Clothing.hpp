/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        4: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Poloshirt_blue", "Super Man", 250, { "", "", -1 } },
            { "U_C_Poloshirt_burgundy", "Barbie", 275, { "", "", -1 } },
            { "U_C_Poloshirt_redwhite", "Kitty", 1150, { "", "", -1 } },
            { "U_C_Poloshirt_stripped", "Gay1", 1125, { "", "", -1 } },
            { "U_C_Poloshirt_salmon", "Gay2", 1750, { "", "", -1 } },
            { "U_C_TeeSurfer_shorts_1", "Gay3", 1750, { "", "", -1 } },
            { "U_C_TeeSurfer_shorts_2", "Gay4", 1750, { "", "", -1 } },
            { "U_Competitor", "Press Suit", 2750, { "", "", -1 } },
            { "U_C_Poor_2", "", 250, { "", "", -1 } },
            { "U_C_Poloshirt_tricolour", "Poloshirt Tricolor", 3500, { "", "", -1 } },
            { "U_OrestesBody", "Surfing On Land", 1100, { "", "", -1 } },
            { "U_C_HunterBody_grn", "The Hunters Look", 15000, { "", "", -1 } },
            { "U_C_WorkerCoveralls", "Mechanic Coveralls", 15000, { "", "", -1 } },

            { "A3LCatShirt", "", 10000, { "", "", -1 } },
            { "cg_awesome1", "", 10000, { "", "", -1 } },
            { "cg_catvideos1", "", 10000, { "", "", -1 } },
            { "cg_csgo1", "", 10000, { "", "", -1 } },
            { "cg_ea1", "", 10000, { "", "", -1 } },
            { "cg_jason1", "", 10000, { "", "", -1 } },
            { "cg_lego1", "", 10000, { "", "", -1 } },
            { "cg_mario1", "", 10000, { "", "", -1 } },
            { "cg_pika1", "", 10000, { "", "", -1 } },
            { "cg_stoned1", "", 10000, { "", "", -1 } },
            { "cg_taylorswift1", "", 10000, { "", "", -1 } },
            { "cg_woods1", "", 10000, { "", "", -1 } },
            { "U_CivilianJerseyCasual_D", "", 15000, { "", "", -1 } },
            { "U_CivilianJerseyCasual_C", "", 15000, { "", "", -1 } },
            { "U_CivilianJerseyCasual_B", "", 15000, { "", "", -1 } },
            { "U_CivilianJerseyCasual_F", "", 15000, { "", "", -1 } },
            { "U_CivilianTShirt_F", "", 15000, { "", "", -1 } },
            { "U_CivilianTShirt_G", "", 15000, { "", "", -1 } },
            { "U_CivilianTShirt_D", "", 15000, { "", "", -1 } },
            { "U_CivilianTShirtCasual_B", "", 15000, { "", "", -1 } },
            { "U_CivilianTShirtCasual_E", "", 15000, { "", "", -1 } },
            { "U_CivilianTShirtCasual_I", "", 15000, { "", "", -1 } },
            { "U_CivilianTShirtCasual_C", "", 15000, { "", "", -1 } },
            { "A3LCloudShirt", "", 2500, { "", "", -1 } },
            { "fn_bendozlia2", "", 2500, { "", "", -1 } },
            { "fn_bendozlia3", "", 2500, { "", "", -1 } },
            { "fn_lahey2", "", 2500, { "", "", -1 } },
            { "fn_mongo", "", 2500, { "", "", -1 } }

        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Bandanna_camo", "Camo Bandanna", 120, { "", "", -1 } },
            { "H_Bandanna_surfer", "Surfer Bandanna", 130, { "", "", -1 } },
            { "H_Bandanna_khk", "Khaki Bandanna", 145, { "", "", -1 } },
            { "H_Cap_blu", "", 150, { "", "", -1 } },
            { "H_Cap_grn", "", 150, { "", "", -1 } },
            { "H_Cap_grn_BI", "", 150, { "", "", -1 } },
            { "H_Cap_oli", "", 150, { "", "", -1 } },
            { "H_Cap_red", "", 150, { "", "", -1 } },
            { "H_Cap_tan", "", 150, { "", "", -1 } },
            { "H_Bandanna_gry", "Grey Bandanna", 150, { "", "", -1 } },
            { "H_Bandanna_sgg", "Sage Bandanna", 160, { "", "", -1 } },
            { "H_Bandanna_cbr", "", 165, { "", "", -1 } },
            { "H_StrawHat", "Straw Fedora", 225, { "", "", -1 } },
            { "H_Hat_tan", "", 265, { "", "", -1 } },
            { "H_Hat_brown", "", 276, { "", "", -1 } },
            { "H_Hat_grey", "", 280, { "", "", -1 } },
            { "H_BandMask_blk", "Hat & Bandanna", 300, { "", "", -1 } },
            { "H_Hat_blue", "", 310, { "", "", -1 } },
            { "H_Hat_checker", "", 340, { "", "", -1 } },
            { "H_Booniehat_tan", "", 425, { "", "", -1 } },
            { "H_Cap_press", "", 310, { "", "", -1 } },
            { "H_Cap_marshal", "", 310, { "", "", -1 } },
            { "H_RacingHelmet_1_red_F", "", 8150, { "", "", -1 } },
            { "H_RacingHelmet_1_white_F", "", 8150, { "", "", -1 } },
            { "H_RacingHelmet_2_F", "", 8150, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 20, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Shades_Green", "", 20, { "", "", -1 } },
            { "G_Shades_Red", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 25, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 25, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 25, { "", "", -1 } },
            { "G_Sport_Checkered", "", 25, { "", "", -1 } },
            { "G_Sport_Greenblack", "", 25, { "", "", -1 } },
            { "G_Sport_Red", "", 25, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Squares", "", 50, { "", "", -1 } },
            { "G_Aviator", "", 100, { "", "", -1 } },
            { "G_Combat", "", 125, { "", "", -1 } },
            { "G_Lady_Mirror", "", 150, { "", "", -1 } },
            { "G_Lady_Dark", "", 150, { "", "", -1 } },
            { "G_Lady_Blue", "", 150, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "tf_rt1523g_sage", "", 8000, { "", "", -1 } }, //long range-  40KM // BLUEFOR
            { "B_OutdoorPack_blk", "", 500, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 2000, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 2500, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 3500, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 3500, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 3500, { "", "", -1 } },
            { "B_FieldPack_blk", "", 5000, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 5000, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 5000, { "", "", -1 } },
            { "B_Bergen_sgg", "", 6500, { "", "", -1 } },
            { "B_Bergen_mcamo", "", 6500, { "", "", -1 } },
            { "B_Bergen_rgr", "", 6500, { "", "", -1 } },
            { "B_Bergen_blk", "", 6500, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oli", "", 7500, { "", "", -1 } },
            { "B_Carryall_khk", "", 7500, { "", "", -1 } },
            { "B_Carryall_cbr", "", 7500, { "", "", -1 } },
            { "B_Parachute", "낙하산", 37500, { "", "", -1 } }
        };
    };

    class clothes_addon {
        title = "STR_Shops_C_Addon";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            //  { "A3L_Bikini_Girl", "", 5000, { "", "", -1 } },
            { "A3L_Dude_Outfit", "", 5000, { "", "", -1 } },
            { "A3L_Farmer_Outfit", "", 5000, { "", "", -1 } },
            { "A3L_SECRET", "해골!", 50000, { "life_donorlevel", "SCALAR", 1 } },
            { "A3L_SpookyMummy", "", 5000, { "", "", -1 } },
			{ "A3L_Worker_Outfit", "", 5000, { "", "", -1 } },
            // { "A3L_Zombie", "", 5000, { "", "", -1 } },
			{ "A3L_Prisoner_Outfit", "prisoner1", 5000, { "", "", -1 } },
            { "mgsr_civ_01_uniform", "prisoner2", 5000, { "", "", -1 } },
            { "mgsr_robe_dirty", "prisoner3", 5000, { "", "", -1 } },
            { "mgsr_robe_muddy", "prisoner4", 5000, { "", "", -1 } },
            { "xmas_santa_blufor_uniform", "santa blue", 5000, { "life_donorlevel", "SCALAR", 1 } },
            { "xmas_santa_ind_uniform", "santa green", 5000, { "life_donorlevel", "SCALAR", 1 } },
            { "xmas_santa_opfor_uniform", "santa red", 5000, { "life_donorlevel", "SCALAR", 1 } },


            { "U_Office_A", "", 250, { "", "", -1 } },
            { "U_Office_B", "", 250, { "", "", -1 } },
            { "U_Office_C", "", 250, { "", "", -1 } },
            { "U_CivilianSuit_A", "", 250, { "", "", -1 } },
            { "U_CivilianSuit_B", "", 250, { "", "", -1 } },
            { "U_CivilianSuit_C", "", 250, { "", "", -1 } },
            { "U_DressTKLocalUni_D_D", "", 250, { "", "", -1 } },
            { "U_AFAOfficerUni_A", "", 250, { "", "", -1 } },
            { "Zannaza69", "", 250, { "", "", -1 } },

            // 007
            { "U_007_BIS_Marshall", "", 250, { "life_donorlevel", "SCALAR", 2 } },
            { "U_CivilianCoat_D", "", 250, { "life_donorlevel", "SCALAR", 1 } },
            { "U_CivilianCoat_E", "", 250, { "life_donorlevel", "SCALAR", 1 } },
            { "U_CivilianCoat_B", "", 250, { "life_donorlevel", "SCALAR", 1 } },
            { "U_CivilianCoat_A", "", 250, { "life_donorlevel", "SCALAR", 1 } }


        };
        headgear[] = {
            { "H_AntmanMask", "", 100000, { "", "", -1 } },
            { "cg_dinomask", "", 150000, { "life_donorlevel", "SCALAR", 1 } },
            { "cg_dinomask_p", "", 150000, { "life_donorlevel", "SCALAR", 1 } },
            { "cg_dinomask_r", "", 150000, { "life_donorlevel", "SCALAR", 1 } },
            { "H_AugustusMask", "", 100000, { "", "", -1 } },
            { "H_BatmanMask", "", 150000, { "", "", -1 } },
            { "H_BobaMask", "", 150000, { "", "", -1 } },
            { "H_BushMask", "", 150000, { "", "", -1 } },
            { "casco_pumas", "", 150000, { "", "", -1 } },
            { "casco_moto", "", 150000, { "life_donorlevel", "SCALAR", 1 } },
            { "Casque_Moto", "", 150000, { "life_donorlevel", "SCALAR", 2 } },
            { "H_ClintonMask", "", 150000, { "", "", -1 } },
            { "H_DeadpoolMask", "", 150000, { "", "", -1 } },
            { "H_GingerbreadMask", "", 150000, { "", "", -1 } },
            { "Payday_GeneralO", "", 150000, { "", "", -1 } },
            { "H_FranklinMask", "", 150000, { "life_donorlevel", "SCALAR", 1 } },
            { "H_RAAMMask", "", 150000, { "", "", -1 } },
            { "H_GrantMask", "", 150000, { "", "", -1 } },
            { "H_LincolnMask", "", 150000, { "", "", -1 } },
            { "H_HulkMask", "", 150000, { "", "", -1 } },
            { "H_JasonMask", "", 150000, { "", "", -1 } },
            { "jokermask", "", 200000, { "", "", -1 } },
            { "H_KermitMask", "", 200000, { "", "", -1 } },
            { "Masque_Alien1", "", 150000, { "life_donorlevel", "SCALAR", 1 } },
            { "Masque_Anonymous", "", 200000, { "", "", -1 } },
            { "Masque_archNemesis", "", 200000, { "", "", -1 } },
            { "Masque_Arnold", "", 200000, { "", "", -1 } },
            { "Masque_Aubrey", "", 200000, { "", "", -1 } },
            { "Masque_Bonnie", "", 200000, { "", "", -1 } },
            { "Masque_Bush", "", 250000, { "", "", -1 } },
            { "Masque_Chains", "", 250000, { "", "", -1 } },
            { "Masque_Chuck", "", 250000, { "", "", -1 } },
            { "Masque_Clinton", "", 250000, { "", "", -1 } },
            { "Masque_Clover", "", 250000, { "", "", -1 } },
            { "Masque_Dallas", "", 250000, { "", "", -1 } },
            { "Masque_Gombo", "", 250000, { "", "", -1 } },
            { "Masque_Fish", "", 250000, { "life_donorlevel", "SCALAR", 1 } },
            { "Masque_GdG", "", 250000, { "", "", -1 } },
            { "Masque_Hoxton", "", 300000, { "", "", -1 } },
            { "Masque_Hockey", "", 300000, { "", "", -1 } },
            { "Masque_Incendiaire", "", 300000, { "", "", -1 } },
            { "Masque_Macrilleuse", "", 300000, { "", "", -1 } },
            { "Masque_Wolfv2", "", 350000, { "", "", -1 } },
            { "Masque_Lion", "", 350000, { "", "", -1 } },
            { "Masque_Mark", "", 350000, { "", "", -1 } },
            { "Masque_Metalhead", "", 350000, { "", "", -1 } },
            { "Masque_Momie", "", 350000, { "", "", -1 } },
            { "Masque_Optimiste", "", 350000, { "", "", -1 } },
            { "Masque_Orc", "", 350000, { "", "", -1 } },
            { "Masque_Religieuse", "", 350000, { "", "", -1 } },
            { "Masque_Santa", "", 150000, { "life_donorlevel", "SCALAR", 1 } },
            { "Masque_Smiley", "", 150000, { "", "", -1 } },
            { "Masque_Mempo", "", 150000, { "", "", -1 } },
            { "Masque_speedRunner", "", 150000, { "", "", -1 } },
            { "Masque_Unic", "", 150000, { "", "", -1 } },
            { "H_MickeyMask", "", 150000, { "", "", -1 } },
            { "H_NixonMask", "", 150000, { "", "", -1 } },
            { "Kio_No1_Hat", "", 150000, { "", "", -1 } },
            { "H_ObamaMask", "", 150000, { "life_donorlevel", "SCALAR", 1 } },
            { "H_PatriotMask", "", 150000, { "life_donorlevel", "SCALAR", 2 } },
            { "H_ScarecrowMask", "", 150000, { "", "", -1 } },
            { "H_ShrekMask", "", 150000, { "", "", -1 } },
            { "H_SpidermanMask", "", 150000, { "life_donorlevel", "SCALAR", 1 } },
            { "H_SpongebobMask", "", 150000, { "life_donorlevel", "SCALAR", 2 } },
            { "kio_vfv_mask", "", 150000, { "", "", -1 } },
            { "H_GuyFawkesMask", "", 150000, { "", "", -1 } },
            { "kio_skl_msk_red", "", 150000, { "", "", -1 } },
            { "kio_skl_msk_grn", "", 150000, { "", "", -1 } },
            { "kio_skl_msk", "", 150000, { "", "", -1 } },
            { "H_SquidwardMask", "", 150000, { "", "", -1 } },
            { "H_StarFoxMask", "", 150000, { "", "", -1 } },
            { "H_UltronMask", "", 150000, { "", "", -1 } },
            { "H_VenomMask", "", 150000, { "", "", -1 } },
            { "H_WashingtonMask", "", 150000, { "", "", -1 } },
            { "A3L_gangster_hat", "", 150000, { "", "", -1 } },
            { "A3L_SkateHelmet_green", "", 150000, { "", "", -1 } },
            { "Kio_Afro_Hat", "", 150000, { "", "", -1 } },
            { "Kio_Capital_Hat", "", 150000, { "", "", -1 } },
            { "cowboyhat", "", 150000, { "", "", -1 } },
            { "FP_Helmet_ElfHat", "", 150000, { "", "", -1 } },
            { "pilot_black_helmet", "", 150000, { "", "", -1 } },
            { "pilot_blue_helmet", "", 150000, { "", "", -1 } },
            { "pilot_red_helmet", "", 150000, { "", "", -1 } },
            { "police_pilot_Helmet", "", 150000, { "", "", -1 } },
            { "Kio_Pirate_Hat", "", 150000, { "", "", -1 } },
            { "Kio_Santa_Hat", "", 150000, { "", "", -1 } },
            { "Kio_Spinning_Hat", "", 150000, { "", "", -1 } },
			{ "H_Ajx_HorseMask", "", 150000, { "", "", -1 } },
			{ "H_Ajx_HorseMask_2", "", 150000, { "", "", -1 } },
			{ "H_Ajx_HorseMask_blk", "", 150000, { "", "", -1 } },
			{ "H_Ajx_HorseMask_pnk", "", 150000, { "", "", -1 } },
            { "BL_eimer_Hat", "", 150000, { "life_donorlevel", "SCALAR", 1 } }, //양동이
            { "BL_medieval_hat", "", 150000, { "life_donorlevel", "SCALAR", 1 } },  //중세투구
            { "BL_mask2_Hat", "", 150000, { "life_donorlevel", "SCALAR", 1 } }, //미국 토끼 가면
            { "BL_trump_Hat", "", 150000, { "life_donorlevel", "SCALAR", 1 } }, //트럼프 머리
            { "BL_us_Hat", "", 150000, { "life_donorlevel", "SCALAR", 1 } },    //시골 보안관
            { "BL_party_Hat", "", 150000, { "life_donorlevel", "SCALAR", 1 } } //생일 파티
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "Payday_Cagoule", "", 5000, { "", "", -1 } },
            { "Masque_Chirurgical", "", 5000, { "", "", -1 } },
            { "Masque_Solitaire", "", 5000, { "", "", -1 } },
            { "mgsr_eyepatch_goggles", "", 5000, { "", "", -1 } },
            { "mgsr_headbag_goggles", "", 5000, { "", "", -1 } },
            { "SFG_Tac_smallBeardB", "", 150000, { "life_donorlevel", "SCALAR", 1 } },  //턱수염 기부자1 부터
            { "SFG_Tac_smallBeardD", "", 150000, { "life_donorlevel", "SCALAR", 1 } },
            { "SFG_Tac_smallBeardG", "", 150000, { "life_donorlevel", "SCALAR", 1 } },
            { "SFG_Tac_smallBeardO", "", 150000, { "life_donorlevel", "SCALAR", 1 } },
            { "SFG_Tac_BeardB", "", 150000, { "life_donorlevel", "SCALAR", 1 } },
            { "SFG_Tac_BeardD", "", 150000, { "life_donorlevel", "SCALAR", 1 } },
            { "SFG_Tac_BeardG", "", 150000, { "life_donorlevel", "SCALAR", 1 } },
            { "SFG_Tac_BeardO", "", 150000, { "life_donorlevel", "SCALAR", 1 } },
            { "SFG_Tac_chinlessbB", "", 150000, { "life_donorlevel", "SCALAR", 1 } },
            { "SFG_Tac_chinlessbD", "", 150000, { "life_donorlevel", "SCALAR", 1 } },
            { "SFG_Tac_chinlessbG", "", 150000, { "life_donorlevel", "SCALAR", 1 } },
            { "SFG_Tac_chinlessbO", "", 150000, { "life_donorlevel", "SCALAR", 1 } },
            { "SFG_Tac_moustacheB", "", 150000, { "life_donorlevel", "SCALAR", 1 } },
            { "SFG_Tac_moustacheD", "", 150000, { "life_donorlevel", "SCALAR", 1 } },
            { "SFG_Tac_moustacheG", "", 150000, { "life_donorlevel", "SCALAR", 1 } },
            { "SFG_Tac_moustacheO", "", 150000, { "life_donorlevel", "SCALAR", 1 } },
            { "SFG_Tac_ChopsB", "", 150000, { "life_donorlevel", "SCALAR", 1 } },
            { "SFG_Tac_ChopsD", "", 150000, { "life_donorlevel", "SCALAR", 1 } },
            { "SFG_Tac_ChopsG", "", 150000, { "life_donorlevel", "SCALAR", 1 } },
            { "SFG_Tac_ChopsO", "", 150000, { "life_donorlevel", "SCALAR", 1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "mgsr_poncho_wet", "", 150000, { "life_donorlevel", "SCALAR", 2 } },
            { "mgsr_poncho_dry", "", 150000, { "life_donorlevel", "SCALAR", 3 } }
        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        license = "";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_Rangemaster", "Cop Uniform", 250, { "", "", -1 } },
            { "U_B_CombatUniform_mcam", "Traffic Officer", 250, { "", "", -1 } },
            { "U_B_CombatUniform_mcam_worn", "Blue Uniform", 350, { "life_coplevel", "SCALAR", 2 } },
            { "U_B_CTRG_1", "Black Uniform", 350, { "life_coplevel", "SCALAR", 2 } },
            { "U_B_PilotCoveralls", "", 550, { "life_coplevel", "SCALAR", 1 } },//
            { "U_B_HeliPilotCoveralls", "", 550, { "life_coplevel", "SCALAR", 2 } },
            { "U_B_GhillieSuit", "", 150000, { "life_coplevel", "SCALAR", 2 } },
            { "U_B_Wetsuit", "", 10550, { "life_coplevel", "SCALAR", 1 } },
            { "U_Marshal", "Marshal", 5550, { "life_coplevel", "SCALAR", 5 } },
            { "U_NikosAgedBody", "시민2", 10550, { "life_coplevel", "SCALAR", 4 } },
            { "U_B_CTRG_Soldier_3_F", "", 990000, { "life_coplevel", "SCALAR", 3 } },
            { "U_B_CTRG_Soldier_F", "", 990000, { "life_coplevel", "SCALAR", 3 } },

            { "U_GirlSet_PD_uniform", "", 600000, { "life_coplevel", "SCALAR", 4 } },
            { "U_GirlSet_SWAT_uniform", "", 600000, { "life_coplevel", "SCALAR", 4 } },
            { "A3L_DOCOfficer_Uniform", "", 12000, { "life_coplevel", "SCALAR", 3 } },
            { "A3L_Police_Uniform", "", 15000, { "life_coplevel", "SCALAR", 3 } },
            { "U_CDFOfficerUni_A", "", 15000, { "life_coplevel", "SCALAR", 5 } },
            { "A3L_DOCLieutenant_Uniform", "", 15000, { "life_coplevel", "SCALAR", 3 } },
            { "A3L_DOCSergeant_Uniform", "", 15000, { "life_coplevel", "SCALAR", 4 } },
            { "A3L_FTOCaptain_Uniform", "", 15000, { "life_coplevel", "SCALAR", 5 } },
            { "A3L_FTOSergeant_Uniform", "", 15000, { "life_coplevel", "SCALAR", 4 } },
            { "A3L_SOSergeant_Uniform", "", 15000, { "life_coplevel", "SCALAR", 3 } },
            { "A3LJumperCIDBlack", "", 15000, { "life_coplevel", "SCALAR", 3 } },
            { "A3L_SOSheriff_Uniform", "", 15000, { "life_coplevel", "SCALAR", 5 } },
            { "U_CombatUniShirtMercB_J", "", 15000, { "life_coplevel", "SCALAR", 4 } },
            { "U_CombatUniSleeves_F", "", 15000, { "life_coplevel", "SCALAR", 4 } },
            { "U_CombatUniShirtAlt_E", "", 15000, { "life_coplevel", "SCALAR", 4 } },
            { "U_CombatUniShirtAlt_B", "", 15000, { "life_coplevel", "SCALAR", 4 } }



        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Cap_police", "", 25, { "", "", -1 } },
            { "H_Beret_blk_POLICE", "", 50, { "life_coplevel", "SCALAR", 2 } },
            { "H_HelmetB_plain_mcamo", "", 75, { "life_coplevel", "SCALAR", 1 } },
            { "H_MilCap_blue", "", 8100, { "life_coplevel", "SCALAR", 2 } },
            { "H_Booniehat_mcamo", "", 8120, { "life_coplevel", "SCALAR", 1 } },
            { "H_Beret_Colonel", "", 8120, { "life_coplevel", "SCALAR", 1 } },
            { "H_Bandanna_khk", "", 8120, { "life_coplevel", "SCALAR", 1 } },
            { "H_HelmetB_light", "", 8120, { "life_coplevel", "SCALAR", 2 } },
            { "H_HelmetCrew_O", "", 8120, { "life_coplevel", "SCALAR", 2 } },
            { "H_HelmetSpecO_blk", "", 8120, { "life_coplevel", "SCALAR", 2 } },
            { "H_PilotHelmetHeli_O", "", 8120, { "life_coplevel", "SCALAR", 2 } },
            { "H_HelmetB_light_black", "", 8120, { "life_coplevel", "SCALAR", 1 } },
            { "H_HelmetB_black", "", 8120, { "life_coplevel", "SCALAR", 1 } },
            { "H_RacingHelmet_4_F", "", 8120, { "life_coplevel", "SCALAR", 1 } },
            { "H_ShemagOpen_khk", "", 8800, { "", "", -1 } },
            { "H_ShemagOpen_tan", "", 8850, { "", "", -1 } },
            { "H_Shemag_olive", "", 8850, { "", "", -1 } },
            { "H_HelmetO_ViperSP_ghex_F", "", 990000, { "", "", -1 } },
            { "H_CrewHelmetHeli_I", "GasMask", 50000, { "life_coplevel", "SCALAR", 1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 20, { "", "", -1 } },
            { "G_Sport_Checkered", "", 20, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
            { "G_Shades_Black", "", 25, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Combat", "", 55, { "", "", -1 } },
            { "G_Aviator", "", 100, { "", "", -1 } },
            { "G_Lady_Mirror", "", 150, { "", "", -1 } },
            { "G_Lady_Dark", "", 150, { "", "", -1 } },
            { "G_Lady_Blue", "", 150, { "", "", -1 } },
            { "G_Diving", "", 500, { "", "", -1 } },
            { "G_Balaclava_combat", "", 150, { "", "", -1 } },
            { "G_Balaclava_lowprofile", "", 150, { "", "", -1 } },
            { "G_Balaclava_oli", "", 150, { "", "", -1 } },
            { "G_Bandanna_aviator", "", 150, { "", "", -1 } },
            { "G_Bandanna_beast", "", 150, { "", "", -1 } },
            { "G_Bandanna_blk", "", 150, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 800, { "", "", -1 } },
            { "V_TacVest_blk_POLICE", "", 1000, { "life_coplevel", "SCALAR", 1 } },
            { "V_PlateCarrier2_rgr", "", 1500, { "life_coplevel", "SCALAR", 1 } },
            { "V_PlateCarrier1_blk", "", 1500, { "life_coplevel", "SCALAR", 1 } },
            { "V_Chestrig_blk", "", 8000, { "", "", -1 } },
            { "V_RebreatherB", "", 8000, { "", "", -1 } },
            { "V_RebreatherIA", "", 8000, { "", "", -1 } },
            { "V_PlateCarrierIAGL_dgtl", "", 8000, { "", "", -1 } },
            { "V_PlateCarrierSpec_blk", "", 80000, { "life_coplevel", "SCALAR", 5 } },
            { "V_Press_F", "", 800, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "tf_rt1523g_sage", "", 8000, { "", "", -1 } }, //long range-  40KM // BLUEFOR
            { "B_FieldPack_cbr", "", 500, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 700, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 2000, { "", "", -1 } },
            { "B_TacticalPack_blk", "", 2000, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 800, { "", "", -1 } },
            { "B_Bergen_blk", "", 1500, { "", "", -1 } },
            { "B_Bergen_sgg", "", 1500, { "", "", -1 } },
            { "B_Carryall_cbr", "", 3500, { "", "", -1 } },
            { "B_Parachute", "낙하산", 37500, { "", "", -1 } },
            { "B_OutdoorPack_blk", "", 500, { "", "", -1 } },
            { "B_AssaultPack_sgg", "JetPack", 500000, { "", "", -1 } }

//	    { "tf_anprc155", "", 3000, { "", "", -1 } },  //long range - 20KM(30 FOR inbuilt) // INDEPENDENT
//	    { "tf_anprc155_coyote", "", 3000, { "", "", -1 } },//long range - 20KM(30 FOR inbuilt)// INDEPENDENT
//	    { "tf_mr3000", "", 3000, { "", "", -1 } },//long range - 20KM(30 FOR inbuilt) // OPFOR
//	    { "tf_mr3000_bwmod", "", 3000, { "", "", -1 } },//long range - 20KM(30 FOR inbuilt)// OPFOR
//          { "tf_mr3000_bwmod_tropen", "", 3000, { "", "", -1 } },//long range - 20KM(30 FOR inbuilt)// OPFOR
//          { "tf_mr3000_multicam", "", 3000, { "", "", -1 } },//long range - 20KM(30 FOR inbuilt)// OPFOR
//          { "tf_mr3000_rhs", "", 3000, { "", "", -1 } },//long range - 20KM(30 FOR inbuilt)// OPFOR
//	    { "tf_rt1523g", "", 3000, { "", "", -1 } }, // long range - 20km(30 for inbuilt)  //BLUEFOR
//	    { "tf_rt1523g_big", "", 3000, { "", "", -1 } },// long range - 20km(30 for inbuilt)//BLUEFOR
//          { "tf_rt1523g_big_bwmod", "", 3000, { "", "", -1 } },// long range - 20km(30 for inbuilt)//BLUEFOR
//          { "tf_rt1523g_big_bwmod_tropen", "", 3000, { "", "", -1 } },// long range - 20km(30 for inbuilt)//BLUEFOR
//	    { "tf_rt1523g_big_rhs", "", 3000, { "", "", -1 } },// long range - 20km(30 for inbuilt)//BLUEFOR
//	    { "tf_rt1523g_black", "", 3000, { "", "", -1 } },// long range - 20km(30 for inbuilt)//BLUEFOR
//          { "tf_rt1523g_bwmod", "", 3000, { "", "", -1 } },// long range - 20km(30 for inbuilt)//BLUEFOR
//          { "tf_rt1523g_fabric", "", 3000, { "", "", -1 } },// long range - 20km(30 for inbuilt)//BLUEFOR
//	    { "tf_rt1523g_green", "", 3000, { "", "", -1 } },// long range - 20km(30 for inbuilt)//BLUEFOR
//          { "tf_rt1523g_rhs", "", 3000, { "", "", -1 } },// long range - 20km(30 for inbuilt)//BLUEFOR
//	    { "tf_bussole", "", 3000, { "", "", -1 } },//??

        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        license = "dive";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_I_Wetsuit", "", 2000, { "", "", -1 } },
            { "U_O_Wetsuit", "", 2000, { "", "", -1 } },
            { "U_B_Wetsuit", "", 2000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Diving", "", 500, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_RebreatherB", "", 5000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        license = "gun";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 4900, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_IG_Guerilla1_1", "", 5000, {"", "", -1} },
            { "U_I_G_Story_Protagonist_F", "", 7500, { "", "", -1 } },
            { "U_I_G_resistanceLeader_F", "", 11500, { "", "", -1 } },
            { "U_C_WorkerCoveralls", "", 17500, { "", "", -1 } },
            { "U_I_PilotCoveralls", "", 15610, { "", "", -1 } },
            { "U_IG_leader", "Guerilla Leader", 15340, { "", "", -1 } },
            { "U_I_GhillieSuit", "", 150000, { "", "", -1 } },


            { "U_CivilianPolo_A", "", 7500, { "", "", -1 } },
            { "U_CivilianPolo_B", "", 7500, { "", "", -1 } },
            { "U_CivilianPolo_C", "", 7500, { "", "", -1 } },
            { "U_CivilianPolo_D", "", 7500, { "", "", -1 } },
            { "U_CivilianPolo_E", "", 7500, { "", "", -1 } },
            { "U_Skater_B", "", 7500, { "", "", -1 } },
            { "U_Skater_A", "", 7500, { "", "", -1 } },
            { "U_AFAOfficerUni_A", "", 50000, { "", "", -1 } },
            { "U_CDFSoldierUni_A", "", 50000, { "", "", -1 } },
            { "U_TKSpecialUni_B", "", 50000, { "", "", -1 } },
            { "U_TKSoldierUni_B", "", 50000, { "", "", -1 } },
            { "U_CombatUniShirtMercB_G", "", 50000, { "", "", -1 } },
            { "U_CombatUniShirtMercB_D", "", 50000, { "", "", -1 } },
            { "U_CombatUniShirtMercB_F", "", 50000, { "", "", -1 } },
            { "U_CombatUniShirtMercB_B", "", 50000, { "", "", -1 } },
            { "U_CombatUniShirtMercB_A", "", 50000, { "", "", -1 } },
            { "U_CombatUniShirtMercA_C", "", 50000, { "", "", -1 } },
            { "U_CombatUniTShirt_F", "", 50000, { "", "", -1 } }


        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_ShemagOpen_tan", "", 850, { "", "", -1 } },
            { "H_Shemag_olive", "", 850, { "", "", -1 } },
            { "H_ShemagOpen_khk", "", 800, { "", "", -1 } },
            { "H_HelmetO_ocamo", "", 2500, { "", "", -1 } },
            { "H_MilCap_oucamo", "", 1200, { "", "", -1 } },
            { "H_Bandanna_camo", "", 650, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 25, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 20, { "", "", -1 } },
            { "G_Sport_Checkered", "", 20, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Combat", "", 55, { "", "", -1 } },
            // BI
            { "G_Balaclava_blk", "", 150, { "", "", -1 } },
            { "G_Balaclava_combat", "", 150, { "", "", -1 } },
            { "G_Balaclava_lowprofile", "", 150, { "", "", -1 } },
            { "G_Balaclava_oli", "", 150, { "", "", -1 } },
            { "G_Bandanna_aviator", "", 150, { "", "", -1 } },
            { "G_Bandanna_beast", "", 150, { "", "", -1 } },
            { "G_Bandanna_blk", "", 150, { "", "", -1 } },
            { "G_Bandanna_khk", "", 150, { "", "", -1 } },
            { "G_Bandanna_oli", "", 150, { "", "", -1 } },
            { "G_Bandanna_shades", "", 150, { "", "", -1 } },
            { "G_Bandanna_sport", "", 150, { "", "", -1 } },
            { "G_Bandanna_tan", "", 150, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_TacVest_khk", "", 12500, { "", "", -1 } },
            { "V_BandollierB_cbr", "", 4500, { "", "", -1 } },
            { "V_HarnessO_brn", "", 7500, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "tf_rt1523g_sage", "", 8000, { "", "", -1 } }, //long range-  40KM // BLUEFOR
            { "B_AssaultPack_khk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 2000, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 2500, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 3500, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 3500, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 3500, { "", "", -1 } },
            { "B_Bergen_sgg", "", 6500, { "", "", -1 } },
            { "B_Bergen_mcamo", "", 6500, { "", "", -1 } },
            { "B_Bergen_rgr", "", 6500, { "", "", -1 } },
            { "B_FieldPack_blk", "", 5000, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 5000, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 5000, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oli", "", 7500, { "", "", -1 } },
            { "B_Carryall_khk", "", 7500, { "", "", -1 } },
            { "B_Carryall_cbr", "", 7500, { "", "", -1 } },
            { "B_Parachute", "낙하산", 37500, { "", "", -1 } }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        license = "";
        side = "med";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_Rangemaster", "EMS Uniform", 250, { "", "", -1 } },
            { "U_B_CombatUniform_mcam", "EMS 형광", 500, { "", "", -1 } },
            { "U_B_CombatUniform_mcam_worn", "EMS 녹색", 500, { "", "", -1 } },
            { "U_Competitor", "EMS 주황", 500, { "", "", -1 } },
            { "U_I_Wetsuit", "EMS wetsuit", 5000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Cap_blu", "", 1000, { "", "", -1 } },
            { "H_Cap_red", "", 1000, { "", "", -1 } },
            { "H_Cap_surfer", "", 1000, { "", "", -1 } },
            { "H_Cap_usblack", "", 1000, { "", "", -1 } },
            { "H_Cap_press", "", 1000, { "", "", -1 } },
            { "H_Cap_blk_ION", "", 1000, { "", "", -1 } },
            { "H_Bandanna_surfer", "", 1000, { "", "", -1 } },
            { "H_Bandanna_blu", "", 1000, { "", "", -1 } },
            { "H_Cap_marshal", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_green_F", "", 5000, { "", "", -1 } },
            { "H_RacingHelmet_1_blue_F", "", 5000, { "", "", -1 } },
            { "H_RacingHelmet_1_orange_F", "", 5000, { "", "", -1 } },
            { "H_Cap_oli", "", 5000, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Blue", "", 10, { "", "", -1 } },
            { "G_Sport_Blackred", "", 20, { "", "", -1 } },
            { "G_Sport_Checkered", "", 20, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Aviator", "", 100, { "", "", -1 } },
            { "G_Lady_Mirror", "", 150, { "", "", -1 } },
            { "G_Lady_Dark", "", 150, { "", "", -1 } },
            { "G_Lady_Blue", "", 150, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Combat", "", 55, { "", "", -1 } },
            { "G_Diving", "", 500, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Press_F", "", 800, { "", "", -1 } },
            { "V_RebreatherB", "", 5000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "tf_rt1523g_sage", "", 8000, { "", "", -1 } }, //long range-  40KM // BLUEFOR
            { "B_FieldPack_oli", "EMS Backpack", 3000, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 5800, { "", "", -1 } },
            { "B_FieldPack_cbr", "", 6500, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 6700, { "", "", -1 } },
            { "B_Carryall_oli", "", 7500, { "", "", -1 } },
            { "B_Carryall_khk", "", 7500, { "", "", -1 } },
            { "B_Carryall_cbr", "", 7500, { "", "", -1 } },
            { "B_Parachute", "낙하산", 37500, { "", "", -1 } },
            { "B_AssaultPack_sgg", "JetPack", 400000, { "", "", -1 } }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        license = "rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_IG_Guerilla1_1", "", 5000, {"", "", -1} },
            { "U_I_G_Story_Protagonist_F", "", 7500, { "", "", -1 } },
            { "U_I_G_resistanceLeader_F", "", 11500, { "", "", -1 } },
            { "U_IG_leader", "Guerilla Leader", 15340, { "", "", -1 } },
            { "U_I_PilotCoveralls", "", 15610, { "", "", -1 } },
            { "U_O_SpecopsUniform_ocamo", "SpecCamo", 2500, { "", "", -1 } },
            { "U_I_GhillieSuit", "", 150000, { "", "", -1 } },
            { "U_O_V_Soldier_Viper_hex_F", "특수목적hex", 990000, { "", "", -1 } },
            //isis
            { "U_TKLocalUniLong_D", "", 150000, { "life_donorlevel", "SCALAR", 1 } },
            { "U_TKLocalUniLong_C", "", 150000, { "life_donorlevel", "SCALAR", 1 } },
            { "U_TKLocalUniLong_A", "", 150000, { "life_donorlevel", "SCALAR", 1 } },
            { "U_DressTKLocalUni_E_C", "", 150000, { "life_donorlevel", "SCALAR", 1 } },
            { "U_DressTKLocalUni_E_E", "", 150000, { "life_donorlevel", "SCALAR", 1 } },
            { "U_DressTKLocalUni_D_B", "", 150000, { "life_donorlevel", "SCALAR", 1 } },
            { "U_DressTKLocalUni_B_C", "", 150000, { "life_donorlevel", "SCALAR", 1 } },
            { "U_DressTKLocalUni_E_D", "", 150000, { "life_donorlevel", "SCALAR", 1 } },
            { "U_DressTKLocalUni_C_E", "", 150000, { "life_donorlevel", "SCALAR", 1 } },
            { "U_DressTKLocalUni_A_C", "", 150000, { "life_donorlevel", "SCALAR", 1 } },


            { "U_CombatUniLong_A", "", 50000, { "", "", -1 } },
            { "U_CombatUniVest_A", "", 50000, { "", "", -1 } },
            { "U_CombatUniLong_B", "", 50000, { "", "", -1 } },
            { "A3LCivPoloGreenGrey", "", 50000, { "", "", -1 } },
            { "A3LCivPoloGreenBlack", "", 50000, { "", "", -1 } },
            { "U_CombatUniSleeves_E", "", 50000, { "", "", -1 } },
            { "U_CombatUniTShirt_C", "", 50000, { "", "", -1 } },
            { "U_CombatUniSleeves_B", "", 50000, { "", "", -1 } },
            { "U_CombatUniSleevesShort_A", "", 50000, { "", "", -1 } },
            { "U_CivilianMetro_A", "", 50000, { "", "", -1 } },
            { "U_MilitaryCoat_A", "", 50000, { "", "", -1 } },
            { "U_MilitaryCoat_C", "", 50000, { "", "", -1 } },
            { "U_MilitiaSport_C", "", 50000, { "", "", -1 } },
            { "U_MilitiaUniShirt_G", "", 50000, { "", "", -1 } },
            { "U_MilitiaUniShirt_A", "", 50000, { "", "", -1 } },
            { "U_CivilianOutdoor_D", "", 50000, { "", "", -1 } },
            { "U_CivilianCroppedPants_E", "", 50000, { "", "", -1 } },


            { "U_CombatUniFatigue_A", "", 50000, { "life_donorlevel", "SCALAR", 1 } },
            { "U_CombatOutdoor_D", "", 50000, { "life_donorlevel", "SCALAR", 1 } },
            { "U_CivilianHunter_A", "", 50000, { "life_donorlevel", "SCALAR", 1 } },
            { "U_CivilianHunter_B", "", 50000, { "life_donorlevel", "SCALAR", 1 } },
            { "U_MilitiaUniTShirt_G", "", 50000, { "life_donorlevel", "SCALAR", 1 } },
            { "U_MilitiaUniTShirt_F", "", 50000, { "life_donorlevel", "SCALAR", 1 } },
            { "U_InsUniShirt_Leader", "", 150000, { "life_donorlevel", "SCALAR", 1 } },
            { "U_InsUniShirt_A", "", 50000, { "life_donorlevel", "SCALAR", 1 } },
            { "U_CombatUniLeadMerc_B", "", 50000, { "life_donorlevel", "SCALAR", 1 } },
            { "U_CombatUniShirtMercD_G", "", 50000, { "life_donorlevel", "SCALAR", 1 } },

            //정장방탄
            { "U_Office_A", "", 50000, { "life_donorlevel", "SCALAR", 3 } },
            { "U_Office_B", "", 50000, { "life_donorlevel", "SCALAR", 3 } },
            { "U_Office_C", "", 50000, { "life_donorlevel", "SCALAR", 3 } },
            { "U_CivilianSuit_A", "", 50000, { "life_donorlevel", "SCALAR", 2 } },
            { "U_CivilianSuit_C", "", 50000, { "life_donorlevel", "SCALAR", 2 } },
            { "U_CivilianSuit_B", "", 50000, { "life_donorlevel", "SCALAR", 2 } },
            { "U_CivilianSuit_D", "", 50000, { "life_donorlevel", "SCALAR", 2 } },

            //체육복방탄

            { "U_CivilianSport_A", "", 50000, { "", "", -1 } },
            { "U_CivilianSport_C", "", 50000, { "", "", -1 } },
            { "U_CivilianSport_D", "", 50000, { "", "", -1 } }



        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Bandanna_camo", "", 6500, { "", "", -1 } },
            { "H_ShemagOpen_khk", "", 8000, { "", "", -1 } },
            { "H_ShemagOpen_tan", "", 8500, { "", "", -1 } },
            { "H_Shemag_olive", "", 48500, { "", "", -1 } },
            { "H_MilCap_oucamo", "", 12000, { "", "", -1 } },
            { "H_HelmetO_ocamo", "", 25000, { "", "", -1 } },
            { "H_CrewHelmetHeli_I", "Gas Mask", 1000000, { "", "", -1 } },
            { "H_HelmetO_ViperSP_hex_F", "특수목적hex[1회]", 990000, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 25, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 20, { "", "", -1 } },
            { "G_Sport_Checkered", "", 20, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Combat", "", 55, { "", "", -1 } },
            { "G_Balaclava_blk", "", 150, { "", "", -1 } },
            { "G_Balaclava_combat", "", 150, { "", "", -1 } },
            { "G_Balaclava_lowprofile", "", 150, { "", "", -1 } },
            { "G_Balaclava_oli", "", 150, { "", "", -1 } },
            { "G_Bandanna_aviator", "", 150, { "", "", -1 } },
            { "G_Bandanna_beast", "", 150, { "", "", -1 } },
            { "G_Bandanna_blk", "", 150, { "", "", -1 } },
            { "G_Bandanna_khk", "", 150, { "", "", -1 } },
            { "G_Bandanna_oli", "", 150, { "", "", -1 } },
            { "G_Bandanna_shades", "", 150, { "", "", -1 } },
            { "G_Bandanna_sport", "", 150, { "", "", -1 } },
            { "G_Bandanna_tan", "", 150, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_TacVest_khk", "", 12500, { "", "", -1 } },
            { "V_BandollierB_cbr", "", 4500, { "", "", -1 } },
            { "V_HarnessO_brn", "", 7500, { "", "", -1 } },
            { "V_TacVestCamo_khk", "", 12500, { "", "", -1 } },
            { "V_PlateCarrierGL_mtp", "", 22500, { "", "", -1 } },
            { "V_HarnessOGL_gry", "Suicide Vest", 444400, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "tf_rt1523g_sage", "", 8000, { "", "", -1 } }, //long range-  40KM // BLUEFOR
            { "B_AssaultPack_khk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 2000, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 2500, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 3500, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 3500, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 3500, { "", "", -1 } },
            { "B_FieldPack_blk", "", 5000, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 5000, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 5000, { "", "", -1 } },
            { "B_Bergen_sgg", "", 6500, { "", "", -1 } },
            { "B_Bergen_mcamo", "", 6500, { "", "", -1 } },
            { "B_Bergen_rgr", "", 6500, { "", "", -1 } },
            { "B_Bergen_blk", "", 6500, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oli", "", 7500, { "", "", -1 } },
            { "B_Carryall_khk", "", 7500, { "", "", -1 } },
            { "B_Carryall_cbr", "", 7500, { "", "", -1 } },
            { "B_OutdoorPack_blk", "", 7500, { "", "", -1 } },
            { "B_ViperLightHarness_blk_F", "", 17500, { "", "", -1 } },
            { "B_Parachute", "낙하산", 37500, { "", "", -1 } }
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Driver_1_black", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_blue", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_red", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_orange", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_green", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_white", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_yellow", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1", "", 3600, { "", "", -1 } },
            { "U_C_Driver_2", "", 3500, { "", "", -1 } },
            { "U_C_Driver_3", "", 3700, { "", "", -1 } },
            { "U_C_Driver_4", "", 3700, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_RacingHelmet_1_black_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_red_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_white_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_blue_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_yellow_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_green_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_2_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_3_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_4_F", "", 2500, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    //Extreme Shop
    class extreme_shop {
        title = "Extreme Shop";
        license = "";
        side = "";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Driver_1_green", "", 1500, { "", "", -1 } },
            { "U_C_Driver_3", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_white", "", 1500, { "", "", -1 } },
            { "U_C_Driver_4", "", 1500, { "", "", -1 } },
            { "U_C_Driver_2", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_red", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_orange", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_blue", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_yellow", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_black", "", 1500, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "Casque_Moto", "", 150000, { "", "", -1 } },
            { "casco_moto", "", 150000, { "", "", -1 } },
            { "H_RacingHelmet_1_green_F", "", 5000, { "", "", -1 } },
            { "H_RacingHelmet_3_F", "", 5000, { "", "", -1 } },
            { "H_RacingHelmet_1_white_F", "", 5000, { "", "", -1 } },
            { "H_RacingHelmet_4_F", "", 5000, { "", "", -1 } },
            { "H_RacingHelmet_2_F", "", 5000, { "", "", -1 } },
            { "H_RacingHelmet_1_F", "", 5000, { "", "", -1 } },
            { "H_RacingHelmet_1_red_F", "", 5000, { "", "", -1 } },
            { "H_RacingHelmet_1_orange_F", "", 5000, { "", "", -1 } },
            { "H_RacingHelmet_1_blue_F", "", 5000, { "", "", -1 } },
            { "H_RacingHelmet_1_yellow_F", "", 5000, { "", "", -1 } },
            { "H_RacingHelmet_1_black_F", "", 5000, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 20, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Shades_Green", "", 20, { "", "", -1 } },
            { "G_Shades_Red", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 25, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 25, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 25, { "", "", -1 } },
            { "G_Sport_Checkered", "", 25, { "", "", -1 } },
            { "G_Sport_Greenblack", "", 25, { "", "", -1 } },
            { "G_Sport_Red", "", 25, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Squares", "", 50, { "", "", -1 } },
            { "G_Aviator", "", 100, { "", "", -1 } },
            { "G_Combat", "", 125, { "", "", -1 } },
            { "G_Lady_Mirror", "", 150, { "", "", -1 } },
            { "G_Lady_Dark", "", 150, { "", "", -1 } },
            { "G_Lady_Blue", "", 150, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_Parachute", "", 37500, { "", "", -1 } },   //낙하산
            { "B_AssaultPack_sgg", "RocketPack", 500000, { "", "", -1 } },  //기존 제트팩 로켓팩으로 이름 변경
            { "FLAY_HangGlider_Bag", "", 300000, { "", "", -1 } }, // 행글라이더 블루
            { "FLAY_HangGliderBlack_Bag", "", 300000, { "", "", -1 } }, //// 행글라이더 블랙
            { "sab_paraglider_bp", "Paraglider", 300000, { "", "", -1 } }, //패러글라이더
            { "sab_paraglider_red_bp", "Paraglider Red", 300000, { "", "", -1 } },
            { "sab_paraglider_green_bp", "Paraglider Green", 300000, { "", "", -1 } },
            { "sab_paraglider_blue_bp", "Paraglider Blue", 300000, { "", "", -1 } },
            { "sab_paraglider_swiss_bp", "Paraglider RedWhite", 300000, { "", "", -1 } },
            { "sab_paraglider_rainbow_bp", "Paraglider Rainbow", 300000, { "", "", -1 } },
            { "sab_paraglider_infilred_bp", "Paraglider Dark1", 300000, { "", "", -1 } },
            { "sab_paraglider_infilblu_bp", "Paraglider Dark2", 300000, { "", "", -1 } },
            { "riten_jetpack_bp", "Jet Pack", 3000000, { "life_donorlevel", "SCALAR", 3 } } //기부3 제트팩
        };
    };
};
