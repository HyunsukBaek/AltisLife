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
            { "U_C_Poloshirt_redwhite", "Kitty", 150, { "", "", -1 } },
            { "U_C_Poloshirt_stripped", "Gay1", 125, { "", "", -1 } },
            { "U_C_Poloshirt_salmon", "Gay2", 175, { "", "", -1 } },
            { "U_C_TeeSurfer_shorts_1", "Gay3", 175, { "", "", -1 } },
            { "U_C_TeeSurfer_shorts_2", "Gay4", 175, { "", "", -1 } },
            { "U_Competitor", "Press Suit", 275, { "", "", -1 } },
            { "U_C_Poor_2", "Rag tagged clothes", 250, { "", "", -1 } },            
            { "U_C_Poloshirt_tricolour", "Poloshirt Tricolor", 350, { "", "", -1 } },
            { "U_OrestesBody", "Surfing On Land", 1100, { "", "", -1 } },
            { "U_C_HunterBody_grn", "The Hunters Look", 1500, { "", "", -1 } },
            { "U_C_WorkerCoveralls", "Mechanic Coveralls", 2500, { "", "", -1 } }
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
//	    { "tf_rt1523g_sage", "", 8000, { "", "", -1 } }, //long range-  40KM // BLUEFOR
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
            { "B_AssaultPack_sgg", "JetPack", 300000, { "", "", -1 } },
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
            { "pilot_bLACK_uniform", "", 5000, { "", "", -1 } },
            { "pilot_blue_uniform", "", 5000, { "", "", -1 } },
            { "pilot_green_uniform", "", 5000, { "", "", -1 } },
            { "pilot_red_uniform", "", 5000, { "", "", -1 } },
            { "pilot_yellow_uniform", "", 5000, { "", "", -1 } },
            { "bodyguard_uniform_new", "", 5000, { "", "", -1 } },
            { "druglord_uniform_new", "", 5000, { "", "", -1 } },
            { "Robber_uniform_new", "Robber uniform", 5000, { "", "", -1 } },
            { "Killer_uniform_new", "Killer uniform", 5000, { "", "", -1 } },
            { "mafiaboss_uniform_new", "Mafia boss", 5000, { "life_donorlevel", "SCALAR", 2 } },
            { "CG_pilot_uniform", "", 5000, { "", "", -1 } },
            { "president_uniform_new", "President", 5000, { "life_donorlevel", "SCALAR", 2 } },
            { "xmas_santa_blufor_uniform", "santa blue", 5000, { "life_donorlevel", "SCALAR", 1 } },
            { "xmas_santa_ind_uniform", "santa green", 5000, { "life_donorlevel", "SCALAR", 1 } },
            { "xmas_santa_opfor_uniform", "santa red", 5000, { "life_donorlevel", "SCALAR", 1 } },
            { "A3L_Prisoner_Outfit", "prisoner1", 5000, { "", "", -1 } },
            { "Max_prisoner_clothes", "prisoner2", 5000, { "", "", -1 } },
            { "rifle_clothes", "", 5000, { "", "", -1 } },
            { "skull_gang", "", 5000, { "", "", -1 } },
            { "vip1_uniform_new", "", 50000, { "life_donorlevel", "SCALAR", 1 } },
            { "vip2_uniform_new", "", 50000, { "life_donorlevel", "SCALAR", 1 } },
            { "vip3_uniform_new", "", 50000, { "", "", -1 } }
        };
        headgear[] = {
            { "A3L_Halloween_JigSaw", "", 150000, { "life_donorlevel", "SCALAR", 1 } },
            { "A3L_Legoman", "", 150000, { "life_donorlevel", "SCALAR", 1 } },
            { "A3L_Halloween_PredatorMask", "", 100000, { "", "", -1 } },
            { "A3L_Halloween_Pumpkinhead", "", 100000, { "", "", -1 } },
            { "H_AntmanMask", "", 100000, { "", "", -1 } },
            { "A3L_Mask", "", 100000, { "", "", -1 } },
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
            { "Kio_Spinning_Hat", "", 150000, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "sab_CUAV_bp", "", 200000, { "", "", -1 } },
            { "sab_CUAV_bp_blue", "", 200000, { "", "", -1 } },
            { "sab_CUAV_bp_pink", "", 200000, { "", "", -1 } },
            { "sab_CUAV_bp_violet", "", 200000, { "", "", -1 } },
            { "sab_CUAV_piper_bp", "", 300000, { "", "", -1 } }, //무선비행기
            { "sab_CUAV_trojan_bp", "", 300000, { "", "", -1 } }, //무선비행기
            { "FLAY_HangGlider_Bag", "", 550000, { "", "", -1 } }, // 글라이더
            { "FLAY_HangGliderBlack_Bag", "", 550000, { "", "", -1 } } //// 글라이더
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

	    // addon
            { "max_captain_uniform", "캡틴", 10000, { "life_coplevel", "SCALAR", 4 } },
            { "max_chief_uniform", "chief Uniform", 10000, { "life_coplevel", "SCALAR", 5 } },
            { "max_CG_uniform", "cost guard", 10000, { "", "", -1 } },
            { "max_liutentant_uniform", "liutentant", 10000, { "", "", -1 } },
            { "max_prisonG_uniform", "교도관", 10000, { "life_donorlevel", "SCALAR", 1 } },
            { "police_pilot_uniform", "파일럿", 10000, { "", "", -1 } },
	    { "max_Lapd_uniform", "", 10000, { "", "", -1 } },
	    { "police_pilot_uniform", "", 10000, { "", "", -1 } },
	    { "max_recruit_uniform", "", 10000, { "", "", -1 } },
	    { "agent_uniform_new", "비밀요원 정장", 10000, { "life_coplevel", "SCALAR", 3 } },
	    { "security_uniform", "", 10000, { "", "", -1 } },
	    { "sheriff_uniform_new", "", 10000, { "", "", -1 } },
	    { "fbi_agent_uniform", "FBI 요원1", 10000, { "", "", -1 } },
	    { "fbi_assistant_uniform", "FBI 요원2", 10000, { "life_coplevel", "SCALAR", 3 } },
	    { "fbi_director_uniform", "FBI 요원3", 10000, { "life_coplevel", "SCALAR", 3 } },
	    { "fbi_pilot_uniform", "FBI 파일럿", 10000, { "life_coplevel", "SCALAR", 4 } },
	    { "fbi_rru_uniform", "FBI 특수부대", 10000, { "life_coplevel", "SCALAR", 4 } },
	    { "swat_officer_lapd", "SWAT Officer", 10000, { "life_donorlevel", "SCALAR", 1 } },
	    { "swat_lapd_uniform", "SWAT LAPD", 10000, { "life_donorlevel", "SCALAR", 1 } },
	    { "special_agent_uniform_new", "Special Agent", 10000, { "life_donorlevel", "SCALAR", 2 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Cap_police", "", 25, { "", "", -1 } },
            { "H_Beret_blk_POLICE", "", 50, { "life_coplevel", "SCALAR", 2 } },
            { "H_HelmetB_plain_mcamo", "", 75, { "life_coplevel", "SCALAR", 1 } },
            { "H_MilCap_blue", "", 100, { "life_coplevel", "SCALAR", 2 } },
            { "H_Booniehat_mcamo", "", 120, { "life_coplevel", "SCALAR", 1 } },
            { "H_Beret_Colonel", "", 120, { "life_coplevel", "SCALAR", 1 } },
            { "H_Bandanna_khk", "", 120, { "life_coplevel", "SCALAR", 1 } },
            { "H_HelmetB_light", "", 120, { "life_coplevel", "SCALAR", 2 } },
            { "H_HelmetCrew_O", "", 120, { "life_coplevel", "SCALAR", 2 } },
            { "H_HelmetSpecO_blk", "", 120, { "life_coplevel", "SCALAR", 2 } },
            { "H_PilotHelmetHeli_O", "", 120, { "life_coplevel", "SCALAR", 2 } },
            { "H_HelmetB_light_black", "", 120, { "life_coplevel", "SCALAR", 1 } },
            { "H_HelmetB_black", "", 120, { "life_coplevel", "SCALAR", 1 } },
            { "H_RacingHelmet_4_F", "", 120, { "life_coplevel", "SCALAR", 1 } },
            { "H_ShemagOpen_khk", "", 800, { "", "", -1 } },
            { "H_ShemagOpen_tan", "", 850, { "", "", -1 } },
            { "H_Shemag_olive", "", 850, { "", "", -1 } },

	    //addon
            { "max_CG_Hat", "", 10000, { "", "", -1 } },
            { "fbi_cap", "", 10000, { "", "", -1 } },
            { "fbi_officer_cap", "", 10000, { "life_coplevel", "SCALAR", 3 } },
            { "Masque_forceAlpha", "", 10000, { "", "", -1 } },
            { "max_biker_helmet", "", 10000, { "", "", -1 } },
            { "max_police_Hat", "", 10000, { "", "", -1 } },
            { "max_prisonG_cap", "", 10000, { "", "", -1 } },
            { "max_sheriff_Hat", "", 10000, { "", "", -1 } },
            { "police_swat_cap", "", 10000, { "", "", -1 } },
            { "Police_Swat_Helmet", "", 10000, { "life_donorlevel", "SCALAR", 1 } }
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
            { "V_Press_F", "", 800, { "", "", -1 } },
	    //addon
            { "fbi_rru_vest", "", 15000, { "", "", -1 } },
            { "fbi_vest", "", 15000, { "", "", -1 } },
            { "fbi_vest_blue", "", 15000, { "", "", -1 } },
            { "fbi_vest_grey", "", 15000, { "", "", -1 } },
            { "officer_belt", "", 15000, { "", "", -1 } },
            { "police_belt_pistol", "", 15000, { "", "", -1 } },
            { "police_belt_pistol_patrolman", "", 15000, { "", "", -1 } },
            { "Swat_sniper_vest", "", 15000800, { "life_coplevel", "SCALAR", 4 } },
            { "Security_vest", "", 15000, { "life_coplevel", "SCALAR", 4 } },
            { "police_swat_vest", "", 15000, { "life_donorlevel", "SCALAR", 1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
//            { "tf_rt1523g_sage", "", 8000, { "", "", -1 } }, //long range-  40KM // BLUEFOR
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
            { "U_I_GhillieSuit", "", 150000, { "", "", -1 } }
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
//            { "tf_rt1523g_sage", "", 8000, { "", "", -1 } }, //long range-  40KM // BLUEFOR
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
            { "B_AssaultPack_sgg", "JetPack", 500000, { "", "", -1 } },
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
            { "U_I_Wetsuit", "EMS wetsuit", 5000, { "", "", -1 } },
            /// ADDON
            { "HEMS_pilot_uniform", "EMS Pilot", 5000, { "", "", -1 } },
            { "max_paramedic_uniform", "", 5000, { "", "", -1 } },
            { "max_fire_uniform", "fire uniform", 5000, { "life_donorlevel", "SCALAR", 1 } }
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
            { "H_Cap_oli", "", 5000, { "", "", -1 } },
            //addon
            { "max_fire_Helmet", "", 15000, { "life_donorlevel", "SCALAR", 1 } }
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
            { "V_RebreatherB", "", 5000, { "", "", -1 } },
	    //addon
	    { "max_paramedic_vest_blue", "", 15000, { "life_donorlevel", "SCALAR", 1 } },
            { "max_paramedic_vest_red", "", 15000, { "", "", -1 } }

        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
//            { "tf_rt1523g_sage", "", 8000, { "", "", -1 } }, //long range-  40KM // BLUEFOR
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
            { "U_I_GhillieSuit", "", 150000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Bandanna_camo", "", 650, { "", "", -1 } },
            { "H_ShemagOpen_khk", "", 800, { "", "", -1 } },
            { "H_ShemagOpen_tan", "", 850, { "", "", -1 } },
            { "H_Shemag_olive", "", 850, { "", "", -1 } },
            { "H_MilCap_oucamo", "", 1200, { "", "", -1 } },
            { "H_HelmetO_ocamo", "", 2500, { "", "", -1 } }
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
//            { "tf_rt1523g_sage", "", 8000, { "", "", -1 } }, //long range-  40KM // BLUEFOR
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
            { "B_AssaultPack_sgg", "JetPack", 500000, { "", "", -1 } },
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
};
