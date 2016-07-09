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
	    { "C_Offroad_01_repair_F", { "", "", -1 } },
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
            { "I_Heli_Transport_02_F", { "", "", -1 } },
	    { "B_Heli_Transport_01_F", { "", "", -1 } }
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
            { "I_Heli_Transport_02_F",  { "", "", -1 } },
	    { "O_MRAP_02_hmg_F", { "", "", -1 } },
	    { "O_Heli_Light_02_F",  { "", "", -1 } },
	    { "O_Heli_Transport_04_covered_F",  { "", "", -1 } },
	    { "O_Heli_Transport_04_bench_F",  { "", "", -1 } }
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
            { "O_Heli_Transport_04_F",  { "", "", -1 } },
            { "O_Heli_Transport_04_medevac_F",  { "", "", -1 } },
	    { "I_Heli_light_03_F",  { "", "", -1 } }

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
            { "B_MRAP_01_F", { "", "", -1 } },
            { "B_Truck_01_Repair_F", { "", "", -1 } },
            { "I_Truck_02_covered_F", { "", "", -1 } },
            { "B_Truck_01_ammo_F", { "", "", -1 } },
            { "I_MRAP_03_F", { "life_coplevel", "SCALAR", 3 } },
            { "B_MRAP_01_hmg_F", { "life_coplevel", "SCALAR", 4 } },
            { "O_MRAP_02_hmg_F", { "life_coplevel", "SCALAR", 4 } },
            { "I_MRAP_03_hmg_F", { "life_coplevel", "SCALAR", 5 } },
	    ////////addon
	    { "max_bike_police", { "", "", -1 } },//  경찰 오토바이
	    { "max_impala_security", { "", "", -1 } },// 경찰 임팔라 세단 5인
	    { "Mrshounka_bmw_gend", { "", "", -1 } },// BMW 1 시리즈 M 세단(2인승)
	    { "Mrshounka_rs4_gend_p_blanc", { "", "", -1 } },// 아우디 RS4 // 기부자
	    { "shounka_a3_audiq7_v2_gendarmerie", { "", "", -1 } },//아우디 Q7// 기부자
	    { "Mrshounka_rs_2015_g", { "", "", -1 } }, // renault megane RS 2015  4인승 해치백 3도어
	    { "shounka_a3_508banalise", { "", "", -1 } },// 푸조 508 세단 검정
	    { "shounka_a3_508gend", { "", "", -1 } },// 푸조 508 세단 파랑
	    { "shounka_a3_508pol", { "", "", -1 } },// 푸조 508 세단 흰
	    { "Mrshounka_a3_308_gend", { "", "", -1 } },//골프 308 GTI 푸조 파랑
	    { "Mrshounka_308pol", { "", "", -1 } },//골프 308 GTI 푸조 흰색
	    { "max_BP_charger", { "", "", -1 } },//닷지 차저 경찰 (흰색)
	    { "max_Charger_undercover", { "", "", -1 } },
	    { "max_FBI_charger_undercover", { "", "", -1 } },
	    { "max_Charger_Lapd", { "", "", -1 } },//  닷지 차저 경찰 검흰
	    //{ "Mrshounka_evox_gend", { "", "", -1 } },// 경찰 EvoX 파랑 4인
	    { "max_BP_tahoe", { "", "", -1 } }, // 닷지 SUV 경찰 ( 흰색)
	    { "max_FBI_tahoe_undercover", { "", "", -1 } },// 경찰 fbi 밴
	    { "max_bus_pris", { "", "", -1 } },// 경찰 죄수 운송 버스
	    { "max_van_sheriff", { "", "", -1 } },// 경찰 밴 흰색 죄수 운송
	    { "max_FBI_tahoe", { "", "", -1 } },// 경찰 FBI van  TAhoe
	    { "Mrshounka_Volkswagen_Touareg_police_police", { "", "", -1 } },//폭스바겐 투아렉 4인승 suv
	    { "Mrshounka_ducati_police_p", { "life_donorlevel", "SCALAR", 1 } },//  경찰듀카티 오토바이  // 기부자
	    { "max_CrownVic_lapd", { "life_donorlevel", "SCALAR", 1 } },// 크라운빅 Crownvic 옛날 경찰 차 검흰// 기부자
	    { "77FuryShr", { "life_donorlevel", "SCALAR", 1 } },// 77년대 플리마우스 퓨리 크루져 (경찰 SHERIFF ) 흰색// 기부자
	    { "77FuryCop", { "life_donorlevel", "SCALAR", 1 } },// " 검정
	    { "shounka_a3_gendsprinter", { "life_donorlevel", "SCALAR", 2 } },// 벤츠 스프린터 경찰// 기부자
	    { "max_FBI_van", { "life_donorlevel", "SCALAR", 2 } },  // 경찰 FBI 장갑 밴// 기부자
	    { "Mrshounka_agera_gend_p", { "life_donorlevel", "SCALAR", 2 } }// 아제라 스포츠카 // 기부자
        };
    };

    class cop_air {
        side = "cop";
        vehicles[] = {
            { "B_Heli_Light_01_F", { "", "", -1 } },
            { "B_Heli_Transport_03_unarmed_F", { "", "", -1 } },
            { "B_Heli_Transport_01_F", { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", { "", "", -1 } },
            { "I_Heli_Transport_02_F", { "", "", -1 } },
            { "O_Heli_Transport_04_F", { "", "", -1 } },
	    { "police_heavy_heli", { "", "", -1 } },// 경찰 오르카//애드온
            { "I_Heli_light_03_F", { "life_coplevel", "SCALAR", 4 } },
            { "O_Heli_Light_02_v2_F", { "life_coplevel", "SCALAR", 4 } },
            { "B_Heli_Light_01_armed_F", { "life_coplevel", "SCALAR", 5 } },
            { "B_Heli_Attack_01_F", { "life_coplevel", "SCALAR", 5 } },
            { "O_Heli_Attack_02_black_F", { "life_coplevel", "SCALAR", 5 } },
            { "B_UAV_01_F", { "life_donorlevel", "SCALAR", 1 } }
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
	
	//Custom
	class civ_car_addon{
		side = "civ";
		vehicles [] ={
		};
	};
	
	class civ_car_donation{
		side = "civ";
		vehicles [] ={
		};
	};
	
	class civ_car_luxury{
		side = "civ";
		vehicles [] ={
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
        vItemSpace = 10;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 200000;
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
        price = 850000;
        textures[] = {
            { "Cop", "cop", {"textures\cop\ghosthawk_0.paa","textures\cop\ghosthawk_1.paa"} },
	    { "KoreanAir", "civ", {"textures\civ\Ghosthawk_CIV_Koreanair1.paa","textures\civ\Ghosthawk_CIV_Koreanair2.paa"} }
        };
    };

    class I_Heli_light_03_F { //hellcat
        vItemSpace = 200;
        licenses[] = { {""}, {"cAir"}, {""}, {""} };
        price = 650000;
        textures[] = {
            { "Cop", "cop", {"textures\cop\cop_hellcat.paa"} },
	    { "EMS", "med", {"textures\ems\Hellcat_EMS_White.paa"} }
        };
    };

    class O_Heli_Light_02_v2_F { //ORCA
        vItemSpace = 200;
        licenses[] = { {""}, {"cAir"}, {""}, {""} };
        price = 750000;
        textures[] = {};
    };

    class O_Heli_Light_02_F { // ORCA ARMED
	vItemSpace = 200;
	licenses[] = { {""}, {"cAir"}, {""}, {""} };
	price = 12000000;
	textures[] = {
	    { "Desert Digi", "reb", {"\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"} }
	};
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
            { "SWAT Police", "cop", {"textures\cop\swat_hunter_1.paa","textures\cop\swat_hunter_2.paa"} },
            { "Scott police", "cop", {"textures\cop\scotpol_Hunter_Cab.paa","textures\cop\scotpol_Hunter_Back.paa"} },
            { "EMS RED", "med", {"textures\ems\med_hunter_front.paa","textures\ems\med_hunter_back.paa"} }
        };
    };

    class B_MRAP_01_hmg_F { //hunter hmg
      vItemSpace = 65;
      licenses[] = { {""}, {""}, {""}, {""} };
      price = 3000000;
      textures[] = {
          { "Black", "cop", {"#(argb,8,8,3)color(0.05,0.05,0.05,1)","#(argb,8,8,3)color(0.05,0.05,0.05,1)"} },
          { "Police", "cop", {"textures\cop\hunter_front.paa","textures\cop\hunter_back.paa"} },
          { "SWAT Police", "cop", {"textures\cop\swat_hunter_1.paa","textures\cop\swat_hunter_2.paa"} },
          { "Scott police", "cop", {"textures\cop\scotpol_Hunter_Cab.paa","textures\cop\scotpol_Hunter_Back.paa"} },
          { "EMS RED", "med", {"textures\ems\med_hunter_front.paa","textures\ems\med_hunter_back.paa"} }
      };
  };

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
            { "Cola", "civ", {"textures\civ\cola_zamak_front.paa","textures\civ\cola_zamak_back.paa"} },
            { "RedBull", "civ", {"textures\civ\truckcabredbull.paa","textures\civ\truckbackredbull.paa"} },
            { "COP", "cop", {"textures\cop\cop_zamak_front.paa","textures\cop\cop_zamak_back.paa"} }
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
        price = 800000;
        textures[] = { };
    };

    class O_MRAP_02_F { //ifrit
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 700000;
        textures[] = {
            { "Black Skull", "reb", {"textures\rebel\reb_black_ifrit_front.paa", "textures\rebel\reb_black_ifrit_back.paa"} },
            { "Camo", "reb", {"textures\rebel\reblbirdcamo1.paa"} },
            { "Black", "cop", {"#(argb,8,8,3)color(0.05,0.05,0.05,1)"} },
            { "BLUE", "cop", {"#(argb,8,8,3)color(0.01,0.01,1.53,1)"} },
            { "Snake", "civ", {"textures\rebel\reb_black_ifrit_front.paa", "textures\rebel\reb_black_ifrit_back.paa"} }
        };
    };

    class O_MRAP_02_hmg_F { //ifrit hmg
      vItemSpace = 60;
      licenses[] = { {"driver"}, {""}, {""}, {""} };
      price = 3500000;
      textures[] = {
          { "Black Skull", "reb", {"textures\rebel\reb_black_ifrit_front.paa", "textures\rebel\reb_black_ifrit_back.paa"} },
          { "Camo", "reb", {"textures\rebel\reblbirdcamo1.paa"} },
          { "Black", "cop", {"#(argb,8,8,3)color(0.05,0.05,0.05,1)"} },
          { "BLUE", "cop", {"#(argb,8,8,3)color(0.01,0.01,1.53,1)"} },
          { "Snake", "civ", {"textures\rebel\reb_black_ifrit_front.paa", "textures\rebel\reb_black_ifrit_back.paa"} }
      };
  };

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
            { "US Police", "cop", {"textures\cop\police_offroad.paa"} },
            { "London Police", "cop", {"textures\cop\police_uk_offroad.paa"} },
            { "SWAT", "cop", {"textures\cop\swat_offroad.paa"} },
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
            { "Hello kitty", "civ", {"textures\civ\kitty_offroad.paa"} },
            { "Traffic police", "cop", {"textures\cop\heto_offroader.paa"} }
        };
    };

    class C_Offroad_01_repair_F : C_Offroad_01_F{};

    class C_Kart_01_Blu_F {
        vItemSpace = 20;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 50000;
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
            { "Ferrari", "civ", {"textures\civ\ferrari_hatchback.paa"} },
            { "Security", "civ", {"textures\civ\secure_hatchback.paa"} },
            { "Police", "cop", {"textures\cop\cop_hatchback.paa"} },
            { "UK Police", "cop", {"textures\cop\UK_police_hatchback_co.paa"} },

            { "EMS Red", "med", {"textures\ems\EMS_hatchback.paa"} },
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
            { "Subaru", "civ", {"textures\civ\civ_subaru.paa"} },
            { "EMS London", "med", {"textures\ems\paramedic_hb.paa"} },
            { "LAPD", "cop", {"textures\cop\lapd_hatchback.paa"} }
        };
    };

    class C_Hatchback_01_sport_F {
        vItemSpace = 45;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 140000;
        textures[] = {
            { "Police", "cop", {"textures\cop\cop_hatchback.paa"} },
            { "UK Police", "cop", {"textures\cop\UK_police_hatchback_co.paa"} },
            { "Security", "civ", {"textures\civ\secure_hatchback.paa"} },
            { "Subaru", "civ", {"textures\civ\civ_subaru.paa"} },
            { "EMS Red", "med", {"textures\ems\EMS_hatchback.paa"} },

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
            { "monster_WRC", "civ", {"textures\civ\civ_hatchback_monster.paa"} },
            { "LAPD", "cop", {"textures\cop\lapd_hatchback.paa"} },
            { "EMS London", "med", {"textures\ems\paramedic_hb.paa"} },
            { "Ferrari", "civ", {"textures\civ\ferrari_hatchback.paa"} },
            { "porsche", "civ", {"textures\civ\porsche_hatchback.paa"} },
	    { "잠복용시민monster", "cop", {"textures\civ\civ_hatchback_monster.paa"} }
        };
    };

    class B_Quadbike_01_F {
        vItemSpace = 25;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 25000;
        textures[] = {
            { "Police", "cop", {"textures\cop\quad_police.paa"} },
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
            { "EMS", "med", {"textures\ems\quad_med.paa"} },
            { "LADY", "civ", {"textures\civ\quad_lady.paa"} }
        };
    };

    class C_SUV_01_F {
        vItemSpace = 70;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {
            { "Sticker", "civ", {"textures\civ\sticker.paa"} },
            { "Hello kitty", "civ", {"textures\civ\kitty.paa"} },
            { "Cube", "civ", {"textures\civ\cube_suv.paa"} },
            { "Hunters", "civ", {"textures\civ\hunter_suv.paa"} },
            { "Dark Red", "civ", {"\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"} },
            { "한국경찰", "cop", {"textures\cop\ASOULPOLICE.paa"} },
            { "영국경찰", "cop", {"textures\cop\police_uk_suv.paa"} },
            { "EMS red", "med", {"textures\ems\EMS_SUV.paa"} },
            { "EMS white", "med", {"textures\ems\EMS_SUV_1.paa"} },
            { "EMS 119", "med", {"textures\ems\EMS_SUV_2.paa"} },
            { "Channel8 News", "civ", {"textures\civ\channel8newscar.paa"} },
            { "VIP Security", "civ", {"textures\civ\suv_vip.paa"} },
            { "미국 경찰", "cop", {"textures\cop\lapd_suv.paa"} },
            { "Ferrari", "civ", {"textures\civ\ferrari_SUV.paa"} },
            { "blueflames", "civ", {"textures\civ\flames.paa"} },
            { "tiger", "civ", {"textures\civ\pimp.paa"} },
            { "ghostRider", "civ", {"textures\civ\suv_ghostrider.paa"} },
            { "택시", "civ", {"textures\civ\suvtaxi.paa"} },
	    { "잠복용시민Cube", "cop", {"textures\civ\cube_suv.paa"} },
	    { "vips", "civ", {"textures\civ\civ_suvvip.paa"} },
	    { "5taku", "civ", {"textures\civ\civ_suvotaku.paa"} }
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
            { "Police Black/White", "cop", {"textures\cop\police_heli.paa", "textures\cop\police_heli2.paa"} },
            { "Police security", "cop", {"textures\cop\sec_hummingbird.paa"} },
            { "EMS Yellow/Blue", "med", {"textures\ems\humming_ems.paa", "textures\ems\humming_ems.paa"} },
            { "EMS Red", "med", {"textures\ems\EMS_LTB.paa", "textures\ems\EMS_LTB.paa"} },
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
            { "EMS hems", "med", {"textures\ems\paramedic_hems.paa"} },
            { "시바견", "civ", {"textures\civ\shibainu.paa"} },
            { "monster", "civ", {"textures\civ\civ_hummingbird_Monster.paa"} }
        };
    };

    class C_Heli_Light_01_civil_F { //m900
        vItemSpace = 100;
        licenses[] = { {"pilot"}, {"cAir"}, {"mAir"}, {""} };
        price = 655000;
        textures[] = {};
    };

    class C_Heli_light_01_sunset_F : C_Heli_Light_01_civil_F{};
    class C_Heli_light_01_graywatcher_F : C_Heli_Light_01_civil_F{};
    class C_Heli_light_01_wasp_F : C_Heli_Light_01_civil_F{};
    class C_Heli_light_01_blueLine_F : C_Heli_Light_01_civil_F{};
    class C_Heli_light_01_luxe_F : C_Heli_Light_01_civil_F{};


    class B_Heli_Light_01_armed_F : B_Heli_Light_01_F{};

    class B_Heli_Attack_01_F { // BLACKFOOT
        vItemSpace = 150;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 2155000;
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
        price = 1255000;
        textures[] = {
            { "EMS Red", "med", {
                "textures\ems\med_mohawk.paa",
                "textures\ems\med_mohawk2.paa",
                "textures\ems\med_mohawk3.paa"
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
                "textures\rebel\reblbirdcamo1.paa"
            } }
        };
    };

    class I_Heli_light_03_unarmed_F : O_Heli_Light_02_unarmed_F{}; // hellcat : orca

    class B_Heli_Transport_03_unarmed_F { //HURON
        vItemSpace = 350;
        licenses[] = { {"pilot" }, {"cAir"}, {"mAir"}, {""} };
        price = 1800000;
        textures[] = {
            { "Black", "cop", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            } },
            { "trooper", "civ", {
                "textures\civ\don_stormtrooper_huron_front.paa", "textures\civ\don_stormtrooper_huron_back.paa"
            } },
            { "Dragon", "civ", {
                "textures\civ\civ_huron_dragon1.paa", "textures\civ\civ_huron_dragon2.paa"
            } },
            { "Desert Digi", "reb", {
                "textures\rebel\reblbirdcamo1.paa"
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

    class O_Heli_Transport_04_medevac_F : O_Heli_Transport_04_F{};

    class O_Heli_Transport_04_covered_F {
	vItemSpace = 150;
	licenses[] = { {""}, {""}, {""}, {""} };
	price = 1250000;
	textures[] = {};
    };

    class O_Heli_Transport_04_bench_F {
   	vItemSpace = 150;
   	licenses[] = { {""}, {""}, {""}, {""} };
   	price = 1250000;
   	textures[] = {};
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

    class O_Plane_CAS_02_F {
	vItemSpace = 60;
	vFuelSpace = 250000;
	licenses[] = { {""}, {""}, {""}, {""} };
	price = 1000000;
    };

    class B_UAV_01_F {
    	vItemSpace = 10;
    	vFuelSpace = 50000;
    	licenses[] = { {""}, {""}, {""}, {""} };
    	price = 300000;
    };
    ////////////////////////////// ADDON
    class max_bike_police {
        vItemSpace = 20;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = {};
    };

    class Mrshounka_ducati_police_p {
        vItemSpace = 20;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 700000;
        textures[] = {};
    };

    class max_impala_security {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = {};
    };

    class Mrshounka_bmw_gend {
        vItemSpace = 40;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 300000;
        textures[] = {};
    };

    class Mrshounka_rs4_gend_p_blanc {
        vItemSpace = 40;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {};
    };

    class shounka_a3_audiq7_v2_gendarmerie {
        vItemSpace = 80;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 1800000;
        textures[] = {};
    };

    class Mrshounka_agera_gend_p {
        vItemSpace = 30;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 2300000;
        textures[] = {};
    };

    class 77FuryShr {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 200000;
        textures[] = {};
    };

    class 77FuryCop {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 200000;
        textures[] = {};
    };

    class Mrshounka_rs_2015_g {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };

    class shounka_a3_508banalise {
        vItemSpace = 70;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 230000;
        textures[] = {};
    };

    class shounka_a3_508gend : shounka_a3_508banalise{};
    class shounka_a3_508pol : shounka_a3_508banalise{};

    class Mrshounka_a3_308_gend {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = {};
    };

    class Mrshounka_308pol : Mrshounka_a3_308_gend{};

    class max_BP_charger {
        vItemSpace = 70;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 190000;
        textures[] = {};
    };

    class max_Charger_undercover : max_BP_charger{};
    class max_FBI_charger_undercover : max_BP_charger{};
    class max_Charger_Lapd : max_BP_charger{};
    class max_CrownVic_lapd : max_BP_charger{};

    class max_BP_tahoe {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 230000;
        textures[] = {};
    };

    class Mrshounka_Volkswagen_Touareg_police_police {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 210000;
        textures[] = {};
    };

    class max_FBI_tahoe_undercover {
         vItemSpace = 120;
         licenses[] = { {"driver"}, {""}, {""}, {""} };
         price = 300000;
         textures[] = {};
    };

    class max_bus_pris {
         vItemSpace = 220;
         licenses[] = { {"driver"}, {""}, {""}, {""} };
         price = 400000;
         textures[] = {};
    };

    class shounka_a3_gendsprinter {
         vItemSpace = 160;
         licenses[] = { {"driver"}, {""}, {""}, {""} };
         price = 800000;
         textures[] = {};
    };

    class max_van_sheriff {
         vItemSpace = 120;
         licenses[] = { {"driver"}, {""}, {""}, {""} };
         price = 340000;
         textures[] = {};
    };

    class max_FBI_van {
         vItemSpace = 120;
         licenses[] = { {"driver"}, {""}, {""}, {""} };
         price = 500000;
         textures[] = {};
    };

    class max_FBI_tahoe {
         vItemSpace = 120;
         licenses[] = { {"driver"}, {""}, {""}, {""} };
         price = 400000;
         textures[] = {};
    };

    class police_heavy_heli {  //orca police
         vItemSpace = 130;
         licenses[] = { {"driver"}, {""}, {""}, {""} };
         price = 700000;
         textures[] = {};
    };

};
