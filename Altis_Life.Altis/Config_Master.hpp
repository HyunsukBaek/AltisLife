#define true 1
#define false 0

/*
    Master settings for various features and functionality
*/
class Life_Settings {
/* Logging and Security Settings*/
    /* Security Settings */
    spyGlass_toggle = false; //Spyglass On/Off Toggle --> True = On & False = Off

    /* Data Logging Settings */
    battlEye_friendlyLogging = false; //Set to true if you plan to read the data in your BattlEye log files. Otherwise use the SERVER RPT.
    player_advancedLog = true; //Logs the following: Houses(purchase/sale), Vehicle(Purchase/Sale/Chopping), Cop Arrests and Gang Creations. SEARCH USING: advanced_log
    player_moneyLog = true; //Logs player and gang bank(deposits/withdrawals/transfers). Logs money picked up off the ground. Logs player robbery. SEARCH USING: money_log

/* Database Related Settings */
    /* Player Data Saving */
    save_virtualItems = true; //Save Virtual items (all sides)?
    saved_virtualItems[] = {"apple", "blastingcharge", "boltcutter", "cannabis", "catshark", "catshark_raw", "cement", "cocaine_processed", "cocaine_unprocessed", "coffee", "copper_refined", "copper_unrefined", "defusekit", "diamond_cut", "diamond_uncut", "donuts", "fuelEmpty", "fuelFull", "glass", "goat", "goat_raw", "goldbar", "hen", "hen_raw", "heroin_processed", "heroin_unprocessed", "iron_refined", "iron_unrefined", "lockpick", "mackerel", "mackerel_raw", "marijuana", "mullet", "mullet_raw", "oil_processed", "oil_unprocessed", "ornate", "ornate_raw", "peach", "pickaxe", "rabbit", "rabbit_raw", "redgull", "rock", "rooster", "rooster_raw", "salema", "salema_raw", "salt_refined", "salt_unrefined", "sand", "sheep", "sheep_raw", "spikeStrip", "tbacon", "tuna", "tuna_raw", "turtle_raw", "turtle_soup", "waterBottle", "toolkit", "defibrillator", "storageSmall", "storageBig"}; //Array of virtual items that can be saved on your player.
    save_playerStats = true; //Save food, water and damage (all sides)?
    save_civilian_weapons = true; //Allow civilians to save weapons on them?
    save_civilian_position = true; //Save civilian location?
    save_civilian_position_restart = true; //Save civilian location only between restarts. After a server restart you'll have to spawn again.
    /* !!!TO SAVE POSITION BETWEEN RESTARTS save_civilian_position MUST BE TRUE!!! */
    save_civilian_positionStrict = true; //Strip the player if possible combat-log?  WARNING: Server crashes and lack of reliable syncing can trigger this.

    /* Vehicle Data Saving */
    save_vehicle_virtualItems = true; //Save virtual items inside the vehicle (all sides)(-- See defined items on next line --)
    save_vehicle_items[] = {"apple", "blastingcharge", "boltcutter", "cannabis", "catshark", "catshark_raw", "cement", "cocaine_processed", "cocaine_unprocessed", "coffee", "copper_refined", "copper_unrefined", "defusekit", "diamond_cut", "diamond_uncut", "donuts", "fuelEmpty", "fuelFull", "glass", "goat", "goat_raw", "goldbar", "hen", "hen_raw", "heroin_processed", "heroin_unprocessed", "iron_refined", "iron_unrefined", "lockpick", "mackerel", "mackerel_raw", "marijuana", "mullet", "mullet_raw", "oil_processed", "oil_unprocessed", "ornate", "ornate_raw", "peach", "pickaxe", "rabbit", "rabbit_raw", "redgull", "rock", "rooster", "rooster_raw", "salema", "salema_raw", "salt_refined", "salt_unrefined", "sand", "sheep", "sheep_raw", "spikeStrip", "tbacon", "tuna", "tuna_raw", "turtle_raw", "turtle_soup", "waterBottle", "toolkit", "defibrillator", "storageSmall", "storageBig"};// define which virtual items to save in vehicles.
    save_vehicle_inventory = true; //Save Arma inventory of vehicle to the database
    save_vehicle_fuel = true; //Save vehicle fuel level to the database (Impounded/Garaged).
    save_vehicle_damage = true; //Save vehicle damage to the database.
    save_vehicle_illegal = true; //This will allow cops to be advised when a vehicle, with illegal items in it, is impounded. This will also save illegal items as proof of crime, and needs "save_vehicle_virtualItems" set as true. Illegal items don't need to be set in save_vehicle_items[] for being saved, if it's enabled.


/* System Settings */
    /* ATM & Federal Reserve System Configurations */
    global_ATM = true; //Allow users to access any ATM on the map (Marked & Unmarked).
    noatm_timer = 10; //Time in minutes that players cannot deposit money after selling stolen gold.
    minimum_cops = 5; //Minimum cops required online to rob the Federal Reserve

    /* Basic System Configurations */
    donor_level = false; //Enable the donor level set in database (var = life_donorlevel; levels = 0,1,2,3,4,5). ATTENTION! Before enabling, read: https://www.bistudio.com/community/game-content-usage-rules & https://www.bistudio.com/monetization
    enable_fatigue = true; //Set to false to disable the ARMA 3 fatigue system.
    total_maxWeight = 32; //Static variable for the maximum weight allowed without having a backpack
    respawn_timer = 60; //How many seconds a player should wait, before being able to respawn.

    /* Clothing System Configurations */
    civ_skins = true; //Enable or disable civilian skins. Before enabling, you must add all the SEVEN files to textures folder. (It must be named as: civilian_uniform_1.jpg, civilian_uniform_2.jpg...civilian_uniform_6.jpg, civilian_uniform_7.jpg)
    cop_extendedSkins = false; //Enable or disable cop skins by level. Before enabling, you must add all the EIGHT files to textures folder. (It must be named as: cop_uniform.jpg + cop_uniform_1.jpg, cop_uniform_2.jpg...cop_uniform_6.jpg, cop_uniform_7.jpg; meaning cop_uniform = life_coplevel=0, cop_uniform_1 = life_coplevel=1, cop_uniform_2 = life_coplevel=2, etc...)
    clothing_noTP = true;  //Disable clothing preview teleport? (true = no teleport. false = teleport)
    clothing_box = true; //true = teleport to a black box. false = teleport to somewhere on map. (It only affects the game if clothing_noTP is set as false)
    clothing_masks[] = { "H_Shemag_olive", "H_Shemag_khk", "H_Shemag_tan", "H_Shemag_olive_hs", "H_ShemagOpen_khk", "H_ShemagOpen_tan", "G_Balaclava_blk", "G_Balaclava_combat", "G_Balaclava_lowprofile", "G_Balaclava_oli", "G_Bandanna_aviator", "G_Bandanna_beast", "G_Bandanna_blk", "G_Bandanna_khk", "G_Bandanna_oli", "G_Bandanna_shades", "G_Bandanna_sport", "G_Bandanna_tan", "U_O_GhillieSuit", "U_I_GhillieSuit", "U_B_GhillieSuit", "H_RacingHelmet_1_black_F", "H_RacingHelmet_1_red_F", "H_RacingHelmet_1_white_F", "H_RacingHelmet_1_blue_F", "H_RacingHelmet_1_yellow_F", "H_RacingHelmet_1_green_F", "H_RacingHelmet_1_F", "H_RacingHelmet_2_F", "H_RacingHelmet_3_F", "H_RacingHelmet_4_F" };

    /* Fuel System Configurations */
    pump_service = false; //Allow users to use pump service on the map. Default = false
    fuel_cost = 120; //Cost of fuel per liter at fuel stations (if not defined for the vehicle already).
    service_chopper = 1000; //Cost to service chopper at chopper service station(Repair/Refuel).

    /* Gang System Configurations */
    gang_price = 85000; //Gang creation price. --Remember they are persistent so keep it reasonable to avoid millions of gangs.
    gang_upgradeBase = 20000; //The base cost for purchasing additional slots in a gang
    gang_upgradeMultiplier = 2.5; //CURRENTLY NOT IN USE

    /* Housing System Configurations */
    house_limit = 5; //Maximum number of houses a player can own.

    /* Hunting & Fishing System Configurations */
    animaltypes_fish[] = { "Salema_F", "Ornate_random_F", "Mackerel_F", "Tuna_F", "Mullet_F", "CatShark_F", "Turtle_F" }; //Classnames of fish you can catch
    animaltypes_hunting[] = { "Sheep_random_F", "Goat_random_F", "Hen_random_F", "Cock_random_F", "Rabbit_F" }; //Classnames of aniamls you can hunt/gut

    /* Item-related Restrictions */
    restrict_medic_weapons = false; //Set to false to allow medics to use any weapon --true will remove ANY weapon they attempt to use (primary,secondary,launcher)
    restrict_clothingPickup = false; //Set to false to allow civilians to pickup/take any uniform (ground/crates/vehicles)
    restrict_weaponPickup = false; //Set to false to allow civilians to pickup/take any weapon (ground/crates/vehicles)
    restricted_uniforms[] = { "U_Rangemaster", "U_B_CombatUniform_mcam", "U_B_CombatUniform_mcam_tshirt", "U_B_CombatUniform_mcam_worn", "U_B_survival_uniform" };
    restricted_weapons[] = { "" };

    /* Jail System Configurations */
    jail_seize_vItems[] = { "spikeStrip","lockpick","goldbar","blastingcharge","boltcutter","defusekit","heroin_unprocessed","heroin_processed","cannabis","marijuana","cocaine_unprocessed","cocaine_processed","turtle_raw" }; //Define VIRTUAL items you want to be removed from players upon jailing here. Use "jail_seize_inventory" for Arma inventory items.
    jail_seize_inventory = false; //Set to true to run the cop seize script on inmates. False will remove only weapons and magazines otherwise. (Basically used in case cops forget to seize items). [See Lines 106-111 below]

    /* Medical System Configurations */
    revive_cops = true; //true to enable cops the ability to revive everyone or false for only medics/ems.
    revive_fee = 25000; //Revive fee that players have to pay and medics only EMS(independent) are rewarded with this amount.
    hospital_heal_fee = 1000; //Fee to heal at a hospital NPC

    /* Paycheck & Bank System Configurations */
    bank_cop = 100000; //Amount of cash in bank for new cops
    bank_civ = 100000; //Amount of cash in bank for new civillians
    bank_med = 100000; //Amount of cash in bank for new medics

    paycheck_period = 5; //Scaled in minutes
    paycheck_cop = 8000; //Payment for cops
    paycheck_civ = 1200; //Payment for civillians
    paycheck_med = 7000; //Payment for medics

    /* Player Job System Configurations */
    delivery_points[] = { "dp_1", "dp_2", "dp_3", "dp_4", "dp_5", "dp_6", "dp_7", "dp_8", "dp_9", "dp_10", "dp_11", "dp_12", "dp_13", "dp_14", "dp_15", "dp_15", "dp_16", "dp_17", "dp_18", "dp_19", "dp_20", "dp_21", "dp_22", "dp_23", "dp_24", "dp_25", "dp_26", "dp_27" };
    fuelTank_winMultiplier = 1; //Win Multiplier in FuelTank Missions. Increase for greater payout. Default = 1

    /* Search & Seizure System Configurations */
    seize_exempt[] = { "Binocular", "ItemWatch", "ItemCompass", "ItemGPS", "ItemMap", "NVGoggles", "FirstAidKit", "ToolKit", "Chemlight_red", "Chemlight_yellow", "Chemlight_green", "Chemlight_blue", "optic_ACO_grn_smg", "hgun_P07_snds_F", "hgun_Pistol_heavy_02_F", "hgun_ACPC2_F", "hgun_PDW2000_F" }; //Arma items that will not get seized from player inventories
    seize_uniform[] = { "U_Rangemaster" }; //Any specific uniforms you want to be seized from players
    seize_vest[] = { "V_TacVest_blk_POLICE", "V_HarnessOGL_gry" }; //Any specific vests you want to be seized from players
    seize_headgear[] = { "H_Cap_police" }; //Any hats or helmets you want seized from players
    seize_minimum_rank = 2; //Required minimum CopLevel to be able to seize items from players

    /* Vehicle System Configurations */
    chopShop_vehicles[] = { "Car", "Air" }; //Vehicles that can be chopped. (Can add: "Ship" and possibly more -> look at the BI wiki...)
    vehicle_infiniteRepair = false; //Set to true for unlimited repairs with 1 toolkit. False will remove toolkit upon use.
    vehicleShop_rentalOnly[] = { "B_G_Offroad_01_armed_F" }; //Vehicles that can only be rented and not purchased. (Last only for the session)

        /* Vehicle Purchase Prices */
        vehicle_purchase_multiplier_CIVILIAN = 1; //Civilian Vehicle Buy Price = Config_Vehicle price * multiplier
        vehicle_purchase_multiplier_COP = 5; //Cop Vehicle Buy Price = Config_Vehicle price * multiplier
        vehicle_purchase_multiplier_MEDIC = 1; //Medic Vehicle Buy Price = Config_Vehicle price * multiplier
        vehicle_purchase_multiplier_OPFOR = -1; // -- NOT IN USE -- Simply left in for east support.

        /* Vehicle Rental Prices */
        vehicle_rental_multiplier_CIVILIAN = .80; //Civilian Vehicle Rental Price = Config_Vehicle price * multiplier
        vehicle_rental_multiplier_COP = .3; //Cop Vehicle Rental Price = Config_Vehicle price * multiplier
        vehicle_rental_multiplier_MEDIC = .55; //Medic Vehicle Rental Price = Config_Vehicle price * multiplier
        vehicle_rental_multiplier_OPFOR = -1; // -- NOT IN USE -- Simply left in for east support.

        /* Vehicle Sell Prices */
        vehicle_sell_multiplier_CIVILIAN = .75; //Civilian Vehicle Garage Sell Price = Vehicle Buy Price * multiplier
        vehicle_sell_multiplier_COP = .75; //Cop Vehicle Garage Sell Price = Vehicle Buy Price * multiplier
        vehicle_sell_multiplier_MEDIC = .75; //Medic Vehicle Garage Sell Price = Vehicle Buy Price * multiplier
        vehicle_sell_multiplier_OPFOR = -1; // -- NOT IN USE -- Simply left in for east support.

        /* "Other" Vehicle Prices */
        vehicle_chopShop_multiplier = .25; //Chop Shop price for vehicles. TO AVOID EXPLOITS NEVER SET HIGHER THAN A PURCHASE/RENTAL multipler!   Payout = Config_vehicle Price * multiplier
        vehicle_storage_fee_multiplier = .05; //Pull from garage cost --> Cost takes the playersides Buy Price * multiplier
        vehicle_cop_impound_multiplier = .025; //TO AVOID EXPLOITS NEVER SET HIGHER THAN A PURCHASE/RENTAL multipler!   Payout = Config_vehicle Price * multiplier

/* Wanted System Settings *
    /* crimes[] = {String, Bounty, Code} */
    crimes[] = {
        {"STR_Crime_187V","50000","187V"}, //로드킬
        {"STR_Crime_187","80000","187"}, //살인
        {"STR_Crime_901","50000","901"}, //탈옥
        {"STR_Crime_215","5000","215"}, //차량절도시도
        {"STR_Crime_213","60000","213"}, //불법폭탄물사용
        {"STR_Crime_211","30000","211"}, //강도
        {"STR_Crime_207","40000","207"}, //납치
        {"STR_Crime_207A","20000","207A"}, //납치미수
        {"STR_Crime_487","40000","487"}, //절도
        {"STR_Crime_488","10000","488"}, //절도 잡범
        {"STR_Crime_480","5000","480"}, //폭행 도주
        {"STR_Crime_481","20000","481"}, //불법물품소지
        {"STR_Crime_483","100000","483"}, // 마약 밀매
        {"STR_Crime_390","15000","390"}, //마약 흡입
        {"STR_Crime_482","5000","482"}, // 공갈
        {"STR_Crime_459","65000","459"}, //빈집 털이
        {"STR_Crime_666","20000","666"}, //탈세
        {"STR_Crime_667","300000","667"}, //테러범
        {"STR_Crime_668","65000","668"}, //밀렵
        {"STR_Crime_1","5000","1"}, // 무면허운전
        {"STR_Crime_2","2000","2"},//비도로운전
        {"STR_Crime_3","1500","3"},//신호위반
        {"STR_Crime_4","10000","4"},//과속
        {"STR_Crime_5","10000","5"}, //야간주행 헤드라이트 미사용
        {"STR_Crime_6","8000","6"}, //헬멧미착용-카트
        {"STR_Crime_7","5000","7"}, //불법주차
        {"STR_Crime_8","25000","8"}, //반군차량소지
        {"STR_Crime_9","25000","9"}, //시민차량절도
        {"STR_Crime_10","75000","10"}, //경찰차량절도
        {"STR_Crime_11","100000","11"},//무장차량소지
        {"STR_Crime_12","25000","12"},//무허가 마을상공 비행
        {"STR_Crime_13","15000","13"}, //욕설 비속어 사용
        {"STR_Crime_14","15000","14"}, //마을내 무기 소지
        {"STR_Crime_15","50000","15"}, //반군무기 소지
        {"STR_Crime_16","15000","16"}, //불법 의상 착용
        {"STR_Crime_17","5000","17"}, //닉네임숨김(가면)
        {"STR_Crime_18","20000","18"}, //공무집행 협조거부
        {"STR_Crime_19","15000","19"},//폭행 도주
        {"STR_Crime_20","5000","20"}, //시민모욕
        {"STR_Crime_21","30000","21"}, //경찰모욕
        {"STR_Crime_22","100000","22"}, //마약판매
        {"STR_Crime_23","500000","23"}, //연방은행절도
        {"STR_Crime_24","80000","24"}, //시민살인
        {"STR_Crime_25","100000","25"} // 경찰살인
    };
};

#include "Config_Clothing.hpp"
#include "Config_Licenses.hpp"
#include "Config_Vehicles.hpp"
#include "Config_vItems.hpp"
#include "Config_Weapons.hpp"
#include "Config_Gather.hpp"
#include "Config_SpawnPoints.hpp"
#include "Config_Process.hpp"
