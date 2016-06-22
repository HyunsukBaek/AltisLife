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
            { "hgun_Rook40_F", "", 50000, 500 },
            { "hgun_Pistol_heavy_02_F", "", 65000, 500 },
            { "hgun_ACPC2_F", "", 85000, 500 },
            { "hgun_PDW2000_F", "", 105000, 500 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 160 },
            { "6Rnd_45ACP_Cylinder", "", 600 },
            { "9Rnd_45ACP_Mag", "", 750 },
            { "30Rnd_9x21_Mag", "", 1500 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 2500 }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_SDAR_F", "", 300000, 2000 },
            { "arifle_TRG20_F", "", 240000, 2000 },
            { "arifle_Katiba_F", "", 380000, 2000 },
            { "arifle_MXC_F", "", 400000, 2000 },
            { "arifle_MX_SW_F", "", 550000, 2000 },
            { "srifle_DMR_01_F", "", 440000, 2000 }, //RAHIM
            { "srifle_EBR_F", "", 620000, 2000 }, //MK18
            { "LMG_Mk200_F", "", 750000, 2000 },
            { "srifle_DMR_05_hex_F", "cyrus(DLC)", 890000, 2000 },//cyrus
            { "launch_RPG32_F", "", 1800000, 2000 }
        };
        mags[] = {
            { "20Rnd_556x45_UW_mag", "UNDER WATER 20EA", 3000 }, //SDAR, TRG20
            { "30Rnd_556x45_Stanag_Tracer_Yellow", "", 2000 }, //SDAR, TRG20
            { "30Rnd_556x45_Stanag", "", 3000 }, // SDAR, TRG20
	    { "30Rnd_65x39_caseless_mag", "", 4000 },//KATIBA , MXC, MX_SW
            { "30Rnd_65x39_caseless_green", "", 3000 }, //KATIBA , MXC, MX_SW
	    { "30Rnd_65x39_caseless_mag_Tracer", "", 3000 }, //KATIBA, MXC, MX_SW
	    { "100Rnd_65x39_caseless_mag_Tracer", "", 8000 }, //MX_SW
            { "10Rnd_762x54_Mag", "", 4000 }, // RAHIM
	    { "20Rnd_762x51_Mag", "", 3000 }, // MK 18
            { "200Rnd_65x39_cased_Box_Tracer", "", 10000 }, // MK200
            { "10Rnd_93x64_DMR_05_Mag", "", 4000 }, // CYRUS
            { "RPG32_F", "", 50000 },
            { "RPG32_HE_F", "", 50000 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 35000 },
            { "optic_Holosight", "", 36000 },
            { "optic_Hamr", "", 7500 },
            { "acc_flashlight", "", 1000 },
            { "optic_DMS", "", 87500 },
            { "optic_Nightstalker", "", 250000},
            { "optic_SOS", "SOS_DLC", 150000 }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "FirstAidKit", "", 550, 65 },
	    { "hgun_PDW2000_F", "", 105000, 20000 },
            { "hgun_Rook40_F", "", 50000, 3100 },
            { "hgun_Pistol_heavy_02_F", "", 65000, 2200 },// zubr
            { "hgun_ACPC2_F", "", 85000, 3000 },
            { "SMG_02_F", "", 205000, 20000 },//sting 9mm
            { "arifle_Katiba_F", "", 380000, 20000 },
            { "arifle_MXC_F", "", 400000, 20000 },
            { "srifle_DMR_01_F", "", 450000, 20000 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 250 }, // Rook40, PDW2000
            { "30Rnd_9x21_Mag", "", 750 }, // Rook40, PDW2000
            { "6Rnd_45ACP_Cylinder", "", 500 }, // zubr
            { "9Rnd_45ACP_Mag", "", 450 }, // hgun_ACPC2_F
            { "30Rnd_556x45_Stanag", "", 2000 }, // sting9
	    { "30Rnd_65x39_caseless_mag", "", 4000 },//KATIBA , MXC, MX_SW
	    { "30Rnd_65x39_caseless_mag_Tracer", "", 3000 }, //KATIBA, MXC, MX_SW
	    { "30Rnd_65x39_caseless_green", "", 3000 },//MXC, MX_SW
            { "10Rnd_762x54_Mag", "", 4000 }
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
            { "FirstAidKit", "", 550, 65 },
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
            { "FirstAidKit", "", 550, 65 },
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
            { "FirstAidKit", "", 550, 65 },
            { "NVGoggles", "", 2000, 980 },
            { "arifle_sdar_F", "Taser Rifle", 300000, 20000 },
            { "hgun_P07_F", "Stun Pistol", 100000, 650 },
	    { "hgun_Rook40_F", "", 50000, 500 },
            { "hgun_ACPC2_F", "Handgun acpc2", 85000, 650 },
	    { "hgun_Pistol_heavy_02_F", "", 65000, 500 },
            { "HandGrenade_Stone", "Flashbang", 37000, 1000 },
            { "Laserdesignator", "", 130000, 980 },
            { "SMG_01_F", "FlareGun", 200000, 2000 },
	    { "B_UAV_AI", "B_UAV_AI", 200000, 2000 }
        };
        mags[] = {
            { "20Rnd_556x45_UW_mag", "Taser/Water Magazine", 450 },
            { "30Rnd_556x45_Stanag", "Weight Rifle Magazine", 450 },
            { "30Rnd_556x45_Stanag_Tracer_Red", "RED Rifle Magazine", 450 },
            { "30Rnd_556x45_Stanag_Tracer_Yellow", "YELLOW Rifle Magazine", 450 },
            { "16Rnd_9x21_Mag", "", 250 },
            { "30Rnd_9x21_Mag", "", 250 },
            { "9Rnd_45ACP_Mag", "", 250 }, //ACPC
	    { "6Rnd_45ACP_Cylinder", "", 500 }, // zubr
            { "Laserbatteries", "", 450 },
            { "30Rnd_45ACP_Mag_SMG_01_tracer_green", "FlareBullet", 2000 }
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
            { "arifle_MX_F", "", 330000, 7500 },
            { "SMG_02_F", "", 230000, 7500 },
            { "arifle_Mk20C_F", "", 330000, 7500 },
            { "arifle_MX_SW_F", "", 530000, 5000 }
        };
        mags[] = {
            { "30Rnd_65x39_caseless_mag", "", 530 }, //MX
            { "30Rnd_65x39_caseless_mag_Tracer", "", 530 },
            { "30Rnd_9x21_Mag", "", 850 },
            { "30Rnd_556x45_Stanag", "", 600}, // MX20
            { "30Rnd_556x45_Stanag_Tracer_Yellow", "", 600 }, //MX20
            { "100Rnd_65x39_caseless_mag_Tracer", "", 8000 }
        };
        accs[] = {
            { "acc_flashlight", "", 750, 100 },
            { "optic_ACO_grn_smg", "", 2500 },
            { "optic_Holosight", "", 2200 },
            { "optic_Arco", "", 30500 },
            { "optic_MRCO", "", 20500 },
            { "optic_NVS", "", 80000 },
            { "muzzle_snds_H", "", 102750 },
            { "muzzle_snds_L", "", 102750 },
            { "muzzle_snds_M", "", 102750 },
            { "muzzle_snds_B", "", 102750 },
            { "Rangefinder", "", 52750 }
        };
    };

    class cop_sergeant {
        name = "Altis Sergeant Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be a Sergeant Rank!" };
        items[] = {
            { "srifle_EBR_F", "", 650000, 25000 },//mk18
            { "srifle_DMR_01_F", "", 450000, 25000 },//rahim
            { "srifle_DMR_05_hex_F", "cyrus(DLC)", 830000, 25000 },//cyrus
            { "LMG_Mk200_F", "", 750000, 25000 },//mk200
            { "srifle_LRR_F", "", 900000, 25000 }
        };
        mags[] = {
            { "20Rnd_762x51_Mag", "", 600 },
            { "10Rnd_762x54_Mag", "", 850 },
            { "10Rnd_93x64_DMR_05_Mag", "", 8000 },
            { "200Rnd_65x39_cased_Box", "", 10000 },
            { "200Rnd_65x39_cased_Box_Tracer", "", 10000 },
            { "7Rnd_408_Mag", "", 1450 }
        };
        accs[] = {
            { "optic_SOS", "", 25000 },
            { "optic_DMS", "", 30000 },
            { "optic_Hamr", "", 25000 },
            { "optic_KHS_blk", "", 45000 },
            { "acc_pointer_IR", "", 20000 }
        };
    };

    class cop_mastershop {
        name = "Altis police master Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 5, "You must be a master Rank!" };
        items[] = {
            { "srifle_GM6_F", "", 900000, 25000 },//lynx
            { "LMG_Zafir_F", "", 1200000, 25000 },//zafir
            { "MMG_01_hex_F", "", 1900000, 25000 }, //NAVID
            { "launch_Titan_F", "", 2800000, 25000 },
            { "launch_B_Titan_short_F", "", 1500000, 25000 }
        };
        mags[] = {
            { "5Rnd_127x108_Mag", "", 1450 },
            { "5Rnd_127x108_APDS_Mag", "", 1450 },
            { "150Rnd_762x54_Box", "", 5450 },
            { "150Rnd_762x54_Box_Tracer", "", 5450 },
            { "150Rnd_93x64_Mag", "", 4000 },
            { "Titan_AA", "", 100000 },
            { "Titan_AT", "", 100000 },
            { "Titan_AP", "", 100000 }
        };
        accs[] = {
            { "optic_LRPS", "", 200000 },
            { "optic_Hamr", "", 150000 },
            { "optic_tws", "", 300000 },
            { "optic_Nightstalker", "", 225000 },
            { "acc_pointer_IR", "", 30000 }
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
            { "FirstAidKit", "", 550, 65 },
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
            { "16Rnd_9x21_Mag", "", 100 },
            { "30Rnd_45ACP_Mag_SMG_01_tracer_green", "FlareBullet", 2000 }
        };
        accs[] = {};
    };
};
