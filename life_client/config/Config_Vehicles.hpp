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
            { "I_Truck_02_fuel_F", { "", "", -1 } },
            { "shounka_a3_dafxf_euro6_f", { "", "", -1 } },    //트레일러 없는 트럭
            { "Mrshounka_a3_iveco_f", { "", "", -1 } },        //IVECO 특장트럭 ( 컨테이너 )  4인승
            { "shounka_a3_renaultmagnum_f", { "", "", -1 } }   //REnault magnum 대형 트레일러
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
            { "B_Heli_Transport_01_F", { "", "", -1 } },
            { "C_Plane_Civil_01_F", { "", "", -1 } },
            { "B_T_VTOL_01_infantry_F", { "", "", -1 } }, //black fish 36인용
            { "B_T_VTOL_01_vehicle_F", { "", "", -1 } }, //black fish 36인용
            { "C_Plane_Civil_01_racing_F", { "", "", -1 } }, //Caesar BTT 타노아 경비행기
            { "sab_ultralight", { "", "", -1 } }        //addon // 경비행기 1인승
        };
    };

     class civ_ship {
        side = "civ";
        vehicles[] = {
            { "C_Rubberboat", { "", "", -1 } },
            { "C_Scooter_Transport_01_F", { "", "", -1 } },
            { "C_Boat_Civil_01_F", { "", "", -1 } },
            { "B_SDV_01_F", { "", "", -1 } },
            { "B_CBS_WaterShadow730_F", { "", "", -1 } }    //addon
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
            { "O_Heli_Transport_04_bench_F",  { "", "", -1 } },
            { "O_T_LSV_02_unarmed_F",  { "", "", -1 } },
            { "O_T_LSV_02_armed_F",  { "", "", -1 } }
            //addon
//            { "max_CG_heli",  { "life_donorlevel", "SCALAR", 2 } } //uFO
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
            { "B_MRAP_01_F", { "", "", -1 } },
            { "O_Truck_03_medical_F", { "", "", -1 } },
            ///// addon
			{ "bv_e60_m5_cop_emt", { "", "", -1 } },	//Patrol EMT
            { "shounka_nemo_pompier", { "", "", -1 } }, // 귀여운 사각2인
            { "shounka_a3_pompier_sprinter", { "", "", -1 } }, // 벤츠 스프린터 기부자용
			{ "bv_the_crowner_cop_emt", { "", "", -1 } }	//경찰차 비슷한 빨간차
			
//            { "max_ambulance", { "", "", -1 } }, //옛날 엠뷸런스 4인용
//            { "max_firetruck", { "", "", -1 } }, // 소방차 5인용

//            { "max_towtruck", { "", "", -1 } } //토우트럭
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
            { "I_Heli_light_03_unarmed_F",  { "", "", -1 } }
            //addon
//            { "max_HEMS_heli",  { "", "", -1 } }
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
            { "B_T_LSV_01_armed_F", { "life_coplevel", "SCALAR", 4 } },
        ////////addon
//            { "max_bike_police", { "", "", -1 } },//  경찰 오토바이
//            { "max_impala_security", { "", "", -1 } },// 경찰 임팔라 세단 5인
            { "Mrshounka_bmw_gend", { "", "", -1 } },// BMW 1 시리즈 M 세단(2인승)
            { "Mrshounka_rs4_gend_p_blanc", { "", "", -1 } },// 아우디 RS4 // 기부자
            { "shounka_a3_audiq7_v2_gendarmerie", { "", "", -1 } },//아우디 Q7// 기부자
            { "Mrshounka_rs_2015_g", { "", "", -1 } }, // renault megane RS 2015  4인승 해치백 3도어
            { "shounka_a3_508banalise", { "", "", -1 } },// 푸조 508 세단 검정
            { "shounka_a3_508gend", { "", "", -1 } },// 푸조 508 세단 파랑
            { "shounka_a3_508pol", { "", "", -1 } },// 푸조 508 세단 흰
            { "Mrshounka_a3_308_gend", { "", "", -1 } },//골프 308 GTI 푸조 파랑
            { "Mrshounka_308pol", { "", "", -1 } },//골프 308 GTI 푸조 흰색
//            { "max_BP_charger", { "", "", -1 } },//닷지 차저 경찰 (흰색)
//            { "max_Charger_undercover", { "", "", -1 } },
//            { "max_FBI_charger_undercover", { "", "", -1 } },
//            { "max_Charger_Lapd", { "", "", -1 } },//  닷지 차저 경찰 검흰
            //{ "Mrshounka_evox_gend", { "", "", -1 } },// 경찰 EvoX 파랑 4인 이상있음.
//            { "max_BP_tahoe", { "", "", -1 } }, // 닷지 SUV 경찰 ( 흰색)
//            { "max_FBI_tahoe_undercover", { "", "", -1 } },// 경찰 fbi 밴
//            { "max_bus_pris", { "life_coplevel", "SCALAR", 4 } },// 경찰 죄수 운송 버스
//            { "max_van_sheriff", { "life_coplevel", "SCALAR", 4 } },// 경찰 밴 흰색 죄수 운송
//            { "max_FBI_tahoe", { "", "", -1 } },// 경찰 FBI van  TAhoe
//            { "max_swatvan", { "life_coplevel", "SCALAR", 4 } },// 경찰 swat van  TAhoe
            { "Mrshounka_Volkswagen_Touareg_police_police", { "", "", -1 } },//폭스바겐 투아렉 4인승 suv
            { "Mrshounka_ducati_police_p", { "life_donorlevel", "SCALAR", 1 } },//  경찰듀카티 오토바이  // 기부자
//            { "max_CrownVic_lapd", { "life_donorlevel", "SCALAR", 1 } },// 크라운빅 Crownvic 옛날 경찰 차 검흰// 기부자
            { "77FuryShr", { "life_donorlevel", "SCALAR", 1 } },// 77년대 플리마우스 퓨리 크루져 (경찰 SHERIFF ) 흰색// 기부자
            { "77FuryCop", { "life_coplevel", "SCALAR", 4 } },// " 검정
            { "shounka_a3_gendsprinter", { "life_donorlevel", "SCALAR", 2 } },// 벤츠 스프린터 경찰// 기부자
//            { "max_FBI_van", { "life_donorlevel", "SCALAR", 2 } },  // 경찰 FBI 장갑 밴// 기부자
            { "Mrshounka_agera_gend_p", { "life_donorlevel", "SCALAR", 2 } },// 아제라 스포츠카 // 기부자
            { "bv_gtr_spec_v_cop_patrol", { "life_donorlevel", "SCALAR", 1 } }, //Patrol Bissan GTR Spec V
            { "bv_caressa_gt_cop_patrol", { "life_donorlevel", "SCALAR", 1 } }, //Patrol Borsche Caressa GT Cop
            { "bv_458_cop_patrol", { "life_donorlevel", "SCALAR", 2 } }, //Patrol Perrari 458 Cop
            { "bv_shelly_cop_patrol", { "life_donorlevel", "SCALAR", 1 } }, //Patrol Shelly Cop
            { "bv_the_crowner_cop_patrol", { "", "", -1 } }, //Patrol The Crowner
            { "bv_the_crowner_uc", { "", "", -1 } }, //Patrol The Black Crowner
            { "bv_the_crowner_cop_patrol_interceptor", { "", "", -1 } }, // 인터셉터 경찰차
			{ "bv_the_crowner_cop_sher", { "", "", -1 } },	//Patrol the Black Sheriff
			{ "bv_e60_m5_cop_patrol", { "", "", -1 } }	//Patrol
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
            { "B_T_VTOL_01_vehicle_F", { "", "", -1 } }, //black fish 36인용 차량수송용
            { "B_UAV_01_F", { "life_donorlevel", "SCALAR", 1 } }
        };
    };

    class cop_ship {
        side = "cop";
        vehicles[] = {
            { "B_Boat_Transport_01_F", { "", "", -1 } },
            { "C_Scooter_Transport_01_F", { "", "", -1 } },
            { "C_Boat_Civil_01_police_F", { "", "", -1 } },
            { "B_Boat_Armed_01_minigun_F", { "life_coplevel", "SCALAR", 4 } },
            { "B_SDV_01_F", { "", "", -1 } }
        };
    };

    //Custom
    class civ_car_addon {
        side = "civ";
        vehicles[] = {
             { "Tal_Wrangler_Red", { "", "", -1 } },                          //랭글러 지프
             { "Tal_Wrangler_Pink", { "life_donorlevel", "SCALAR", 1 } },     //랭글러 지프
             { "Tal_Wrangler_White", { "", "", -1 } },                        //랭글러 지프
//             { "max_AJ", { "", "", -1 } },                                    // 오픈 지프
//             { "max_bike", { "", "", -1 } },                                  //해골 갱 Bike
//             { "max_bike1", { "", "", -1 } },                                 //해골 갱 Bike
//             { "max_bike2", { "", "", -1 } },                                 //해골 갱 Bike
             { "Mrshounka_Bowler_c", { "", "", -1 } },                        //BOWLER SUV 2인승
             { "Mrshounka_Bowler_c_noir", { "", "", -1 } },                   //BOWLER SUV 2인승
             { "Mrshounka_Bowler_c_bleufonce", { "", "", -1 } },              //BOWLER SUV 2인승
             { "shounka_buggy", { "", "", -1 } },                             //버기카
             { "shounka_buggy_noir", { "", "", -1 } },                        //버기카
             { "shounka_buggy_bleufonce", { "", "", -1 } },                   //버기카
             { "shounka_buggy_orange", { "", "", -1 } },                      //버기카
//             { "max_bus", { "", "", -1 } },                                   //낡은 버스
             { "Mrshounka_a3_dodge15_civ", { "", "", -1 } },                //닷지 차져 2015년 버전
             { "Mrshounka_a3_dodge15_civ_noir", { "", "", -1 } },            //닷지 차져 2015년 버전
             { "Mrshounka_a3_dodge15_civ_bleufonce", { "", "", -1 } },        //닷지 차져 2015년 버전
             { "shounka_avalanche", { "", "", -1 } },                        //시보렛 Avalanche
             { "shounka_avalanche_noir", { "", "", -1 } },                    //시보렛 Avalanche
             { "shounka_avalanche_bleufonce", { "", "", -1 } },                //시보렛 Avalanche
             { "Mrshounka_c4_p_civ", { "", "", -1 } },                        //citroen c4  4인승 해치백
             { "Mrshounka_c4_p_bleufonce", { "", "", -1 } },                //citroen c4  4인승 해치백
             { "Mrshounka_c4_p_violet", { "", "", -1 } },                    //citroen c4  4인승 해치백
             { "Mrshounka_a3_ds3_civ", { "", "", -1 } },                    //citroen ds3 4인승  해치백
             { "Mrshounka_a3_ds3_civ_noir", { "", "", -1 } },                //citroen ds3 4인승  해치백
             { "Mrshounka_a3_ds3_civ_civ_orange", { "", "", -1 } },            //citroen ds3 4인승  해치백
             { "shounka_a3_ds4_civ", { "", "", -1 } },                        //citroen ds4  4인승  해치백
             { "shounka_a3_ds4_noir", { "", "", -1 } },                        //citroen ds4  4인승  해치백
             { "shounka_a3_ds4_orange", { "", "", -1 } },                    //citroen ds4  4인승  해치백
             { "shounka_nemo", { "", "", -1 } },                            //citroen Nemo 귀여운 사각 ㅋ 2인승
             { "shounka_nemo_noir", { "", "", -1 } },                        //citroen Nemo 귀여운 사각 ㅋ 2인승
             { "shounka_nemo_orange", { "", "", -1 } },                        //citroen Nemo 귀여운 사각 ㅋ 2인승
             { "shounka_a3_cliors_civ", { "", "", -1 } },                    //Clio RS  4인승 해치백
             { "shounka_a3_cliors_civ_noir", { "", "", -1 } },                //Clio RS  4인승 해치백
             { "shounka_a3_cliors_civ_bleufonce", { "", "", -1 } },            //Clio RS  4인승 해치백
//             { "max_CrownVic_blue", { "", "", -1 } },                        //crwonVic 옛날 세단 4인승
//             { "max_CrownVic_red", { "", "", -1 } },                        //crwonVic 옛날 세단 4인승
//             { "max_CrownVic_white", { "", "", -1 } },                        //crwonVic 옛날 세단 4인승
//             { "max_CrownVic_taxi", { "", "", -1 } },                        //crwonVic 옛날 세단 4인승 택시
             { "Mrshounka_ducati_p", { "", "", -1 } },                        //ducati 오토바이 1인승
             { "Mrshounka_ducati_p_noir", { "", "", -1 } },                    //ducati 오토바이 1인승
             { "Mrshounka_ducati_p_o", { "", "", -1 } },                    //ducati 오토바이 1인승
             { "Mrshounka_Vandura_civ", { "", "", -1 } },                    //GMC Vandura 봉고
             { "Mrshounka_Vandura_civ_noir", { "", "", -1 } },                //GMC Vandura 봉고
             { "Mrshounka_Vandura_civ_orange", { "", "", -1 } },            //GMC Vandura 봉고
             { "Mrshounka_golfvi_civ", { "", "", -1 } },                    //폭스바겐 골프
             { "Mrshounka_golfvi_noir", { "", "", -1 } },                    //폭스바겐 골프
             { "Mrshounka_golfvi_orange", { "", "", -1 } },                    //폭스바겐 골프
//             { "max_H3_red", { "life_donorlevel", "SCALAR", 1 } },                                //험머 H3  6인
//             { "max_H3_black", { "life_donorlevel", "SCALAR", 1 } },                            //험머 H3  6인
//             { "max_H3_urbancamo", { "life_donorlevel", "SCALAR", 1 } },                        //험머 H3  6인
//             { "max_impala_black", { "", "", -1 } },                        //임팔라 세단 5인
//             { "max_impala_white", { "", "", -1 } },                        //임팔라 세단 5인
             { "Mrshounka_jeep_blinde_noir", { "", "", -1 } },                //JEEP Blinde 4인승
             { "Mrshounka_jeep_blinde_bleu", { "", "", -1 } },                //JEEP Blinde 4인승
             { "Mrshounka_jeep_blinde_rouge", { "", "", -1 } },                //JEEP Blinde 4인승
             { "Mrshounka_cherokee_noir", { "", "", -1 } },                    //jeep 그랜드 체로키 4인승
             { "Mrshounka_cherokee_noir_bleu", { "", "", -1 } },            //jeep 그랜드 체로키 4인승
             { "Mrshounka_cherokee_noir_violet", { "", "", -1 } },            //jeep 그랜드 체로키 4인승
//             { "max_jeep_green", { "", "", -1 } },                            //jeep 오픈 2인승
//             { "max_jeep_red", { "", "", -1 } },                            //jeep 오픈 2인승
//             { "max_jeep_black", { "", "", -1 } },                            //jeep 오픈 2인승
             { "Mrshounka_mercedes_190_p_civ", { "", "", -1 } },            //벤츠 구형 스포츠카
             { "shounka_a3_spr_civ", { "", "", -1 } },                        //벤츠 스프린터 빨강
             { "Mrshounka_207_civ", { "", "", -1 } },                        //푸조 207 RC
             { "Mrshounka_a3_308_civ", { "", "", -1 } },                    //골프 308 GTI 푸조
             { "Mrshounka_cayenne_p_civ", { "", "", -1 } },                    //포르쉐 카이엔
             { "Mrshounka_r5_noir", { "", "", -1 } },                        //RENAULT 소형 해치백 2인승
             { "Mrshounka_r5_rose", { "", "", -1 } },                        //RENAULT 소형 해치백 2인승
             { "Mrshounka_megane_rs_2015_civ", { "", "", -1 } },            // renault megane RS 2015  4인승 해치백 3도어
             { "Mrshounka_twingo_p", { "", "", -1 } },                        //renault twingo 해치백 4인승 소형
             { "Mrshounka_a3_smart_civ", { "", "", -1 } },                    //벤츠 스마트 2인승
             { "Mrshounka_a3_smart_civ_noir", { "", "", -1 } },                //벤츠 스마트 2인승
             { "Mrshounka_a3_smart_civ_bleu", { "", "", -1 } },                //벤츠 스마트 2인승
//             { "max_suv_black", { "", "", -1 } },                            //SUV 5인승 맥스 - 파노라마선루프 SUV
//             { "max_suv_UC", { "", "", -1 } },                                //SUV 5인승 맥스 - 파노라마선루프 SUV
//             { "max_van_white", { "", "", -1 } },                            //옛날 van 6인승
//             { "max_van_cola", { "", "", -1 } },                            //옛날 van 6인승
//             { "max_van_Grey", { "", "", -1 } },                            //옛날 van 6인승
//             { "max_van_red", { "", "", -1 } },                                //옛날 van 6인승
//             { "max_van_blue", { "", "", -1 } },                            //옛날 van 6인승
//             { "max_van_green", { "", "", -1 } },                            //옛날 van 6인승
             { "Mrshounka_Volkswagen_Touareg_bleufonce", { "", "", -1 } },    //폭스바겐 투아렉 4인승 suv
             { "Mrshounka_yamaha_p", { "", "", -1 } },    //야마하 오토바이
             { "Mrshounka_yamaha_p_noir", { "", "", -1 } },    //야마하 오토바이
             { "dbo_crosser", { "", "", -1 } },    //공격형 오토바이
			 { "sfp_wheelchair", { "", "", -1 } },    //휠체어
			 { "Skyline_Bus_01_F", { "", "", -1 } },    //버스
        };
    };

    class civ_car_donation {
        side = "civ";
        vehicles[] = {
            { "jean_sleigh", { "", "", -1 } },                    //산터썰매
            { "shounka_f430_spider", { "life_donorlevel", "SCALAR", 1 } },                //페라리 f430 스파이더
            { "shounka_f430_spider_noir", { "life_donorlevel", "SCALAR", 1 } },            //페라리 f430 스파이더
            { "shounka_f430_spider_bleufonce", { "life_donorlevel", "SCALAR", 1 } },    //페라리 f430 스파이더
            { "shounka_f430_spider_rouge", { "life_donorlevel", "SCALAR", 1 } },        //페라리 f430 스파이더
            { "shounka_f430_spider_jaune", { "life_donorlevel", "SCALAR", 1 } },        //페라리 f430 스파이더
            { "shounka_f430_spider_rose", { "life_donorlevel", "SCALAR", 1 } },            //페라리 f430 스파이더
            { "shounka_f430_spider_grise", { "life_donorlevel", "SCALAR", 1 } },        //페라리 f430 스파이더
            { "shounka_f430_spider_violet", { "life_donorlevel", "SCALAR", 1 } },        //페라리 f430 스파이더
            { "shounka_f430_spider_orange", { "life_donorlevel", "SCALAR", 1 } },        //페라리 f430 스파이더
            { "shounka_mp4", { "life_donorlevel", "SCALAR", 2 } },                        //맥라렌 mp4-12c
            { "A3L_MonsterTruck", { "life_donorlevel", "SCALAR", 2 } },            //몬스터트럭
            { "Mrshounka_c63_2015_civ", { "life_donorlevel", "SCALAR", 1 } }, //벤츠 c63 AMG 2015
            { "Mrshounka_agera_p", { "life_donorlevel", "SCALAR", 1 } },            //아제라 스포츠
            { "Mrshounka_agera_p_bleu", { "life_donorlevel", "SCALAR", 1 } },        //아제라 스포츠
            { "Mrshounka_agera_p_jaune", { "life_donorlevel", "SCALAR", 1 } },        //아제라 스포츠
            { "dbo_LT_01", { "life_donorlevel", "SCALAR", 1 } },                    //LT sport
            { "Mrshounka_lykan_c", { "life_donorlevel", "SCALAR", 1 } },            //라이칸 하이퍼스포트
            { "A3L_Flipcar", { "life_donorlevel", "SCALAR", 1 } },                   //Flipcar
			{ "sga_shopping_cart", { "life_donorlevel", "SCALAR", 2 } },                   //쇼핑카트
			{ "sga_shopping_cart_monster", { "life_donorlevel", "SCALAR", 2 } },                   //쇼핑카트몬스터
			{ "sga_hover_board", { "life_donorlevel", "SCALAR", 2 } },                   //호버보드
			{ "shounka_harley_a3", { "life_donorlevel", "SCALAR", 2 } }         //할리데이비슨 오토바이
             //             { "max_charger_black", { "life_donorlevel", "SCALAR", 1 } },            //닷지 차져
             //             { "max_charger_blue", { "life_donorlevel", "SCALAR", 1 } },            //닷지 차져
             //             { "max_charger_red", { "life_donorlevel", "SCALAR", 1 } },                //닷지 차져
             //             { "max_charger_yellow", { "life_donorlevel", "SCALAR", 1 } },            //닷지 차져
             //             { "max_vipcar", { "life_donorlevel", "SCALAR", 2 } }                    //롤스로이스 팬텀 검정 ( 대통령차)
             //{ "", { "", "", -1 } },    //Sample
        };
    };

    class civ_car_luxury {
        side = "civ";
        vehicles[] ={
            { "SIG_SuperBeeB", { "", "", -1 } },                    //1969 Dodge 슈퍼 비(블랙)
            { "SIG_SuperBee", { "", "", -1 } },                        //1969 Dodge 슈퍼 비(레드)
            { "SIG_SuperBeeY", { "", "", -1 } },                    //1969 Dodge 슈퍼 비(옐로)
            { "Mrshounka_rs4_civ", { "", "", -1 } },                //아우디 RS4
            { "Mrshounka_rs4_civ_bleufonce", { "", "", -1 } },        //아우디 RS4
            { "Mrshounka_rs4_civ_orange", { "", "", -1 } },            //아우디 RS4
            { "shounka_a3_rs5_civ", { "", "", -1 } },                //아우디 RS5
            { "shounka_a3_rs5_civ_bleufonce", { "", "", -1 } },        //아우디 RS5
            { "shounka_a3_rs5_civ_orange", { "", "", -1 } },        //아우디 RS5
            { "shounka_rs6", { "", "", -1 } },                        //아우디 RS6
            { "shounka_rs6_bleufonce", { "", "", -1 } },            //아우디 RS6
            { "shounka_rs6_orange", { "", "", -1 } },                //아우디 RS6
            { "Mrshounka_bmwm1_civ", { "", "", -1 } },                //BMW 1 시리즈 M세단
            { "Mrshounka_bmwm1_civ_noir", { "", "", -1 } },            //BMW 1 시리즈 M세단
            { "Mrshounka_bmwm1_civ_bleufonce", { "", "", -1 } },    //BMW 1 시리즈 M세단
            { "Mrshounka_bmwm1_civ_orange", { "", "", -1 } },        //BMW 1 시리즈 M세단
//            { "max_BMW", { "", "", -1 } },                            //BMW 세단 2인승  검정
//            { "max_BMW1", { "", "", -1 } },                            //BMW 세단 2인승  검정
//            { "max_BMW2", { "", "", -1 } },                            //BMW 세단 2인승  검정
//            { "max_BMW_M3_GTR", { "", "", -1 } },                    //BMW  GTR3레이싱
//            { "max_BMW_M3_GTR1", { "", "", -1 } },                    //BMW  GTR3레이싱
//            { "max_BMW_M3_GTR2", { "", "", -1 } },                    //BMW  GTR3레이싱
            { "Mrshounka_bmwm6_civ", { "", "", -1 } },                //BMW M 6
            { "Mrshounka_bmwm6_noir", { "", "", -1 } },                //BMW M 6
            { "Mrshounka_bmwm6_orange", { "", "", -1 } },            //BMW M 6
            { "shounka_monsteur", { "", "", -1 } },                    //시보레 몬스터 트럭
            { "shounka_monsteur_noir", { "", "", -1 } },            //시보레 몬스터 트럭
            { "shounka_monsteur_orange", { "", "", -1 } },            //시보레 몬스터 트럭
            { "shounka_gt", { "", "", -1 } },                        //Ford gt 스포츠카
            { "shounka_gt_noir", { "", "", -1 } },                    //Ford gt 스포츠카
            { "shounka_gt_bleufonce", { "", "", -1 } },                //Ford gt 스포츠카
            { "shounka_gt_rouge", { "", "", -1 } },                    //Ford gt 스포츠카
            { "shounka_gt_jaune", { "", "", -1 } },                    //Ford gt 스포츠카
            { "shounka_gt_rose", { "", "", -1 } },                    //Ford gt 스포츠카
            { "shounka_gt_grise", { "", "", -1 } },                    //Ford gt 스포츠카
            { "shounka_gt_violet", { "", "", -1 } },                //Ford gt 스포츠카
            { "shounka_gt_orange", { "", "", -1 } },                //Ford gt 스포츠카
            { "Mrshounka_mustang_civ", { "", "", -1 } },            //ford 머스탱
            { "Mrshounka_mustang_mat", { "", "", -1 } },            //ford 머스탱
            { "Mrshounka_mustang_noir", { "", "", -1 } },            //ford 머스탱
            { "Mrshounka_mustang_mat_n", { "", "", -1 } },            //ford 머스탱
            { "Mrshounka_mustang_bleufonce", { "", "", -1 } },        //ford 머스탱
            { "Mrshounka_mustang_mat_b", { "", "", -1 } },            //ford 머스탱
            { "Mrshounka_mustang_rouge", { "", "", -1 } },            //ford 머스탱
            { "Mrshounka_mustang_jaune", { "", "", -1 } },            //ford 머스탱
            { "Mrshounka_mustang_rose", { "", "", -1 } },            //ford 머스탱
            { "Mrshounka_mustang_grise", { "", "", -1 } },            //ford 머스탱
            { "Mrshounka_mustang_violet", { "", "", -1 } },            //ford 머스탱
            { "Mrshounka_mustang_orange", { "", "", -1 } },            //ford 머스탱
            { "Mrshounka_hummer_civ", { "", "", -1 } },                //험머 H1  //4인
            { "Mrshounka_hummer_civ_noir", { "", "", -1 } },        //험머 H1  //4인
            { "Mrshounka_hummer_civ_orange", { "", "", -1 } },        //험머 H1  //4인
            { "shounka_h2", { "", "", -1 } },                        //험머     H2 //4인
            { "shounka_h2_noir", { "", "", -1 } },                    //험머     H2 //4인
            { "shounka_h2_orange", { "", "", -1 } },                //험머     H2 //4인
//            { "max_lambo", { "", "", -1 } },                        //람보르기니 가야르도
//            { "max_lambo1", { "", "", -1 } },                        //람보르기니 가야르도
//            { "max_lambo2", { "", "", -1 } },                        //람보르기니 가야르도
            { "mrshounka_huracan_c", { "", "", -1 } },                //람보르기니 우라칸 // huracan
            { "mrshounka_huracan_c_noir", { "", "", -1 } },            //람보르기니 우라칸 // huracan
            { "mrshounka_huracan_c_bleufonce", { "", "", -1 } },    //람보르기니 우라칸 // huracan
            { "mrshounka_huracan_c_rouge", { "", "", -1 } },        //람보르기니 우라칸 // huracan
            { "mrshounka_huracan_c_jaune", { "", "", -1 } },        //람보르기니 우라칸 // huracan
            { "mrshounka_huracan_c_rose", { "", "", -1 } },            //람보르기니 우라칸 // huracan
            { "mrshounka_huracan_c_grise", { "", "", -1 } },        //람보르기니 우라칸 // huracan
            { "mrshounka_huracan_c_violet", { "", "", -1 } },        //람보르기니 우라칸 // huracan
            { "mrshounka_huracan_c_orange", { "", "", -1 } },        //람보르기니 우라칸 // huracan
            { "Mrshounka_veneno_c", { "", "", -1 } },                //람보르기니 베네노 veneno
            { "Mrshounka_veneno_c_noir", { "", "", -1 } },            //람보르기니 베네노 veneno
            { "Mrshounka_veneno_c_bleu", { "", "", -1 } },            //람보르기니 베네노 veneno
            { "Mrshounka_veneno_c_jaune", { "", "", -1 } },            //람보르기니 베네노 veneno
//            { "max_vipcar1", { "life_donorlevel", "SCALAR", 2 } },     //롤스로이스 팬텀 ( vip )  크롬색
            { "shounka_limo_civ", { "", "", -1 } },                    //아우디 리무진
            { "shounka_limo_civ_noir", { "", "", -1 } },            //아우디 리무진
            { "shounka_limo_civ_bleufonce", { "", "", -1 } },        //아우디 리무진
            { "shounka_limo_civ_orange", { "", "", -1 } },            //아우디 리무진
            { "Mrshounka_lincoln_civ", { "", "", -1 } },            //링컨 1969
            { "Mrshounka_lincoln_noir", { "", "", -1 } },            //링컨 1969
            { "Mrshounka_lincoln_grise", { "", "", -1 } },            //링컨 1969
            { "shounka_clk", { "", "", -1 } },                        //벤츠 CLK
            { "Mrshounka_a3_gtr_civ", { "", "", -1 } },                //닛산 GTR 2012
            { "Mrshounka_a3_gtr_civ_noir", { "", "", -1 } },        //닛산 GTR 2012
            { "Mrshounka_a3_gtr_civ_bleu", { "", "", -1 } },        //닛산 GTR 2012
            { "Mrshounka_pagani_c", { "", "", -1 } },                //파가니 huayra
            { "Mrshounka_pagani_c_noir", { "", "", -1 } },            //파가니 huayra
            { "Mrshounka_pagani_c_bleufonce", { "", "", -1 } },        //파가니 huayra
            { "Mrshounka_pagani_c_jaune", { "", "", -1 } },            //파가니 huayra
            { "Mrshounka_a3_308_rcz", { "", "", -1 } },                //푸조 308 오픈카 2인승
            { "Mrshounka_a3_308_rcz_noir", { "", "", -1 } },        //푸조 308 오픈카 2인승
            { "Mrshounka_a3_308_rcz_bleufonce", { "", "", -1 } },    //푸조 308 오픈카 2인승
            { "shounka_a3_peugeot508_civ_noir", { "", "", -1 } },    //푸조 508 세단
            { "shounka_a3_peugeot508_civ_bleufonce", { "", "", -1 } },    //푸조 508 세단
            { "shounka_a3_peugeot508_civ_rouge", { "", "", -1 } },    //푸조 508 세단
            { "shounka_porsche911", { "", "", -1 } },                //포르쉐 911
            { "mrshounka_92_civ", { "", "", -1 } },                    //포르쉐 911 92년식
            { "shounka_transam", { "", "", -1 } }                    //옛날 머슬카 Transam 2인승
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
        price = 850000;
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

    class C_Scooter_Transport_01_F {
        vItemSpace = 50;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 75000;
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

    class O_T_LSV_02_unarmed_F {
        vItemSpace = 65;
        licenses[] = { {"rebel"}, {""}, {""}, {""} };
        price = 350000;
        textures[] = { };
    };

    class O_T_LSV_02_armed_F {
        vItemSpace = 65;
        licenses[] = { {"rebel"}, {""}, {""}, {""} };
        price = 9000000;
        textures[] = { };
    };

    class B_T_LSV_01_armed_F {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 2300000;
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

    class shounka_nemo_pompier {
        vItemSpace = 30;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {};
    };

    class max_ambulance {
        vItemSpace = 130;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 350000;
        textures[] = {};
    };

    class max_firetruck {
        vItemSpace = 130;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };

    class max_towtruck {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 700000;
        textures[] = {};
    };

    class max_HEMS_heli {
        vItemSpace = 120;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };

    //Civilian Addon
    //Civ Truck

    class shounka_a3_dafxf_euro6_f {
        vItemSpace = 350;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1900000;
        textures[] = {};
    };

    class Mrshounka_a3_iveco_f {
        vItemSpace = 480;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 2550000;
        textures[] = {};
    };

    class shounka_a3_renaultmagnum_f {
        vItemSpace = 560;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 3500000;
        textures[] = {};
    };

    class sab_RobinDR400_5 {
        vItemSpace = 100;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 2000000;
        textures[] = {};
    };

    class C_Plane_Civil_01_F {
        vItemSpace = 100;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {};
    };

    class C_Plane_Civil_01_racing_F {
        vItemSpace = 200;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 2200000;
        textures[] = {};
    };

   
    class sab_cuav_trojan {
        vItemSpace = 30;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 700000;
        textures[] = {};
    };

    class sab_cuav_piper {
        vItemSpace = 50;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 1250000;
        textures[] = {};
    };
    
    class sab_FAAllegro {
        vItemSpace = 60;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 1400000;
        textures[] = {};
    };

    class sab_ultralight {
            vItemSpace = 60;
            licenses[] = { {"pilot"}, {""}, {""}, {""} };
            price = 1000000;
            textures[] = {};
        };

    //Civ Boat
    class B_CBS_WaterShadow730_F {
        vItemSpace = 120;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 2500000;
        textures[] = {};
    };

    //Civ Vehicle
    //class 적용값 : 기본값{};

    //랭글러 지프
    class Tal_Wrangler_Red {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 1200000;
        textures[] = {};
    };

    class Tal_Wrangler_Pink : Tal_Wrangler_Red{};
    class Tal_Wrangler_White : Tal_Wrangler_Red{};

    //오픈 지프
    class max_AJ {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 470000;
        textures[] = {};
    };

    //해골 갱 Bike
    class max_bike {
        vItemSpace = 20;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 250000;
        textures[] = {};
    };
    class max_bike1 : max_bike{};
    class max_bike2 : max_bike{};

    //Bowler Suv 2인승
    class Mrshounka_Bowler_c {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 400000;
        textures[] = {};
    };
    class Mrshounka_Bowler_c_noir : Mrshounka_Bowler_c{};
    class Mrshounka_Bowler_c_bleufonce : Mrshounka_Bowler_c{};

    //버기카
    class shounka_buggy {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 600000;
        textures[] = {};
    };
    class shounka_buggy_noir : shounka_buggy{};
    class shounka_buggy_bleufonce : shounka_buggy{};
    class shounka_buggy_orange : shounka_buggy{};

    //낡은 버스
    class max_bus {
        vItemSpace = 150;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {};
    };

    //닷지 차져 2015년 버전
    class Mrshounka_a3_dodge15_civ {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 260000;
        textures[] = {};
    };
    class Mrshounka_a3_dodge15_civ_noir : Mrshounka_a3_dodge15_civ{};
    class Mrshounka_a3_dodge15_civ_bleufonce : Mrshounka_a3_dodge15_civ{};

    //시보렛 Avalanche
    class shounka_avalanche {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = {};
    };
    class shounka_avalanche_noir : shounka_avalanche{};
    class shounka_avalanche_bleufonce : shounka_avalanche{};

    //citroen c4  4인승 해치백
    class Mrshounka_c4_p_civ {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 200000;
        textures[] = {};
    };
    class Mrshounka_c4_p_bleufonce : Mrshounka_c4_p_civ{};
    class Mrshounka_c4_p_violet : Mrshounka_c4_p_civ{};

    //citroen ds3 4인승  해치백
    class Mrshounka_a3_ds3_civ {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 160000;
        textures[] = {};
    };
    class Mrshounka_a3_ds3_civ_noir : Mrshounka_a3_ds3_civ{};
    class Mrshounka_a3_ds3_civ_civ_orange : Mrshounka_a3_ds3_civ{};

    //citroen ds4  4인승  해치백
    class shounka_a3_ds4_civ {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = {};
    };
    class shounka_a3_ds4_noir : shounka_a3_ds4_civ{};
    class shounka_a3_ds4_orange : shounka_a3_ds4_civ{};

    //citroen Nemo 귀여운 사각 ㅋ 2인승
    class shounka_nemo {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 170000;
        textures[] = {};
    };
    class shounka_nemo_noir : shounka_nemo{};
    class shounka_nemo_orange : shounka_nemo{};

    //Clio RS  4인승 해치백
    class shounka_a3_cliors_civ {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 130000;
        textures[] = {};
    };
    class shounka_a3_cliors_civ_noir : shounka_a3_cliors_civ{};
    class shounka_a3_cliors_civ_bleufonce : shounka_a3_cliors_civ{};

    //crwonVic 옛날 세단 4인승
    class max_CrownVic_blue {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 170000;
        textures[] = {};
    };
    class max_CrownVic_red : max_CrownVic_blue{};
    class max_CrownVic_white : max_CrownVic_blue{};
    class max_CrownVic_taxi : max_CrownVic_blue{};

    //ducati 오토바이 1인승
    class Mrshounka_ducati_p {
        vItemSpace = 20;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 1400000;
        textures[] = {};
    };
    class Mrshounka_ducati_p_noir : Mrshounka_ducati_p{};
    class Mrshounka_ducati_p_o : Mrshounka_ducati_p{};

    //GMC Vandura 봉고
    class Mrshounka_Vandura_civ {
        vItemSpace = 100;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 260000;
        textures[] = {};
    };
    class Mrshounka_Vandura_civ_noir : Mrshounka_Vandura_civ{};
    class Mrshounka_Vandura_civ_orange : Mrshounka_Vandura_civ{};

    //폭스바겐 골프
    class Mrshounka_golfvi_civ {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 400000;
        textures[] = {};
    };
    class Mrshounka_golfvi_noir : Mrshounka_golfvi_civ{};
    class Mrshounka_golfvi_orange : Mrshounka_golfvi_civ{};

    //험머 H3  6인
    class max_H3_red {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 900000;
        textures[] = {};
    };
    class max_H3_black : max_H3_red{};

    //임팔라 세단 5인
    class max_impala_black {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 210000;
        textures[] = {};
    };
    class max_impala_white : max_impala_black{};

    //JEEP Blinde 4인승
    class Mrshounka_jeep_blinde_noir {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 450000;
        textures[] = {};
    };
    class Mrshounka_jeep_blinde_bleu : Mrshounka_jeep_blinde_noir{};
    class Mrshounka_jeep_blinde_rouge : Mrshounka_jeep_blinde_noir{};

    //jeep 그랜드 체로키 4인승
    class Mrshounka_cherokee_noir {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };
    class Mrshounka_cherokee_noir_bleu : Mrshounka_cherokee_noir{};
    class Mrshounka_cherokee_noir_violet : Mrshounka_cherokee_noir{};

    //jeep 오픈 2인승
    class max_jeep_green {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 400000;
        textures[] = {};
    };
    class max_jeep_red : max_jeep_green{};
    class max_jeep_black : max_jeep_green{};

    //벤츠 구형 스포츠카
    class Mrshounka_mercedes_190_p_civ {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 900000;
        textures[] = {};
    };

    //벤츠 c63 AMG 2015
    class Mrshounka_c63_2015_civ {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 3200000;
        textures[] = {};
    };

    //벤츠 스프린터
    class shounka_a3_pompier_sprinter {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 1000000;
        textures[] = {};
    };
    class shounka_a3_spr_civ : shounka_a3_pompier_sprinter{};

    //푸조 207 RC
    class Mrshounka_207_civ {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 290000;
        textures[] = {};
    };

    //골프 308 GTI 푸조
    class Mrshounka_a3_308_civ {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 370000;
        textures[] = {};
    };

    //포르쉐 카이엔
    class Mrshounka_cayenne_p_civ {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 1200000;
        textures[] = {};
    };

    //RENAULT 소형 해치백 2인승
    class Mrshounka_r5_noir {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 450000;
        textures[] = {};
    };
    class Mrshounka_r5_rose : Mrshounka_r5_noir{};

    // renault megane RS 2015  4인승 해치백 3도어
    class Mrshounka_megane_rs_2015_civ {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 400000;
        textures[] = {};
    };

    //renault twingo 해치백 4인승 소형
    class Mrshounka_twingo_p {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 250000;
        textures[] = {};
    };

    //벤츠 스마트 2인승
    class Mrshounka_a3_smart_civ {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 200000;
        textures[] = {};
    };
    class Mrshounka_a3_smart_civ_noir : Mrshounka_a3_smart_civ{};
    class Mrshounka_a3_smart_civ_bleu : Mrshounka_a3_smart_civ{};

    //SUV 5인승 맥스 - 파노라마선루프 SUV
    class max_suv_black {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };
    class max_suv_UC : max_suv_black{};

    //옛날 van 6인승
    class max_van_white {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 300000;
        textures[] = {};
    };
    class max_van_cola : max_van_white{};
    class max_van_Grey : max_van_white{};
    class max_van_red : max_van_white{};
    class max_van_blue : max_van_white{};
    class max_van_green : max_van_white{};

    //폭스바겐 투아렉 4인승 suv
    class Mrshounka_Volkswagen_Touareg_bleufonce {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 300000;
        textures[] = {};
    };

    //야마하 오토바이
    class Mrshounka_yamaha_p {
        vItemSpace = 20;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 240000;
        textures[] = {};
    };
    class Mrshounka_yamaha_p_noir : Mrshounka_yamaha_p{};
	
	//Donator Civ Vehicle
	//썰매
    class jean_sleigh {
        vItemSpace = 20;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 3300000;
        textures[] = {};
    };
	
	//몬스터트럭
	class A3L_MonsterTruck {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 2700000;
        textures[] = {};
    };
	
	//아제라 스포츠
	class Mrshounka_agera_p {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 5700000;
        textures[] = {};
    };
	class Mrshounka_agera_p_bleu : Mrshounka_agera_p{};
	class Mrshounka_agera_p_jaune : Mrshounka_agera_p{};
	
	//닷지 차져
	class max_charger_black {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 360000;
        textures[] = {};
    };
	class max_charger_blue : max_charger_black{};
	class max_charger_red : max_charger_black{};
	class max_charger_yellow : max_charger_black{};
	
	//LT sport
	class dbo_LT_01 {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 600000;
        textures[] = {};
    };
	
	//라이칸 하이퍼스포트
	class Mrshounka_lykan_c {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 6700000;
        textures[] = {};
    };
	
	//Flipcar
	class A3L_Flipcar {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 1700000;
        textures[] = {};
    };
	
	//롤스로이스 팬텀 검정 ( 대통령차)
	class max_vipcar {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 5100000;
        textures[] = {};
    };
	
	//쇼핑카
	class sga_shopping_cart {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };
	
	//쇼핑카 몬스터
	class sga_shopping_cart_monster {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 800000;
        textures[] = {};
    };
	
	//호버 보드
	class sga_hover_board {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 1000000;
        textures[] = {};
    };
	
	//Luxury Vehicle
	
	//1969 Dodge 슈퍼 비
	class SIG_SuperBeeB {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 400000;
        textures[] = {};
    };
	class SIG_SuperBee : SIG_SuperBeeB{};
	class SIG_SuperBeeY : SIG_SuperBeeB{};
	
	//아우디 RS4
	class Mrshounka_rs4_civ {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 750000;
        textures[] = {};
    };
	class Mrshounka_rs4_civ_bleufonce : Mrshounka_rs4_civ{};
	class Mrshounka_rs4_civ_orange : Mrshounka_rs4_civ{};
	
	//아우디 RS5
	class shounka_a3_rs5_civ {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 900000;
        textures[] = {};
    };
	class shounka_a3_rs5_civ_bleufonce : shounka_a3_rs5_civ{};
	class shounka_a3_rs5_civ_orange : shounka_a3_rs5_civ{};
	
	//아우디 RS6
	class shounka_rs6 {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 1000000;
        textures[] = {};
    };
	class shounka_rs6_bleufonce : shounka_rs6{};
	class shounka_rs6_orange : shounka_rs6{};
	
	//BMW 1 시리즈 M세단
	class Mrshounka_bmwm1_civ {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 400000;
        textures[] = {};
    };
	class Mrshounka_bmwm1_civ_noir : Mrshounka_bmwm1_civ{};
	class Mrshounka_bmwm1_civ_bleufonce : Mrshounka_bmwm1_civ{};
	class Mrshounka_bmwm1_civ_orange : Mrshounka_bmwm1_civ{};
	
	//BMW 세단 2인승  검정
	class max_BMW {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };
	class max_BMW1 : max_BMW{};
	class max_BMW2 : max_BMW{};
	
	//BMW  GTR3레이싱
	class max_BMW_M3_GTR {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 2100000;
        textures[] = {};
    };
	class max_BMW_M3_GTR1 : max_BMW_M3_GTR{};
	class max_BMW_M3_GTR2 : max_BMW_M3_GTR{};
	
	//BMW M 6
	class Mrshounka_bmwm6_civ {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 1200000;
        textures[] = {};
    };
	class Mrshounka_bmwm6_noir : Mrshounka_bmwm6_civ{};
	class Mrshounka_bmwm6_orange : Mrshounka_bmwm6_civ{};
	
	//시보레 몬스터 트럭
	class shounka_monsteur {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 3700000;
        textures[] = {};
    };
	class shounka_monsteur_noir : shounka_monsteur{};
	class shounka_monsteur_orange : shounka_monsteur{};
	
	//페라리 f430 스파이더
	class shounka_f430_spider {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 7700000;
        textures[] = {};
    };
	class shounka_f430_spider_noir : shounka_f430_spider{};
	class shounka_f430_spider_bleufonce : shounka_f430_spider{};
	class shounka_f430_spider_rouge : shounka_f430_spider{};
	class shounka_f430_spider_jaune : shounka_f430_spider{};
	class shounka_f430_spider_rose : shounka_f430_spider{};
	class shounka_f430_spider_grise : shounka_f430_spider{};
	class shounka_f430_spider_violet : shounka_f430_spider{};
	class shounka_f430_spider_orange : shounka_f430_spider{};
	
	//Ford gt 스포츠카
	class shounka_gt {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 700000;
        textures[] = {};
    };
	class shounka_gt_noir : shounka_gt{};
	class shounka_gt_bleufonce : shounka_gt{};
	class shounka_gt_rouge : shounka_gt{};
	class shounka_gt_jaune : shounka_gt{};
	class shounka_gt_rose : shounka_gt{};
	class shounka_gt_grise : shounka_gt{};
	class shounka_gt_violet : shounka_gt{};
	class shounka_gt_orange : shounka_gt{};
	
	//ford 머스탱
	class Mrshounka_mustang_civ {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 540000;
        textures[] = {};
    };
	class Mrshounka_mustang_mat : Mrshounka_mustang_civ{};
	class Mrshounka_mustang_noir : Mrshounka_mustang_civ{};
	class Mrshounka_mustang_mat_n : Mrshounka_mustang_civ{};
	class Mrshounka_mustang_bleufonce : Mrshounka_mustang_civ{};
	class Mrshounka_mustang_mat_b : Mrshounka_mustang_civ{};
	class Mrshounka_mustang_rouge : Mrshounka_mustang_civ{};
	class Mrshounka_mustang_jaune : Mrshounka_mustang_civ{};
	class Mrshounka_mustang_rose : Mrshounka_mustang_civ{};
	class Mrshounka_mustang_grise : Mrshounka_mustang_civ{};
	class Mrshounka_mustang_violet : Mrshounka_mustang_civ{};
	class Mrshounka_mustang_orange : Mrshounka_mustang_civ{};
	
	//험머 H1  //4인
	class Mrshounka_hummer_civ {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 1200000;
        textures[] = {};
    };
	class Mrshounka_hummer_civ_noir : Mrshounka_hummer_civ{};
	class Mrshounka_hummer_civ_orange : Mrshounka_hummer_civ{};
	
	//험머     H2 //4인
	class shounka_h2 {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 1100000;
        textures[] = {};
    };
	class shounka_h2_noir : shounka_h2{};
	class shounka_h2_orange : shounka_h2{};
	
	//람보르기니 가야르도
	class max_lambo {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 6700000;
        textures[] = {};
    };
	class max_lambo1 : max_lambo{};
	class max_lambo2 : max_lambo{};
	
	//람보르기니 우라칸 // huracan
	class mrshounka_huracan_c {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 8700000;
        textures[] = {};
    };
	class mrshounka_huracan_c_noir : mrshounka_huracan_c{};
	class mrshounka_huracan_c_bleufonce : mrshounka_huracan_c{};
	class mrshounka_huracan_c_rouge : mrshounka_huracan_c{};
	class mrshounka_huracan_c_jaune : mrshounka_huracan_c{};
	class mrshounka_huracan_c_rose : mrshounka_huracan_c{};
	class mrshounka_huracan_c_grise : mrshounka_huracan_c{};
	class mrshounka_huracan_c_violet : mrshounka_huracan_c{};
	class mrshounka_huracan_c_orange : mrshounka_huracan_c{};
	
	//람보르기니 베네노 veneno
	class Mrshounka_veneno_c {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 9000000;
        textures[] = {};
    };
	class Mrshounka_veneno_c_noir : Mrshounka_veneno_c{};
	class Mrshounka_veneno_c_bleu : Mrshounka_veneno_c{};
	class Mrshounka_veneno_c_jaune : Mrshounka_veneno_c{};
	
	//롤스로이스 팬텀 ( vip )  크롬색
	class max_vipcar1 {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 4700000;
        textures[] = {};
    };
	
	//아우디 리무진
	class shounka_limo_civ {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 6700000;
        textures[] = {};
    };
	class shounka_limo_civ_noir : shounka_limo_civ{};
	class shounka_limo_civ_bleufonce : shounka_limo_civ{};
	class shounka_limo_civ_orange : shounka_limo_civ{};
	
	//링컨 1969
	class Mrshounka_lincoln_civ {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 1000000;
        textures[] = {};
    };
	class Mrshounka_lincoln_noir : Mrshounka_lincoln_civ{};
	class Mrshounka_lincoln_grise : Mrshounka_lincoln_civ{};

	//맥라렌 mp4-12c
	class shounka_mp4 {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 7700000;
        textures[] = {};
    };	
	
	//벤츠 CLK
	class shounka_clk {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 2700000;
        textures[] = {};
    };
	
	//닛산 GTR 2012
	class Mrshounka_a3_gtr_civ {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 2000000;
        textures[] = {};
    };
	class Mrshounka_a3_gtr_civ_noir : Mrshounka_a3_gtr_civ{};
	class Mrshounka_a3_gtr_civ_bleu : Mrshounka_a3_gtr_civ{};
	
	//파가니 huayra
	class Mrshounka_pagani_c {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 5700000;
        textures[] = {};
    };
	class Mrshounka_pagani_c_noir : Mrshounka_pagani_c{};
	class Mrshounka_pagani_c_bleufonce : Mrshounka_pagani_c{};
	class Mrshounka_pagani_c_jaune : Mrshounka_pagani_c{};
	
	//푸조 308 오픈카 2인승
	class Mrshounka_a3_308_rcz {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 800000;
        textures[] = {};
    };
	class Mrshounka_a3_308_rcz_noir : Mrshounka_a3_308_rcz{};
	class Mrshounka_a3_308_rcz_bleufonce : Mrshounka_a3_308_rcz{};
	
	//푸조 508 세단
	class shounka_a3_peugeot508_civ_noir {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };
	class shounka_a3_peugeot508_civ_bleufonce : shounka_a3_peugeot508_civ_noir{};
	class shounka_a3_peugeot508_civ_rouge : shounka_a3_peugeot508_civ_noir{};
	
	//포르쉐 911
	class shounka_porsche911 {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 2700000;
        textures[] = {};
    };
	
	//포르쉐 911 92년식
	class mrshounka_92_civ {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 2100000;
        textures[] = {};
    };
	
	//옛날 머슬카 Transam 2인승
	class shounka_transam {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 600000;
        textures[] = {};
    };

	//UFO
    class max_CG_heli {
        vItemSpace = 50;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 10000000;
        textures[] = {};
    };

    //SWATVAN
    class max_swatvan {
        vItemSpace = 50;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 4000000;
        textures[] = {};
    };

    class B_T_VTOL_01_infantry_F {
         vItemSpace = 550;
         licenses[] = { {""}, {""}, {""}, {""} };
         price = 35000000;
         textures[] = {};
    };
    class B_T_VTOL_01_vehicle_F {
         vItemSpace = 550;
         licenses[] = { {""}, {""}, {""}, {""} };
         price = 42000000;
         textures[] = {};
    };

    class bv_gtr_spec_v_cop_patrol {
            vItemSpace = 50;
            licenses[] = { {"driver"}, {""}, {""}, {""} };
            price = 500000;
            textures[] = {};
        };
    class bv_caressa_gt_cop_patrol : bv_gtr_spec_v_cop_patrol{};
    class bv_458_cop_patrol : bv_gtr_spec_v_cop_patrol{};
    class bv_shelly_cop_patrol : bv_gtr_spec_v_cop_patrol{};
    class bv_the_crowner_cop_patrol : bv_gtr_spec_v_cop_patrol{};
    class bv_the_crowner_uc : bv_gtr_spec_v_cop_patrol{};
    class bv_the_crowner_cop_patrol_interceptor : bv_gtr_spec_v_cop_patrol{};
	class bv_the_crowner_cop_emt : bv_gtr_spec_v_cop_patrol{};
	class bv_the_crowner_cop_sher : bv_gtr_spec_v_cop_patrol{};
	class bv_e60_m5_cop_emt : bv_gtr_spec_v_cop_patrol{};
	class bv_e60_m5_cop_patrol : bv_gtr_spec_v_cop_patrol{};

	class shounka_harley_a3 {
	         vItemSpace = 100;
	         licenses[] = { {""}, {""}, {""}, {""} };
	         price = 30000000;
	         textures[] = {};
	    };

    class dbo_crosser {
		vItemSpace = 20;
		licenses[] = { {"driver"}, {""}, {""}, {""} };
		price = 300000;
		textures[] = {};
	};

    class sfp_wheelchair {
		vItemSpace = 100;
		licenses[] = { {"driver"}, {""}, {""}, {""} };
		price = 50000;
		textures[] = {};
	};
    class Skyline_Bus_01_F {
		vItemSpace = 300;
		licenses[] = { {"driver"}, {""}, {""}, {""} };
		price = 2500000;
		textures[] = {};
	};
};
