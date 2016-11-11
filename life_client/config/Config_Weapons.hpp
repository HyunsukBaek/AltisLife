/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 12500, 500 },
            { "hgun_Pistol_heavy_02_F", "", 55000, 500 },
            { "hgun_ACPC2_F", "", 35000, 500 },
            { "hgun_PDW2000_F", "", 100000, 500 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 10000 },
            { "6Rnd_45ACP_Cylinder", "", 10000 },
            { "9Rnd_45ACP_Mag", "", 10000 },
            { "30Rnd_9x21_Mag", "", 30000 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 3000 }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_SDAR_F", "", 130000, 2000 },
            { "arifle_TRG20_F", "", 180000, 2000 },
            { "arifle_Katiba_F", "", 280000, 2000 },
            { "arifle_MXC_F", "", 200000, 2000 },
            { "arifle_MX_SW_F", "", 270000, 2000 },
            { "srifle_DMR_01_F", "", 300000, 2000 }, //RAHIM
            { "srifle_EBR_F", "", 500000, 2000 }, //MK18
            { "LMG_Mk200_F", "", 850000, 2000 },
            { "srifle_DMR_05_hex_F", "cyrus(DLC)", 530000, 2000 },//cyrus
            { "arifle_CTAR_hex_F", "", 530000, 2000 },//CAR
            { "launch_RPG32_F", "", 990000, 2000 },
            { "launch_RPG7_F", "RPG7(tanoa)", 990000, 2000 }
        };
        mags[] = {
            { "20Rnd_556x45_UW_mag", "UNDER WATER 20EA", 50000 }, //SDAR, TRG20
            { "30Rnd_556x45_Stanag_Tracer_Yellow", "", 100000 }, //SDAR, TRG20
            { "30Rnd_556x45_Stanag", "", 100000 }, // SDAR, TRG20
            { "30Rnd_65x39_caseless_mag", "", 100000 },//KATIBA , MXC, MX_SW
            { "30Rnd_65x39_caseless_green", "", 100000 }, //KATIBA , MXC, MX_SW
            { "30Rnd_65x39_caseless_mag_Tracer", "", 100000 }, //KATIBA, MXC, MX_SW
            { "100Rnd_65x39_caseless_mag_Tracer", "", 200000 }, //MX_SW
            { "10Rnd_762x54_Mag", "", 100000 }, // RAHIM
            { "20Rnd_762x51_Mag", "", 100000 }, // MK 18
            { "200Rnd_65x39_cased_Box_Tracer", "", 300000 }, // MK200
            { "10Rnd_93x64_DMR_05_Mag", "", 100000 }, // CYRUS
            { "30Rnd_580x42_Mag_F", "", 100000 },//CAR
            { "30Rnd_580x42_Mag_Tracer_F", "", 100000 },//CAR
            { "RPG32_F", "", 100000 },
            { "RPG32_HE_F", "", 100000 },
            { "RPG7_F", "", 100000 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 35000 },
            { "optic_Holosight", "", 36000 },
            { "optic_Hamr", "", 7500 },
            { "acc_flashlight", "", 1000 },
            { "optic_DMS", "", 87500 },
            { "optic_Nightstalker", "", 150000},
            { "optic_SOS", "SOS_DLC", 100000 },
            { "muzzle_snds_58_blk_F", "", 500000 }
        };
    };

    class rebeldonator {
        name = "Donator Shop";
        side = "";
        license = "";
        level[] = { "life_donorlevel", "SCALAR", 1, "you must be donorlevel 1" };
        items[] = {
            { "srifle_DMR_07_hex_F", "", 130000, 2000 },
            { "arifle_ARX_hex_F", "", 180000, 2000 }

        };
        mags[] = {
            { "20Rnd_650x39_Cased_Mag_F", "", 50000 },
            { "30Rnd_65x39_caseless_green_mag_Tracer", "", 100000 },
			{ "10Rnd_50BW_Mag_F", "", 900000 }

        };
        accs[] = {
            { "optic_ACO_grn", "", 35000 },
            { "optic_Holosight", "", 36000 },
            { "optic_Hamr", "", 7500 },
            { "acc_flashlight", "", 1000 },
            { "optic_DMS", "", 87500 },
            { "optic_Nightstalker", "", 150000},
            { "optic_SOS", "SOS_DLC", 100000 },
            { "muzzle_snds_58_blk_F", "", 500000 }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "FirstAidKit", "", 3000, 65 },
            { "hgun_PDW2000_F", "", 105000, 20000 },
            { "hgun_Rook40_F", "", 50000, 3100 },
            { "hgun_Pistol_heavy_02_F", "", 65000, 2200 },// zubr
            { "hgun_ACPC2_F", "", 85000, 3000 },
            { "SMG_02_F", "", 200000, 20000 },//sting 9mm
            { "arifle_Katiba_F", "", 380000, 20000 },
            { "arifle_MXC_F", "", 400000, 20000 },
            { "srifle_DMR_01_F", "", 300000, 20000 },
            { "arifle_AKM_F", "AK12 APEX", 240000, 20000 },//AKM
            { "arifle_AKS_F", "AK12 APEX", 200000, 20000 }//AKS

        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 20000 }, // Rook40, PDW2000
            { "30Rnd_9x21_Mag", "", 50000 }, // Rook40, PDW2000
            { "6Rnd_45ACP_Cylinder", "", 10000 }, // zubr
            { "9Rnd_45ACP_Mag", "", 10000 }, // hgun_ACPC2_F
            { "30Rnd_556x45_Stanag", "", 100000 }, // sting9
            { "30Rnd_65x39_caseless_mag", "", 100000 },//KATIBA , MXC, MX_SW
            { "30Rnd_65x39_caseless_mag_Tracer", "", 100000 }, //KATIBA, MXC, MX_SW
            { "30Rnd_65x39_caseless_green", "", 100000 },//MXC, MX_SW
            { "10Rnd_762x54_Mag", "", 100000 },
            { "30Rnd_762x39_Mag_F", "", 100000 },
            { "30Rnd_762x39_Mag_Green_F", "", 100000 },
            { "30Rnd_762x39_Mag_Tracer_F", "", 100000 },
            { "30Rnd_762x39_Mag_Tracer_Green_F", "", 100000 },
			{ "30Rnd_545x39_Mag_Green_F", "", 100000 },
			{ "30Rnd_545x39_Mag_Tracer_F", "", 100000 }

        };
        accs[] = {
            { "optic_ACO_grn_smg", "",  10950 },
            { "optic_ACO_grn", "",  12000 },
            { "optic_Arco", "",  12000 },
			{ "optic_SOS", "SOS_DLC", 150000 },
            { "optic_Hamr", "", 150000 },
            { "optic_DMS", "", 87500 }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "tf_anprc152", "", 4000, 980 }, //Bluefor personal - 5km ( 30-512Mhz)
            { "tf_anprc148jem", "", 4000, 980 }, //Independent - personal - 5km ( 30-512Mhz)
            { "Binocular", "", 150, 10 },
            { "ItemGPS", "", 100, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, 10 },
            { "ItemRadio", "", 2500, 25 },
            { "ItemWatch", "", 50, -1 },
            { "FirstAidKit", "", 3000, 65 },
            { "NVGoggles", "", 2000, 980 },
            { "Chemlight_red", "", 300, 50 },
            { "Chemlight_yellow", "", 300, 50 },
            { "Chemlight_green", "", 300, 50 },
            { "Chemlight_blue", "", 300, 50 }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "tf_anprc152", "", 4000, 980 }, //Bluefor personal - 5km ( 30-512Mhz)
            { "tf_anprc148jem", "", 4000, 980 }, //Independent - personal - 5km ( 30-512Mhz)
            { "Binocular", "", 750, 100 },
            { "ItemGPS", "", 500, 45 },
            { "ItemMap", "", 250, 35 },
            { "ItemCompass", "", 250, 25 },
            { "ItemWatch", "", 250, 25 },
            { "ItemRadio", "", 2500, 25 },
            { "FirstAidKit", "", 3000, 65 },
            { "NVGoggles", "", 10000, 980 },
            { "Chemlight_red", "", 1500, 50 },
            { "Chemlight_yellow", "", 1500, 50 },
            { "Chemlight_green", "", 1500, 50 },
            { "Chemlight_blue", "", 1500, 50 }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Altis Cop Shop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "tf_anprc152", "", 4000, 980 }, //Bluefor personal - 5km ( 30-512Mhz)
            { "tf_anprc148jem", "", 4000, 980 }, //Independent - personal - 5km ( 30-512Mhz)
            { "Binocular", "", 150, 10 },
            { "ItemGPS", "", 100, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemRadio", "", 3000, 980 },
            { "FirstAidKit", "", 3000, 65 },
            { "NVGoggles", "", 2000, 980 },
            { "arifle_sdar_F", "Taser Rifle", 130000, 20000 },
            { "hgun_P07_F", "Stun Pistol", 35000, 650 },
            { "hgun_Rook40_F", "", 50000, 500 },
            { "hgun_ACPC2_F", "Handgun acpc2", 85000, 650 },
            { "hgun_Pistol_heavy_02_F", "", 65000, 500 },
            { "HandGrenade_Stone", "Flashbang", 37000, 1000 },
            { "SmokeShellRed", "TearGas", 40000, 1000 },
            { "Laserdesignator", "", 130000, 980 },
            { "SMG_01_F", "FlareGun", 200000, 2000 }
        };
        mags[] = {
            { "20Rnd_556x45_UW_mag", "Taser/Water Magazine", 10000 },
            { "30Rnd_556x45_Stanag", "Weight Rifle Magazine", 10000 },
            { "30Rnd_556x45_Stanag_Tracer_Red", "RED Rifle Magazine", 10000 },
            { "30Rnd_556x45_Stanag_Tracer_Yellow", "YELLOW Rifle Magazine", 10000 },
            { "16Rnd_9x21_Mag", "", 20000 },
            { "30Rnd_9x21_Mag", "", 50000 },
            { "9Rnd_45ACP_Mag", "", 10000 }, //ACPC
            { "6Rnd_45ACP_Cylinder", "", 10000 }, // zubr
            { "Laserbatteries", "", 10000 },
            { "30Rnd_45ACP_Mag_SMG_01_tracer_green", "FlareBullet", 10000 }
        };
        accs[] = {
            { "muzzle_snds_L", "", 650 },
            { "optic_MRD", "", 1000 },
            { "optic_Yorris", "", 2000}
        };
    };

    class cop_patrol {
        name = "Altis Patrol Officer Shop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_MX_F", "", 150000, 10000 },
            { "SMG_02_F", "", 100000, 10000 },
            { "arifle_Mk20C_F", "", 200000, 10000 },
            { "arifle_MX_SW_F", "", 240000, 10000 },
            { "arifle_AK12_F", "", 240000, 10000 }

        };
        mags[] = {
            { "30Rnd_65x39_caseless_mag", "", 10000 }, //MX
            { "30Rnd_65x39_caseless_mag_Tracer", "", 10000 },
            { "30Rnd_9x21_Mag", "", 10000 },
            { "30Rnd_556x45_Stanag", "", 10000}, // MX20
            { "30Rnd_556x45_Stanag_Tracer_Yellow", "", 10000 }, //MX20
            { "100Rnd_65x39_caseless_mag_Tracer", "", 50000 },
            { "30Rnd_762x39_Mag_F", "", 10000 },
            { "30Rnd_762x39_Mag_Green_F", "", 10000 },
            { "30Rnd_762x39_Mag_Tracer_F", "", 10000 },
            { "30Rnd_762x39_Mag_Tracer_Green_F", "", 10000 }
        };
        accs[] = {
            { "acc_flashlight", "", 750, 100 },
            { "optic_ACO_grn_smg", "", 2500 },
            { "optic_Holosight", "", 2200 },
            { "optic_Arco", "", 30500 },
            { "optic_MRCO", "", 20500 },
            { "optic_ERCO_snd_F", "", 80000 },
            { "muzzle_snds_H", "", 102750 },
            { "muzzle_snds_L", "", 102750 },
            { "muzzle_snds_M", "", 102750 },
            { "muzzle_snds_B", "", 102750 },
            { "muzzle_snds_B_khk_F", "", 202750 },
            { "Rangefinder", "", 52750 }
        };
    };

    class cop_sergeant {
        name = "Altis Sergeant Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be a Sergeant Rank!" };
        items[] = {
            { "srifle_EBR_F", "", 300000, 25000 },//mk18
            { "srifle_DMR_01_F", "", 220000, 25000 },//rahim
            { "srifle_DMR_05_hex_F", "cyrus(DLC)", 330000, 25000 },//cyrus
            { "LMG_Mk200_F", "", 850000, 25000 },//mk200
            { "srifle_LRR_F", "", 450000, 25000 },
			{ "arifle_ARX_blk_F", "Type115 Apex", 450000, 25000 }
        };
        mags[] = {
            { "20Rnd_762x51_Mag", "", 10000 },
            { "10Rnd_762x54_Mag", "", 10000 },
            { "10Rnd_93x64_DMR_05_Mag", "", 10000 },
            { "200Rnd_65x39_cased_Box", "", 100000 },
            { "200Rnd_65x39_cased_Box_Tracer", "", 100000 },
            { "7Rnd_408_Mag", "", 50000 },
			{ "30Rnd_65x39_caseless_green", "", 50000 },
			{ "30Rnd_65x39_caseless_green_mag_Tracer", "", 50000 },
			{ "10Rnd_50BW_Mag_F", "", 50000 }
        };
        accs[] = {
            { "optic_SOS", "", 25000 },
            { "optic_DMS", "", 30000 },
            { "optic_Hamr", "", 25000 },
            { "optic_NVS", "", 80000 },
            { "optic_KHS_blk", "", 45000 },
            { "acc_pointer_IR", "", 20000 }
        };
    };

    class cop_mastershop {
        name = "Altis police master Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 6, "You must be a master Rank!" };
        items[] = {
            { "srifle_GM6_F", "", 450000, 25000 },//lynx
            { "LMG_Zafir_F", "", 550000, 25000 },//zafir
            { "MMG_01_hex_F", "", 700000, 25000 }, //NAVID
            { "launch_Titan_F", "", 1500000, 25000 },
            { "launch_B_Titan_short_F", "", 1500000, 25000 }
        };
        mags[] = {
            { "5Rnd_127x108_Mag", "", 50000 },
            { "5Rnd_127x108_APDS_Mag", "", 50000 },
            { "150Rnd_762x54_Box", "", 100000 },
            { "150Rnd_762x54_Box_Tracer", "", 100000 },
            { "150Rnd_93x64_Mag", "", 100000 },
            { "Titan_AA", "", 100000 },
            { "Titan_AT", "", 100000 },
            { "Titan_AP", "", 100000 }
        };
        accs[] = {
            { "optic_LRPS", "", 100000 },
            { "optic_Hamr", "", 100000 },
            { "optic_tws", "", 150000 },
            { "optic_Nightstalker", "", 130000 },
            { "acc_pointer_IR", "", 30000 }
        };
    };

    class cop_donatorshop {
		name = "Altis police donator Shop";
		side = "cop";
		license = "";
		level[] = { "life_donorlevel", "SCALAR", 3, "You must be a donator level 3" };
		items[] = {
			{ "arifle_SPAR_01_blk_F", "", 450000, 25000 },
			{ "arifle_SPAR_02_blk_F", "", 450000, 25000 },
			{ "arifle_SPAR_03_blk_F", "", 450000, 25000 },
			{ "LMG_03_F", "", 850000, 25000 }

		};
		mags[] = {
			{ "30Rnd_556x45_Stanag", "", 50000 },
			{ "30Rnd_556x45_Stanag_green", "", 50000 },
			{ "30Rnd_556x45_Stanag_Tracer_Green", "", 50000 },
			{ "150Rnd_556x45_Drum_Mag_F", "", 100000 },
			{ "150Rnd_556x45_Drum_Mag_Tracer_F", "", 100000 },
			{ "20Rnd_762x51_Mag", "", 100000 },
			{ "200Rnd_556x45_Box_F", "", 200000 },
			{ "200Rnd_556x45_Box_Red_F", "", 200000 },
			{ "200Rnd_556x45_Box_Tracer_Red_F", "", 200000 }
		};
		accs[] = {
			{ "optic_AMS", "", 100000 },
			{ "optic_KHS_hex", "", 100000 },
			{ "optic_KHS_tan", "", 150000 },
			{ "optic_AMS_khk", "", 130000 }
		};
	};

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "tf_anprc152", "", 4000, 980 }, //Bluefor personal - 5km ( 30-512Mhz)
            { "tf_anprc148jem", "", 4000, 980 }, //Independent - personal - 5km ( 30-512Mhz)
            { "FirstAidKit", "", 1000, 65 },
            { "NVGoggles", "", 1200, 980 },
            { "ItemGPS", "", 100, 45 },
            { "Binocular", "", 150, 50 },
            { "hgun_P07_F", "Pistol", 35000, 2000 },
            { "hgun_PDW2000_Holo_snds_F", "", 65000, 2000 },
            { "ItemMap", "", 250, 35 },
            { "ItemRadio", "", 2500, 25 },
            { "ItemCompass", "", 250, 25 },
            { "ItemWatch", "", 250, 10 },
            { "SMG_01_F", "FlareGun", 200000, 2000 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 20000 },
            { "30Rnd_45ACP_Mag_SMG_01_tracer_green", "FlareBullet", 50000 }
        };
        accs[] = {};
    };
};
