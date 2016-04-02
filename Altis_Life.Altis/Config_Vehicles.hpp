class CarShops {
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: ARRAY (This is for limiting items to certain things)
    *            0: Variable to read from
    *            1: Variable Value Type (SCALAR / BOOL /EQUAL)
    *            2: What to compare to (-1 = Check Disabled)
    *
    *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
    *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
    *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
    *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
    */
    class civ_car {
        side = "civ";
        vehicles[] = {
            { "B_Quadbike_01_F", { "", "", -1 } },
            { "C_Hatchback_01_F", { "", "", -1 } },
            { "C_Offroad_01_F", { "", "", -1 } },
            { "C_SUV_01_F", { "", "", -1 } },
            { "C_Hatchback_01_sport_F", { "", "", -1 } },
            { "C_Van_01_transport_F", { "", "", -1 } }
        };
    };

    class kart_shop {
        side = "civ";
        vehicles[] = {
            { "C_Kart_01_Blu_F", { "", "", -1 } },
            { "C_Kart_01_Fuel_F", { "", "", -1 } },
            { "C_Kart_01_Red_F", { "", "", -1 } },
            { "C_Kart_01_Vrana_F", { "", "", -1 } }
        };
    };

    class civ_truck {
        side = "civ";
        vehicles[] = {
            { "C_Van_01_box_F", { "", "", -1 } },
            { "I_Truck_02_transport_F", { "", "", -1 } },
            { "I_Truck_02_covered_F", { "", "", -1 } },
            { "B_Truck_01_transport_F", { "", "", -1 } },
            { "B_Truck_01_box_F", { "", "", -1 } },
            { "O_Truck_03_device_F", { "", "", -1 } },
            { "C_Van_01_fuel_F", { "", "", -1 } },
            { "I_Truck_02_fuel_F", { "", "", -1 } }
        };
    };

    class civ_air {
        side = "civ";
        vehicles[] = {
            { "B_Heli_Light_01_F", { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", { "", "", -1 } },
            { "I_Heli_light_03_unarmed_F", { "", "", -1 } },
            { "B_Heli_Transport_03_unarmed_F", { "", "", -1 } }
        };
    };

     class civ_ship {
        side = "civ";
        vehicles[] = {
            { "C_Rubberboat", { "", "", -1 } },
            { "C_Boat_Civil_01_F", { "", "", -1 } },
            { "B_SDV_01_F", { "", "", -1 } }
        };
    };

    class reb_car {
        side = "civ";
        vehicles[] = {
            { "B_Quadbike_01_F", { "", "", -1 } },
            { "B_G_Offroad_01_F", { "", "", -1 } },
            { "O_MRAP_02_F", { "", "", -1 } },
            { "B_Heli_Light_01_stripped_F", { "", "", -1 } },
            { "B_G_Offroad_01_armed_F", { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", { "", "", -1 } },
            { "I_Heli_Transport_02_F",  { "", "", -1 } }
        };
    };

    class med_shop {
        side = "med";
        vehicles[] = {
            { "B_Quadbike_01_F", { "", "", -1 } },
            { "C_Offroad_01_F", { "", "", -1 } },
            { "C_SUV_01_F", { "", "", -1 } },
            { "C_Hatchback_01_F", { "", "", -1 } },
            { "C_Hatchback_01_sport_F", { "", "", -1 } },
            { "C_Van_01_box_F", { "", "", -1 } },
            { "I_Truck_02_medical_F", { "", "", -1 } },
            { "B_Truck_01_medical_F", { "", "", -1 } },
            { "I_MRAP_03_F", { "", "", -1 } }
        };
    };

    class med_air_hs {
        side = "med";
        vehicles[] = {
            { "B_Heli_Light_01_F", { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", { "", "", -1 } },
            { "B_Heli_Transport_03_unarmed_F", { "", "", -1 } },
            { "I_Heli_Transport_02_F",  { "", "", -1 } },
	    { "O_Heli_Transport_04_F",  { "", "", -1 } }
        };
    };

    class cop_car {
        side = "cop";
        vehicles[] = {
            { "C_Offroad_01_F", { "", "", -1 } },
            { "C_SUV_01_F", { "", "", -1 } },
            { "C_Hatchback_01_sport_F", { "", "", -1 } },
            { "O_MRAP_02_F", { "", "", -1 } },
            { "B_MRAP_01_F", { "life_coplevel", "SCALAR", 2 } },
            { "B_Truck_01_Repair_F", { "life_coplevel", "SCALAR", 2 } },
            { "B_Truck_01_ammo_F", { "life_coplevel", "SCALAR", 2 } },
            { "I_MRAP_03_F", { "life_coplevel", "SCALAR", 3 } },
            { "B_MRAP_01_hmg_F", { "life_coplevel", "SCALAR", 4 } },
            { "O_MRAP_02_hmg_F", { "life_coplevel", "SCALAR", 4 } },
            { "I_MRAP_03_hmg_F", { "life_coplevel", "SCALAR", 5 } },
            { "O_MBT_02_cannon_F", { "life_coplevel", "SCALAR", 5 } }
        };
    };

    class cop_air {
        side = "cop";
        vehicles[] = {
            { "B_Heli_Light_01_F", { "", "", -1 } },
            { "B_Heli_Transport_03_unarmed_F", { "", "", -1 } },
            { "B_Heli_Transport_01_F", { "life_coplevel", "SCALAR", 2 } },
            { "O_Heli_Light_02_unarmed_F", { "life_coplevel", "SCALAR", 2 } },
            { "I_Heli_Transport_02_F", { "life_coplevel", "SCALAR", 2 } },
	    { "O_Heli_Transport_04_F", { "life_coplevel", "SCALAR", 2 } },
            { "I_Heli_light_03_F", { "life_coplevel", "SCALAR", 3 } },
            { "O_Heli_Light_02_v2_F", { "life_coplevel", "SCALAR", 4 } },
            { "B_Heli_Light_01_armed_F", { "life_coplevel", "SCALAR", 5 } },
            { "B_Heli_Attack_01_F", { "life_coplevel", "SCALAR", 5 } },
            { "O_Heli_Attack_02_black_F", { "life_coplevel", "SCALAR", 5 } }
        };
    };

    class cop_ship {
        side = "cop";
        vehicles[] = {
            { "B_Boat_Transport_01_F", { "", "", -1 } },
            { "C_Boat_Civil_01_police_F", { "", "", -1 } },
            { "B_Boat_Armed_01_minigun_F", { "life_coplevel", "SCALAR", 4 } },
            { "B_SDV_01_F", { "", "", -1 } }
        };
    };
};

class LifeCfgVehicles {
    /*
    *    Vehicle Configs (Contains textures and other stuff)
    *       1: ARRAY (Rental Price)
    *         Ex: { 200, 200 , 200 , 200 } //civilian, west, independent, east
    *       2: ARRAY (license required)
    *         Ex: { "driver", "" , "" , "" } //civilian, west, independent, east
    *         licenses[] = { {"CIV"}, {"COP"}, {"MEDIC"}, {"EAST"} };
    *    Textures config follows { Texture Name, side, {texture(s)path}}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *    INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    *
    */

    class Default {
        vItemSpace = -1;
        licenses[] = { {""}, {""}, {""}, {""} };
        rentalprice[] = { -1, -1, -1, -1 };
        textures[] = {};
    };

    class I_Truck_02_medical_F {
        vItemSpace = 150;
        licenses[] = { {""}, {""}, {""}, {""} };
        rentalprice[] = { -1, -1, 80000, -1 };
        textures[] = {
            { "Heto EMS", "med", {"textures\ems\HETO_Zamac_Front.paa","textures\ems\HETO_Zamac_Back.paa"} }
        };
    };

//    class O_Truck_03_medical_F {
//        vItemSpace = 200;
//        licenses[] = { {""}, {""}, {""}, {""} };
//        rentalprice[] = { -1, -1, 95000, -1 };
//        textures[] = {};
//    };

    class B_Truck_01_medical_F {
        vItemSpace = 250;
        licenses[] = { {""}, {""}, {""}, {""} };
        rentalprice[] = { -1, -1, 110000, -1 };
        textures[] = {};
    };

    class C_Rubberboat {
        vItemSpace = 125;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        rentalprice[] = { 25000, -1, -1, -1 };
        textures[] = { };
    };

    class B_Heli_Transport_01_F {
        vItemSpace = 200;
        licenses[] = { {""}, {"cAir"}, {""}, {""} };
        rentalprice[] = { -1, 400000, -1, -1 };
        textures[] = {};
    };

    class I_Heli_light_03_F {
        vItemSpace = 200;
        licenses[] = { {""}, {"cAir"}, {""}, {""} };
        rentalprice[] = { -1, 500000, -1, -1 };
        textures[] = {};
    };

    class O_Heli_Light_02_v2_F {
        vItemSpace = 200;
        licenses[] = { {""}, {"cAir"}, {""}, {""} };
        rentalprice[] = { -1, 600000, -1, -1 };
        textures[] = {};
    };

     class O_Heli_Attack_02_black_F {
         vItemSpace = 200;
         licenses[] = { {""}, {"cAir"}, {""}, {""} };
         rentalprice[] = { -1, 1200000, -1, -1 };
         textures[] = {};
    };
    
    class B_MRAP_01_hmg_F {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        rentalprice[] = { -1, 650000, -1, -1 };
        textures[] = {
            { "Black", "cop", {"#(argb,8,8,3)color(0.05,0.05,0.05,1)","#(argb,8,8,3)color(0.05,0.05,0.05,1)"} },
            { "Police", "cop", {"textures\cop\cop_hunter.jpg","textures\cop\swat_hunter_2.jpg"} },
            { "Swat", "cop", {"textures\cop\swat_hunter.jpg","textures\cop\swat_hunter_2.jpg"} },
            { "Scott police", "cop", {"textures\cop\scotpol_Hunter_Cab.paa","textures\cop\scotpol_Hunter_Back.paa"} }
        };
    };

    class I_MRAP_03_F { //STRIDER
	vItemSpace = 200;
	licenses[] = { {""}, {""}, {""}, {""} };
	rentalprice[] = { 350000, 350000, 350000, 350000 };
	textures[] = {
	    { "EMS white", "med", {"#(argb,8,8,3)color(1,1,1,0.8)"} },
	    { "CopBlue", "cop", {"#(argb,8,8,3)color(0.01,0.01,1.53,1)"} },
	    { "CamoCop", "cop", {"textures\rebel\reblbirdcamo1.jpg", "textures\rebel\reblbirdcamo1.jpg"} }
	};
    };

    class I_MRAP_03_hmg_F { //strider hmg
    vItemSpace = 200;
	licenses[] = { {"driver"}, {""}, {""}, {""} };
	rentalprice[] = { 550000, 550000, -1, -1 };
	textures[] = {
	    { "Black", "cop", {"#(argb,8,8,3)color(0.05,0.05,0.05,1)"} },
	    { "CamoCop", "cop", {"textures\rebel\reblbirdcamo1.jpg", "textures\rebel\reblbirdcamo1.jpg"} }
	};
    };

    class B_MRAP_01_F { //hunter
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        rentalprice[] = { -1, 350000, -1, -1 };
        textures[] = {
            { "Black", "cop", {"#(argb,8,8,3)color(0.05,0.05,0.05,1)","#(argb,8,8,3)color(0.05,0.05,0.05,1)"} },
            { "Police", "cop", {"textures\cop\cop_hunter.jpg","textures\cop\swat_hunter_2.jpg"} },
            { "Swat", "cop", {"textures\cop\swat_hunter.jpg","textures\cop\swat_hunter_2.jpg"} },
            { "Scott police", "cop", {"textures\cop\scotpol_Hunter_Cab.paa","textures\cop\scotpol_Hunter_Back.paa"} }
        };
    };

    class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        rentalprice[] = { -1, 75000, -1, -1 };
        textures[] = { };
    };

    class B_Boat_Transport_01_F {
        vItemSpace = 45;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        rentalprice[] = { -1, 3000, -1, -1 };
        textures[] = { };
    };

    class I_Truck_02_covered_F { //zamark truck covered
        vItemSpace = 330;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        rentalprice[] = { 452000, -1, -1, -1 };
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "RedBull", "civ", {"textures\cars\truckcabredbull.paa","textures\cars\truckbackredbull.paa"} }
        };
    };

    class I_Truck_02_transport_F { //zamark transport
        vItemSpace = 300;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        rentalprice[] = { 405000, 200000, -1, -1 };
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };
//
//    class O_Truck_03_covered_F {
//        vItemSpace = 300;
//        licenses[] = { {"trucking"}, {""}, {""}, {""} };
//        rentalprice[] = { 510000, -1, -1, -1 };
//        textures[] = {};
//    };

//    class O_Truck_03_transport_F {
//        vItemSpace = 285;
//        licenses[] = { {"trucking"}, {""}, {""}, {""} };
//        rentalprice[] = { 400000, -1, -1, -1 };
//        textures[] = { };
//    };

    class O_Truck_03_device_F { //tempest device
        vItemSpace = 350;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        rentalprice[] = { 7300000, -1, -1, -1 };
        textures[] = { };
    };

    class B_Truck_01_transport_F { //hemett
        vItemSpace = 385;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        rentalprice[] = { 675000, -1, -1, -1 };
        textures[] = {
            { "yellow", "civ", {"#(argb,8,8,3)color(0.6,0.3,0.01,1)"}},
            { "Orange", "civ", {"\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa","\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"} },
            { "Black", "cop", {"#(argb,8,8,3)color(0.05,0.05,0.05,1)"}}
        };
    };

    class B_Truck_01_box_F { //hemtt box
        vItemSpace = 450;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        rentalprice[] = { 750000, -1, -1, -1 };
        textures[] = { };
    };

    class O_MRAP_02_F { //ifrit
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 550000, 150000, -1, -1 };
        textures[] = {
            { "Rebel", "reb", {"#(argb,8,8,3)color(1.53,1.53,0.51,1)"} },
            { "Camo", "reb", {"textures\rebel\reblbirdcamo1.jpg", "textures\rebel\reblbirdcamo1.jpg"} },
            { "Black", "cop", {"#(argb,8,8,3)color(0.05,0.05,0.05,1)"} },
            { "BLUE", "cop", {"#(argb,8,8,3)color(0.01,0.01,1.53,1)"} }
        };
    };

    class O_MRAP_02_hmg_F {//ifrit
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 550000, 550000, -1, -1 };
        textures[] = {
            { "Black", "cop", {"#(argb,8,8,3)color(0.05,0.05,0.05,1)"} },
            { "CamoCop", "cop", {"textures\rebel\reblbirdcamo1.jpg", "textures\rebel\reblbirdcamo1.jpg"} }
        };
    };

    class Land_CargoBox_V1_F {
        vItemSpace = 5000;
        licenses[] = { {""}, {""}, {""}, {""} };
        rentalprice[] = { -1, -1, -1, -1 };
        textures[] = {};
    };

    class Box_IND_Grenades_F {
        vItemSpace = 350;
        licenses[] = { {""}, {""}, {""}, {""} };
        rentalprice[] = { -1, -1, -1, -1 };
        textures[] = {};
    };

    class B_supplyCrate_F {
        vItemSpace = 700;
        licenses[] = { {""}, {""}, {""}, {""} };
        rentalprice[] = { -1, -1, -1, -1 };
        textures[] = {};
    };

    class B_G_Offroad_01_F {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        rentalprice[] = { 12500, -1, -1, -1 };
        textures[] = { };
    };

    class B_G_Offroad_01_armed_F {
        vItemSpace = 65;
        licenses[] = { {"rebel"}, {""}, {""}, {""} };
        rentalprice[] = { 750000, -1, -1, -1 };
        textures[] = { };
    };

    class C_Boat_Civil_01_F {
        vItemSpace = 150;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        rentalprice[] = { 80000, -1, -1, -1 };
        textures[] = { };
    };

    class C_Boat_Civil_01_police_F {
        vItemSpace = 185;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        rentalprice[] = { -1, 80000, -1, -1 };
        textures[] = { };
    };

    class C_Offroad_01_F {
        vItemSpace = 65;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 80000, 80000, 40000, -1 };
        textures[] = {
            { "US Police", "cop", {"textures\cop\police_offroad.jpg"} },
            { "London Police", "cop", {"textures\cop\police_uk_offroad.jpg"} },
            { "SWAT", "cop", {"textures\cop\swat_offroad.jpg"} },
            { "Red", "med", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            } },
            { "Yellow", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            } },
            { "White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            } },
            { "Blue", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            } },
            { "Dark Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            } },
            { "Blue / White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            } },
            { "Taxi", "civ", {
                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } },
            { "Met cop", "cop", {"textures\cop\met_police_offroader.paa"} },
            { "London 911", "cop", {"textures\cop\lincpol_offroader.paa"} },
            { "heto", "med", {"textures\ems\heto_offroader.paa"} },
            { "Hello kitty", "civ", {"textures\cars\kitty_offroad.jpg"} }
        };
    };

    class C_Kart_01_Blu_F {
        vItemSpace = 20;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 15000, -1, -1, -1 };
        textures[] = {};
    };
/*
To edit another information in this classes you can use this exemple.
    class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{
        vItemSpace = 40;
        rentalprice[] = { 25000, -1, -1, -1 };
    };

will modify the virtual space and the price of the vehicle, but other information such as license and textures will pick up the vehicle declare at : Vehicle {};
*/
    class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{}; // Get all information of C_Kart_01_Blu_F
    class C_Kart_01_Red_F  : C_Kart_01_Blu_F{};
    class C_Kart_01_Vrana_F : C_Kart_01_Blu_F{};

    class C_Hatchback_01_F {
        vItemSpace = 40;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 70000, 70000, 70000, 70000 };
        textures[] = {
            { "Asilmov", "civ", {"textures\cars\asiimov_hatchback_textures.jpg"} },
            { "Nature", "civ", {"textures\cars\nature_hatchback.jpg"} },
            { "Police", "cop", {"textures\cop\cop_hatchback.jpg"} },
            { "UK Police", "cop", {"textures\cop\UK_police_hatchback_co.jpg"} },

            { "EMS Red", "med", {"textures\ems\EMS_hatchback.jpg"} },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            } },
            { "Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            } },
            { "Yellow", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            } },
            { "White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            } },
            { "Grey", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            } },
            { "Black", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            } },
            { "EMS London", "med", {"textures\ems\paramedic_hb.paa"} },
            { "LAPD", "cop", {"textures\cop\lapd_hatchback.paa"} }
        };
    };

    class C_Hatchback_01_sport_F {
        vItemSpace = 45;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 120000, 50000, 50000, 50000 };
        textures[] = {
            { "Police", "cop", {"textures\cop\cop_hatchback.jpg"} },
            { "UK Police", "cop", {"textures\cop\UK_police_hatchback_co.jpg"} },
            { "Asilmov", "civ", {"textures\cars\asiimov_hatchback_textures.jpg"} },
            { "Nature", "civ", {"textures\cars\nature_hatchback.jpg"} },
            { "EMS Red", "med", {"textures\ems\EMS_hatchback.jpg"} },

            { "Red", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            } },
            { "Black / White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            } },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            } },
            { "monster_WRC", "civ", {"textures\cars\civ_monsterwrc_hb.paa"} },
            { "LAPD", "cop", {"textures\cop\lapd_hatchback.paa"} },
            { "EMS London", "med", {"textures\ems\paramedic_hb.paa"} }
        };
    };

    class B_Quadbike_01_F {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 28000, 28000, 28000, 28000 };
        textures[] = {
            { "Brown", "cop", {
                "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
            } },
            { "Digi Desert", "reb", {
                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
            } },
            { "Black", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
            } },
            { "Blue", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
            } },
            { "Red", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
            } },
            { "White", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
            } },
            { "Digi Green", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
            } },
            { "Hunter Camo", "civ", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } },
            { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } },
            { "EMS RED", "med", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
            } }
        };
    };

    class C_SUV_01_F {
        vItemSpace = 70;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 90000, 55000, 55000, 55000 };
        textures[] = {
            { "Sticker", "civ", {"textures\cars\sticker.jpg"} },
            { "Hello kitty", "civ", {"textures\cars\kitty.jpg"} },
            { "Cube", "civ", {"textures\cars\cube_suv.jpg"} },
            { "Poly", "civ", {"textures\cars\poly_suv.jpg"} },
            { "Dark Red", "civ", {"\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"} },
            { "Police", "cop", {"textures\cop\police_suv.jpg"} },
            { "UK Police", "cop", {"textures\cop\police_uk_suv.jpg"} },
            { "EMS red", "med", {"textures\ems\EMS_SUV.jpg"} },
            { "EMS white", "med", {"textures\ems\EMS_SUV_1.jpg"} },
            { "EMS 119", "med", {"textures\ems\EMS_SUV_2.jpg"} },
            { "Channel8 News", "civ", {"textures\cars\channel8newscar.paa"} },
            { "Camogreen", "civ", {"textures\cars\suvcamogreen.paa"} },
            { "LAPD", "cop", {"textures\cop\lapd_suv.paa"} },
            { "Ferrari", "civ", {"textures\cars\ferrari_SUV.jpg"} },
            { "blueflames", "civ", {"textures\cars\flames.jpg"} },
            { "tiger", "civ", {"textures\cars\pimp.jpg"} }
        };
    };

    class C_Van_01_transport_F {
        vItemSpace = 130;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 150000, -1, -1, -1 };
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

    class C_Van_01_box_F {
        vItemSpace = 150;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        rentalprice[] = { 200000, 45000, 45000, -1 };
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
        	"\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } },
            { "EMS London", "med", {
		"textures\ems\Ambulance_Boxer_Front.paa",
		"textures\ems\Ambulance_Boxer_Back.paa"
            } }
        };
    };

    class B_Heli_Light_01_F {
        vItemSpace = 100;
        licenses[] = { {"pilot"}, {"cAir"}, {"mAir"}, {""} };
        rentalprice[] = { 500000, 215000, 215000, -1 };
        textures[] = {
            { "Police Black/White", "cop", {"textures\cop\police_heli.jpg", "textures\cop\police_heli2.jpg"} },
            { "Police Yellow/Blue", "cop", {"textures\cop\police_heli3.jpg", "textures\cop\police_heli3.jpg"} },
            { "EMS Yellow/Blue", "med", {"textures\ems\humming_ems.jpg", "textures\ems\humming_ems.jpg"} },
            { "EMS Red", "med", {"textures\ems\EMS_LTB.jpg", "textures\ems\EMS_LTB.jpg"} },
            { "Sheriff", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
            } },
            { "Civ Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            } },
            { "Civ Red", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            } },
            { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            } },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            } },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            } },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            } },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            } },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            } },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            } },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            } },
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } },
            { "Digi Green", "reb", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            } },
            { "EMS hems", "med", {
        	"textures\ems\paramedic_hems.paa"}
            }
	};
    };

    class B_Heli_Light_01_armed_F : B_Heli_Light_01_F{};

    class B_Heli_Attack_01_F { // BLACKFOOT
        vItemSpace = 150;
        licenses[] = { {""}, {""}, {""}, {""} };
        rentalprice[] = { 925000, 925000, 925000, -1 };
        textures[] = {};
    };

    class B_Heli_Light_01_stripped_F { // humming stripped
        vItemSpace = 90;
        licenses[] = { {""}, {""}, {""}, {""} };
        rentalprice[] = { 325000, -1, -1, -1 };
        textures[] = {
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } }
        };
    };

    class O_Heli_Light_02_unarmed_F { // orca
        vItemSpace = 230;
        licenses[] = { {"pilot" }, {"cAir"}, {"mAir"}, {""} };
        rentalprice[] = { 750000, 500000, 400000, -1 };
        textures[] = {
            { "Black", "cop", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            } },
            { "White / Blue", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            } },
            { "Digi Green", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            } },
            { "Desert Digi", "reb", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
            } },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            } }
        };
    };

    class I_Heli_Transport_02_F { //mohawk
        vItemSpace = 275;
        licenses[] = { {"pilot" }, {"cAir"}, {"mAir"}, {""} };
        rentalprice[] = { 1250000, 600000, 600000, -1 };
        textures[] = {
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            } },
            { "Ion", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_ion_co.paa"
            } },
            { "Dahoman", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_dahoman_co.paa"
            } },
            { "Black", "cop", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            } },
	    { "Rebel CAMO", "reb", {
		"textures\rebel\reblbirdcamo1.jpg"
	    } }
        };
    };

    class I_Heli_light_03_unarmed_F : O_Heli_Light_02_unarmed_F{};

    class B_Heli_Transport_03_unarmed_F { //HURON
        vItemSpace = 350;
        licenses[] = { {"pilot" }, {"cAir"}, {"mAir"}, {""} };
        rentalprice[] = { 1750000, 600000, 600000, -1 };
        textures[] = {
            { "Black", "cop", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            } },
            { "White / Blue", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            } },
            { "Digi Green", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            } },
            { "Desert Digi", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
            } },
            { "EMS White", "med", {
        	"#(argb,8,8,3)color(1,1,1,0.8)"
            } }
        };
    };

    class O_Heli_Transport_04_F { //TARU
	vItemSpace = 250;
	licenses[] = { {"pilot" }, {"cAir"}, {"mAir"}, {""} };
	rentalprice[] = { 2750000, 2750000, 2750000, 2750000 };
	textures[] = {
	    { "EMS White", "med", {
		"#(argb,8,8,3)color(1,1,1,0.8)"
	    } },
	    { "Black", "cop", {
		"#(argb,8,8,3)color(0.05,0.05,0.05,1)"
	    } }
	};
    };

    class B_SDV_01_F {
        vItemSpace = 50;
        licenses[] = { {"boat"}, {"cg"}, {""}, {""} };
        rentalprice[] = { 150000, 150000, -1, -1 };
        textures[] = {};
    };
    
    class C_Van_01_fuel_F {
        vItemSpace = 20;
        vFuelSpace = 19500;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        rentalprice[] = { 300000, -1, -1, -1 };
        textures[] = {
            { "White", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_co.paa"
            } },
            { "Red", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_red_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_red_co.paa"
            } }
        };
    };

    class I_Truck_02_fuel_F {
        vItemSpace = 40;
        vFuelSpace = 42000;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        rentalprice[] = { 500000, -1, -1, -1 };
        textures[] = {
            { "White", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_fuel_co.paa"
            } }
        };
    };

//    class B_Truck_01_fuel_F {
//        vItemSpace = 50;
//        vFuelSpace = 250000;
//        licenses[] = { {"trucking"}, {""}, {""}, {""} };
//        rentalprice[] = { 550000, -1, -1, -1 };
//        textures[] = {};
//    };

    class B_Truck_01_Repair_F {
        vItemSpace = 60;
        vFuelSpace = 250000;
        licenses[] = { {""}, {""}, {""}, {""} };
        rentalprice[] = { -1, 250000, -1, -1 };
        textures[] = {};
    };

    class O_Truck_02_medical_F {
        vItemSpace = 60;
        vFuelSpace = 250000;
        licenses[] = { {""}, {""}, {""}, {""} };
        rentalprice[] = { -1, 250000, -1, -1 };
        textures[] = {};
    };

    class B_Truck_01_ammo_F {
        vItemSpace = 60;
        vFuelSpace = 250000;
        licenses[] = { {""}, {""}, {""}, {""} };
        rentalprice[] = { -1, 250000, -1, -1 };
        textures[] = {};
    };

    class O_MBT_02_cannon_F {
        vItemSpace = 60;
        vFuelSpace = 250000;
        licenses[] = { {""}, {""}, {""}, {""} };
        rentalprice[] = { -1, 250000, -1, -1 };
        textures[] = {};
    };
};
