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
            { "B_Heli_Transport_03_unarmed_F", { "", "", -1 } },
	    { "I_Heli_Transport_02_F", { "", "", -1 } }
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
            { "I_MRAP_03_F", { "", "", -1 } },
	    { "B_MRAP_01_F", { "", "", -1 } }
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
            { "B_Quadbike_01_F", { "", "", -1 } },
            { "C_Offroad_01_F", { "", "", -1 } },
            { "C_SUV_01_F", { "", "", -1 } },
            { "C_Hatchback_01_sport_F", { "", "", -1 } },
            { "O_MRAP_02_F", { "", "", -1 } },
            { "B_MRAP_01_F", { "life_coplevel", "SCALAR", 2 } },
            { "B_Truck_01_Repair_F", { "life_coplevel", "SCALAR", 2 } },
	    { "I_Truck_02_covered_F", { "life_coplevel", "SCALAR", 2 } },
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
    *
    *    "price" is the price before any multipliers set in Master_Config are applied.
    *
    *    Default Multiplier Values & Calculations:
    *       Civilian [Purchase, Sell]: [1.0, 0.5]
    *       Cop [Purchase, Sell]: [0.5, 0.5]
    *       Medic [Purchase, Sell]: [0.75, 0.5]
    *       ChopShop: Payout = price * 0.25
    *       GarageSell: Payout = price * [0.5, 0.5, 0.5, -1]
    *       Cop Impound: Payout = price * 0.1
    *       Pull Vehicle from Garage: Cost = price * [1, 0.5, 0.75, -1] * [0.5, 0.5, 0.5, -1]
    *           -- Pull Vehicle & GarageSell Array Explanation = [civ,cop,medic,east]
    *
    *       1: ARRAY (license required)
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
        price = -1;
        textures[] = {};
    };

    class I_Truck_02_medical_F {
        vItemSpace = 150;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 75000;
        textures[] = {
            { "Heto EMS", "med", {"textures\ems\HETO_Zamac_Front.paa","textures\ems\HETO_Zamac_Back.paa"} }
        };
    };

    class O_Truck_03_medical_F {
        vItemSpace = 200;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 85000;
        textures[] = {};
    };

    class B_Truck_01_medical_F {
        vItemSpace = 250;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 90000;
        textures[] = {};
    };

    class C_Rubberboat {
        vItemSpace = 125;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 25000;
        textures[] = { };
    };

    class B_Heli_Transport_01_F { //ghost hawk
        vItemSpace = 200;
        licenses[] = { {""}, {"cAir"}, {""}, {""} };
        price = 550000;
        textures[] = {
            { "Cop", "cop", {"textures\cop\ghosthawk_0.jpg","textures\cop\ghosthawk_1.jpg"} }
        };
    };

    class I_Heli_light_03_F {
        vItemSpace = 200;
        licenses[] = { {""}, {"cAir"}, {""}, {""} };
        price = 650000;
        textures[] = {};
    };

    class O_Heli_Light_02_v2_F {
        vItemSpace = 200;
        licenses[] = { {""}, {"cAir"}, {""}, {""} };
        price = 750000;
        textures[] = {};
    };

    class O_Heli_Attack_02_black_F {
         vItemSpace = 200;
         licenses[] = { {""}, {"cAir"}, {""}, {""} };
         price = 1000000;
         textures[] = {};
    };

    class B_MRAP_01_F { //hunter
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {
            { "Black", "cop", {"#(argb,8,8,3)color(0.05,0.05,0.05,1)","#(argb,8,8,3)color(0.05,0.05,0.05,1)"} },
            { "Police", "cop", {"textures\cop\hunter_front.paa","textures\cop\hunter_back.paa"} },
            { "SWAT Police", "cop", {"textures\cop\swat_hunter_1.jpg","textures\cop\swat_hunter_2.jpg"} },
            { "Scott police", "cop", {"textures\cop\scotpol_Hunter_Cab.paa","textures\cop\scotpol_Hunter_Back.paa"} },
	    { "EMS RED", "med", {"textures\ems\med_hunter_front.paa","textures\ems\med_hunter_back.paa"} }
        };
    };

    class B_MRAP_01_hmg_F : B_MRAP_01_F{};

    class I_MRAP_03_F { //STRIDER
	vItemSpace = 200;
	licenses[] = { {""}, {""}, {""}, {""} };
	price = 650000;
	textures[] = {
	    { "EMS white", "med", {"#(argb,8,8,3)color(1,1,1,0.8)"} },
	    { "Blue", "cop", {"#(argb,8,8,3)color(0.01,0.01,1.53,1)"} },
	    { "Police", "cop", {"textures\cop\policeStrider.paa"} }
	};
    };

    class I_MRAP_03_hmg_F { //strider hmg
        vItemSpace = 200;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 650000;
        textures[] = {
            { "Black", "cop", {"#(argb,8,8,3)color(0.05,0.05,0.05,1)"} },
	    { "Police", "cop", {"textures\cop\policeStrider.paa"} }
        };
    };

    class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        price = 75000;
        textures[] = { };
    };

    class B_Boat_Transport_01_F {
        vItemSpace = 45;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        price = 3000;
        textures[] = { };
    };

    class I_Truck_02_covered_F { //zamak truck covered
        vItemSpace = 330;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 350000;
        textures[] = {
            { "Cola", "civ", {"textures\civ\cola_zamak_front.jpg","textures\civ\cola_zamak_back.jpg"} },
            { "RedBull", "civ", {"textures\civ\truckcabredbull.paa","textures\civ\truckbackredbull.paa"} },
	    { "COP", "cop", {"textures\cop\cop_zamak_front.jpg","textures\cop\cop_zamak_back.jpg"} }
        };
    };

    class I_Truck_02_transport_F { //zamark transport
        vItemSpace = 300;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 550000;
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

    class O_Truck_03_device_F { //tempest device
        vItemSpace = 350;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 8000000;
        textures[] = { };
    };

    class B_Truck_01_transport_F { //hemett
        vItemSpace = 385;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 660000;
        textures[] = {
            { "yellow", "civ", {"#(argb,8,8,3)color(0.6,0.3,0.01,1)"}},
            { "Orange", "civ", {"\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa","\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"} },
            { "CopBlue", "cop", {"#(argb,8,8,3)color(0.01,0.01,1.53,1)"}}
        };
    };

    class B_Truck_01_box_F { //hemtt box
        vItemSpace = 450;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 850000;
        textures[] = { };
    };

    class O_MRAP_02_F { //ifrit
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 700000;
        textures[] = {
            { "Black Skull", "reb", {"textures\rebel\reb_black_ifrit_front.jpg", "textures\rebel\reb_black_ifrit_back.jpg"} },
            { "Camo", "reb", {"textures\rebel\reblbirdcamo1.jpg"} },
            { "Black", "cop", {"#(argb,8,8,3)color(0.05,0.05,0.05,1)"} },
            { "BLUE", "cop", {"#(argb,8,8,3)color(0.01,0.01,1.53,1)"} },
	    { "Snake", "civ", {"textures\rebel\reb_black_ifrit_front.jpg", "textures\rebel\reb_black_ifrit_back.jpg"} }
        };
    };

    class O_MRAP_02_hmg_F : O_MRAP_02_F {}//ifrit hmg

    class Land_CargoBox_V1_F {
        vItemSpace = 5000;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class Box_IND_Grenades_F {
        vItemSpace = 350;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class B_supplyCrate_F {
        vItemSpace = 700;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class B_G_Offroad_01_F {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 12500;
        textures[] = { };
    };

    class B_G_Offroad_01_armed_F {
        vItemSpace = 65;
        licenses[] = { {"rebel"}, {""}, {""}, {""} };
        price = 750000;
        textures[] = { };
    };

    class C_Boat_Civil_01_F {
        vItemSpace = 150;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 122000;
        textures[] = { };
    };

    class C_Boat_Civil_01_police_F {
        vItemSpace = 185;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        price = 200000;
        textures[] = { };
    };

    class C_Offroad_01_F {
        vItemSpace = 65;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 102500;
        textures[] = {
            { "US Police", "cop", {"textures\cop\police_offroad.jpg"} },
            { "London Police", "cop", {"textures\cop\police_uk_offroad.jpg"} },
            { "SWAT", "cop", {"textures\cop\swat_offroad.jpg"} },
            { "EMS", "med", {
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
            { "EMS Red", "med", {"textures\ems\med_offroad.paa"} },
            { "Hello kitty", "civ", {"textures\civ\kitty_offroad.jpg"} },
	    { "Traffic police", "cop", {"textures\cop\heto_offroader.paa"} }
        };
    };

    class C_Kart_01_Blu_F {
        vItemSpace = 20;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 15000;
        textures[] = {};
    };
/*
To edit another information in this classes you can use this exemple.
class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{
    vItemSpace = 40;
    price = ;
};

will modify the virtual space and the price of the vehicle, but other information such as license and textures will pick up the vehicle declare at : Vehicle {};
*/
    class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{}; // Get all information of C_Kart_01_Blu_F
    class C_Kart_01_Red_F  : C_Kart_01_Blu_F{};
    class C_Kart_01_Vrana_F : C_Kart_01_Blu_F{};

    class C_Hatchback_01_F {
        vItemSpace = 40;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {
            { "Ferrari", "civ", {"textures\civ\ferrari_hatchback.jpg"} },
            { "Security", "civ", {"textures\civ\secure_hatchback.jpg"} },
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
            { "Subaru", "civ", {"textures\civ\civ_subaru.jpg"} },
            { "EMS London", "med", {"textures\ems\paramedic_hb.paa"} },
            { "LAPD", "cop", {"textures\cop\lapd_hatchback.paa"} }
        };
    };

    class C_Hatchback_01_sport_F {
        vItemSpace = 45;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 140000;
        textures[] = {
            { "Police", "cop", {"textures\cop\cop_hatchback.jpg"} },
            { "UK Police", "cop", {"textures\cop\UK_police_hatchback_co.jpg"} },
	    { "Security", "civ", {"textures\civ\secure_hatchback.jpg"} },
            { "Subaru", "civ", {"textures\civ\civ_subaru.jpg"} },
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
            { "monster_WRC", "civ", {"textures\civ\civ_hatchback_monster.jpg"} },
            { "LAPD", "cop", {"textures\cop\lapd_hatchback.paa"} },
            { "EMS London", "med", {"textures\ems\paramedic_hb.paa"} },
	    { "Ferrari", "civ", {"textures\civ\ferrari_hatchback.jpg"} },
	    { "porsche", "civ", {"textures\civ\porsche_hatchback.jpg"} }
        };
    };

    class B_Quadbike_01_F {
        vItemSpace = 25;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 25000;
        textures[] = {
            { "Police", "cop", {"textures\cop\quad_police.jpg"} },
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
	    { "EMS", "med", {"textures\ems\quad_med.jpg"} },
	    { "LADY", "civ", {"textures\civ\quad_lady.jpg"} }
        };
    };

    class C_SUV_01_F {
        vItemSpace = 70;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {
            { "Sticker", "civ", {"textures\civ\sticker.jpg"} },
            { "Hello kitty", "civ", {"textures\civ\kitty.jpg"} },
            { "Cube", "civ", {"textures\civ\cube_suv.jpg"} },
            { "Hunters", "civ", {"textures\civ\hunter_suv.jpg"} },
            { "Dark Red", "civ", {"\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"} },
            { "한국경찰", "cop", {"textures\cop\ASOULPOLICE.jpg"} },
            { "영국경찰", "cop", {"textures\cop\police_uk_suv.jpg"} },
            { "EMS red", "med", {"textures\ems\EMS_SUV.jpg"} },
            { "EMS white", "med", {"textures\ems\EMS_SUV_1.jpg"} },
            { "EMS 119", "med", {"textures\ems\EMS_SUV_2.jpg"} },
            { "Channel8 News", "civ", {"textures\civ\channel8newscar.paa"} },
            { "VIP Security", "civ", {"textures\civ\suv_vip.jpg"} },
            { "미국 경찰", "cop", {"textures\cop\lapd_suv.paa"} },
            { "Ferrari", "civ", {"textures\civ\ferrari_SUV.jpg"} },
            { "blueflames", "civ", {"textures\civ\flames.jpg"} },
            { "tiger", "civ", {"textures\civ\pimp.jpg"} },
	    { "ghostRider", "civ", {"textures\civ\suv_ghostrider.jpg"} },
	    { "택시", "civ", {"textures\civ\suvtaxi.jpg"} }
        };
    };

    class C_Van_01_transport_F {
        vItemSpace = 130;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 135000;
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
        vItemSpace = 120;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 200000;
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
            } },
	    { "EMS Red", "med", {"textures\ems\med_ambulance_front.paa","textures\ems\med_ambulance_back.paa"} }
        };
    };

    class B_Heli_Light_01_F {
        vItemSpace = 100;
        licenses[] = { {"pilot"}, {"cAir"}, {"mAir"}, {""} };
        price = 555000;
        textures[] = {
            { "Police Black/White", "cop", {"textures\cop\police_heli.jpg", "textures\cop\police_heli2.jpg"} },
            { "Police 포돌이", "cop", {"textures\cop\podole.jpg", "textures\cop\podole.jpg"} },
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
                "textures\ems\paramedic_hems.paa"
            } },
	    { "시바견", "civ", {"textures\civ\shibainu_ems.jpg", "textures\civ\shibainu_ems.jpg"} }
        };
    };

    class B_Heli_Light_01_armed_F : B_Heli_Light_01_F{};

    class B_Heli_Attack_01_F { // BLACKFOOT
        vItemSpace = 150;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 1355000;
        textures[] = {};
    };

    class B_Heli_Light_01_stripped_F { // humming stripped
        vItemSpace = 90;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 455000;
        textures[] = {
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } }
        };
    };

    class O_Heli_Light_02_unarmed_F { //orca
        vItemSpace = 210;
        licenses[] = { {"pilot" }, {""}, {"mAir"}, {""} };
        price = 750000;
        textures[] = {
            { "Black", "cop", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            } },
            { "White / Blue", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            } },
            { "Orca Green", "civ", {
                "textures\civ\civ_orca_green.paa"
            } },
            { "Desert Digi", "reb", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
            } },
            { "EMS orange", "med", {
        	"textures\ems\EMSorca.paa"
            } }
        };
    };

    class I_Heli_Transport_02_F { //mohawk
        vItemSpace = 275;
        licenses[] = { {"pilot" }, {"cAir"}, {"mAir"}, {""} };
        price = 1455000;
        textures[] = {
            { "EMS Red", "med", {
                "textures\ems\med_mohawk.jpg",
		"textures\ems\med_mohawk2.jpg",
		"textures\ems\med_mohawk3.jpg"
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
                "textures\rebel\reblbirdcamo1.jpg","textures\rebel\reblbirdcamo1.jpg","textures\rebel\reblbirdcamo1.jpg"
            } }
        };
    };

    class I_Heli_light_03_unarmed_F : O_Heli_Light_02_unarmed_F{};

    class B_Heli_Transport_03_unarmed_F { //HURON
        vItemSpace = 350;
        licenses[] = { {"pilot" }, {"cAir"}, {"mAir"}, {""} };
        price = 1800000;
        textures[] = {
            { "Black", "cop", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            } },
            { "trooper", "civ", {
        	"textures\civ\don_stormtrooper_huron_front.jpg", "textures\civ\don_stormtrooper_huron_back.jpg"
            } },
	    { "Dragon", "civ", {
		"textures\civ\civ_huron_dragon1.jpg", "textures\civ\civ_huron_dragon2.jpg"
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
        price = 2355000;
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
        price = 250000;
        textures[] = {};
    };

    class C_Van_01_fuel_F {
        vItemSpace = 20;
        vFuelSpace = 19500;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 420000;
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
        price = 600000;
        textures[] = {
            { "White", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_fuel_co.paa"
            } }
        };
    };

    class B_Truck_01_Repair_F {
        vItemSpace = 60;
        vFuelSpace = 250000;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 295000;
        textures[] = {};
    };

    class B_Truck_01_ammo_F {
        vItemSpace = 60;
        vFuelSpace = 250000;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 55000;
        textures[] = {};
    };

    class O_MBT_02_cannon_F {
        vItemSpace = 60;
        vFuelSpace = 250000;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 255000;
    };
};
