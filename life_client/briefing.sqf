waitUntil {!isNull player && player isEqualTo player};
if (player diarySubjectExists "controls") exitWith {};

player createDiarySubject ["credits","Intro"];
player createDiarySubject ["changelog","History"];
player createDiarySubject ["serverrules-KOR","General Rules"];
player createDiarySubject ["serverrules-ENG","General Rules"];
player createDiarySubject ["serverrules-JPN","General Rules"];
player createDiarySubject ["policerules","Police Procedures/Rules"];
player createDiarySubject ["safezones","Safe Zones (No Killing)"];
//player createDiarySubject ["civrules","Civilian Rules"];
//player createDiarySubject ["illegalitems","Illegal Activity"];
//player createDiarySubject ["gangrules","Gang Rules"];
//player createDiarySubject ["terrorrules","Terrorism Rules"];
player createDiarySubject ["controls","Controls"];

/*  Example
    player createDiaryRecord ["", //Container
        [
            "", //Subsection
                "
TEXT HERE<br/><br/>
                "
        ]
    ];
*/

	player createDiaryRecord ["credits",
		[
			"AOSoul",
				"
<br/>이 서버는 국내 최대, 최고의 아르마3 라이프 RPG모드입니다. <br/>
데이터가 저장되며 365일 24시간 운영을 원칙으로 합니다. <br/><br/>

2016년 2월 오픈부터 정식 오픈 한 이후로 현재 8월 까지 6개월 넘는 기간 동안 (베타기간을 제외) <br/> 
단 한번의 백섭 또는 서버 데이터 초기화한 적이 없으며 서버 비 운영 시간이 6개월동안 총합 1주일이 되지 않습니다. <br/>
국내 간헐적으로 생기는 타 라이프 모드보다 안정성, 유지보수성 그리고 컨텐츠의 다양성이 훨씬 높다 자부합니다. <br/>
또한 탄탄한 관리자 및 유저분들 덕분에 그 어떤 서버보다 내실있게 꾸준히 운영되고 있습니다. <br/><br/>

PVP, 저격질, 장비질 보단 상황에 따른 역할극(RPG)을 플레이하는 LIFE서버입니다. (pvp 아닙니다!!)<br/>
누군가를 사살하거나 강도짓을 할 때, 그에 따른 상황을 만들어야지만 제재받지 아니합니다.<br/>
제 2의 라이프를 본 서버에서 느끼며 재미와 힐링하는 시간 가지길 바랍니다. <br/>
유머게시판에  재밌는 RP플레이 영상있으니 참고하세요<br/><br/>
				"
		]
	];

    player createDiaryRecord["changelog",
        [
            "AOSoul Life",
                "
홈페이지 http://cafe.naver.com/alflrss<br/><br/>
2016.2 Soul Life 오픈<br/>
2016.3 국내 최대 IDC로 서버 영구임대 <br/>
2016.4 최고 동시접속인원 70명 돌파<br/>
2016.4 휴식기에 있던 AOS 서버( 2년의 운영 노하우) 와 합병하여 AOS + Soul 의 합성어인 The AOSoul Life 로 카페/서버 통합<br/>
2016.5 최고 동접 80명 돌파 <br/>
2016.6 서버 업그레이드<br/>
2016.6 테스크포스 애로우헤드 라디오(TFAR) 애드온 도입 <br/>
2016.7 기부자 모집 및 애드온 적용 <br/>
2016.7 특별 사면 <br/>
2016.7 서버접속 GUID 5000명 돌파<br/><br/>
                "
        ]
    ];

    player createDiaryRecord["changelog",
        [
            "Server Change Log",
                "
This section is meant for people doing their own edits to the mission, DO NOT REMOVE THE ABOVE.<br/><br/>
                "
        ]
    ];

	player createDiaryRecord ["serverrules-KOR",
        [
            "server rule - Korean",
                "
서버 공통 규칙<br/><br/>
아래 사항을 위반 시 1차 경고 - 2차   1일~7일 밴  - 3차 영구밴 입니다.  <br/>
1. 기본적인 매너가 부족한 사람, 서버운영에 방해된다고 판단되는 사람은 어드민이 제재할 수 있습니다. <br/>
2. 핵사용 및 어뷰징 (버그 악용 행위 ) 바로 3차 처리. <br/>
3. SIDE CHANNEL로 보이스/비매너챗  <br/>
4. 경찰한테 체포/도주 시 고의 Disconnect<br/>
5. NON RP 살인 (2차 영구 밴)<br/>
6. 유저간 대화창에서 분쟁/비매너 채팅 시 --> 유저간 불만/건의사항은 증빙자료와 함께 비매너/건의 게시판 등록 <br/>
7. Administrator, User 등의 닉네임 사용 ( 1차 킥 ) <br/>
8. 밴딧만을 주 목적으로 하는 유저, 뉴비에게 강도질하는 유저는 [RP여부 상관없이] 제재될 수 있음<br/>
9. 위험지역에서는 경찰 VS 시민(갱) 존재 자체로 RP 인정되며 사살/교전 가능합니다. 그러나 불법행위를 걸려서 체포당하고 벌금내시는것이, 경찰을 사살하시는것보단 라이프 서버에서 플레이하시기 수월하실것이기에 이 방법을 추천드립니다. ( 불법행위 체포-벌금이 경찰살인 죄 벌금보다 적습니다. 경찰 살인죄의 경우 벌금을 더 높이도록 하겠습니다.) 경찰 살인 시 자동으로 수배 목록에 경찰살인 으로 들어가며 공소시효는 아직 무기한입니다. <br/><br/>
10. 위험지역에서 갱전쟁 선포된 갱끼리는 RP 없이 사살/교전 가능하나, 일반 시민끼리는 RP가 당연히 필요합니다. <br/>
11. Battle zone 에서는 어떠한 RP 없이 사살가능합니다. <br/>
12. 세이프존 내에서 (딱밤때리기, 강도, 살인, 로드킬)등 모든 범죄행위 불가능합니다. 세이프존은 말그대로 세이프존입니다. (위반 시 킥 되시며 경고1회 부여합니다) 경고 누적시 밴처리 <br/>
13. 시민들은 세이프존 상공위를 경찰의 허가없이 비행할 수 없습니다. ( 메딕은 구조활동에만 가능합니다.)<br/>
14. 세이프존 상공 미허가 운행시 경고없이 사격, 격추될 수 있습니다. 그 어떠한 피해는 보상받지 아니합니다.<br/>
15. 세이프존 내에 있는 에어가라지 사용시 이착륙만 허가합니다. 에어가라지에서 헬기 소환시 즉시 세이프존을 이탈하여야합니다. <br/>
16,. 위 사항에 대하여 신고당할 시 이유 불문하고 - 경고 - 1~7일밴 - 영구밴 처리합니다. <br/>
 뉴비 기준 : 서버 접속 시간 10시간 이내, 가방 없이 기본 복장인경우(뉴비로 취급)<br/>
 비 뉴비 기준 : 60만원 보다 비싼 차량 보유시, 은행 잔고00만원 이상 시, 반군 총 들고 있을 시<br/><br/>
                "
        ]
    ];

	player createDiaryRecord ["serverrules-ENG",
        [
            "server rule - English",
                "
Violations of these rules 1st. Warning - 2nd. 1Week Ban - 3rd. Permanent Ban<br/><br/>
 People lacking basic manners, People believe that interferes with server operating <br/>
 Use Hack and Abusing (Bug Abuse acts) is Permanent Ban<br/>
 Use Voice in Side Channel and no manners chat in Side Channel<br/>
 When arrested / escape the cops intentional Disconnect<br/>
 NON RP murder (1st. Warning or 1Week Ban 2nd. Permanent Ban )<br/><br/>

1.	If the police officer have lights and sirens on, you must stop your vehicle. Disobeying the officer could result in getting arrested and even shot in illegal/dangerous areas. <br/>
2.	Possession of illegal weaponry will result in fines and impoundment. (Illegal weaponry refers to ALL weapons apart from pistols and PDW<br/>
3.	Trespassing police station is strictly illegal. Violation for the 1st, 2nd, and 3rd time will result in fine, arrest/imprisonment, server ban respectively.<br/>
4.	Repeating same criminal activity within 10 min after being arrested or killed for engaging in the criminal activity will result in penalties from the server admin <br/>
5.	Robbery/Murder/Kidnapping/Use of Drugs/Theft/Assault as a part of RP will result in Arrest/Fine/Imprisonment<br/>
6.	Intentional run-overs by vehicle (or roadkill) will be penalized. Violation for the 1st and 2nd time will result in warning (including arrest/fine) and server kick/ban respectively (yet, it is allowed if part of self-defense in certain situations)<br/>
7.	Not holstering pistol or holding a rifle in the back will result in arrest/fine<br/>
8.	Purposefully throwing yourself in front of vehicles to get killed or hurt will be penalized. Violation for the 1st and 2nd time will result in arrest/imprisonment and admin-side action respectively <br/>
9.	Rules on illegal/dangerous areas : Drug fields / Gang areas / Rebel Outpost / Drug Dealers / Turtle Dealer / Gold Bar Buyer <br/>
- 	Players could be arrested or searched without any prior warning in areas mentioned above<br/>
o	Disobeying officers may get you shot at and killed in areas mentioned above<br/>
o	Gun fights may occur in these areas, yet they will be considered as RP<br/>
o	Players could be subjected to various penalties including fines, arrest, and impoundment.<br/>
o	Players with the sole purpose of playing as rebels may be penalized.<br/>
o	All weaponry/drugs will be taken away when arrested in drug-related areas. Expect to be given tickets as well. <br/>
10.	Taking police/medic vehicle in police stations/hospitals is forbidden. They, however, can be taken as a RP when parked outside aforementioned areas. Violation for the 1st, 2nd, and 3rd time will result in warning, 1-week ban, and permanent ban respectively. <br/><br/>
                "
        ]
    ];

	
	player createDiaryRecord ["serverrules-JPN",
        [
            "server rule - Japanese",
                "
この サーバーは arma3 LIFE RPG モード です。<br/>
データは保存され、365日24時間運営しています。<br/>
状況に応じた 役割劇(RP と呼びます) をプレイするLIFEサーバーです。<br/>
誰かを射殺したり、強盗をするときは、それに伴う状況を作らなければなりません。<br/>
AOSoul serverで楽しんで遊んでください！<br/><br/><br/>
サーバ 共通のルール*<br/>
以下の注意事項を破ると<br/>
1回目　警告 2回目 1週間 ban 3回目 永遠 ban<br/>
上記のペナルティが課せられます。<br/><br/>
1.基本的なマナーを守れない人、サーバーの運営を妨害する人は、運営陣で判断した後、BANされます。<br/>
2.チートツール使用と、バグを悪用した人は、永久BANされます。 <br/>
3.SIDE CHANNELでのボイスチャット/マナーの守れていないチャット (SIDE CHANNELではチャットは可能ですが、マイクを使用しないでください)<br/>
4.警察からの逃走中・連行中の意図的なDissconect<br/>
5.警告なしの無差別殺人(2回目で永久BAN)<br/>
6.ユーザー間での、非マナーチャット <br/>
7. Administrator,User等のニックネームを使用すると、kickされる恐れがあります。<br/>
8.殺人/強盗だけを目的とするユーザ・新規ユーザーを狙って強盗するユーザはkickされることがあります。<br/>
9.SAFE ZONEでの轢殺・ミスの場合は、当事者間で解決してください。<br/>
10.SAFE ZONEでの強盗は、新規ユーザーを除いて可能です。<br/>
11.危険地域では、警察vs市民(ギャング)のRDMが許可されています。<br/>
12.危険地域でのギャング戦争は、宣言したギャング同士のみ、RDMが可能です<br/>
13.BATTLE ZONEではいかなる場合でも、RDMが可能です。<br/><br/>
                "
        ]
    ];
    player createDiaryRecord["safezones",
        [
            "Safe Zones",
                "
If bombing (bombing can be intentionally exploding a vehicle), robbing, or killing occurs around these or in these areas it is punishable by ban.<br/><br/>
Any vehicle spawn (shop or garage)<br/>
Any weapon shop<br/>
All Police HQs<br/>
Rebel Outposts<br/><br/>
                "
        ]
    ];


    player createDiaryRecord ["serverrules",
        [
            "Bannable Offenses",
                "
Consider this your one and only warning.<br/><br/>
1. Hacking<br/>
2. Cheating<br/>
3. Exploiting (See 'Exploits')<br/>
4. Being kicked 3 or more times.<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["serverrules",
        [
            "Cop Interaction",
                "
Items on this list may result in your removal from the server and/or ban, based on the admins discretion.<br/><br/>
1. Civilians can be arrested for looking in cops' backpacks/vehicles. Constantly doing this will result in your removal from the server.<br/>
2. Civilians can be arrested for following cops in game in order to give away their position.<br/>
3. Civilians or Rebels who take up arms to kill cops in town or elsewhere for no RP reason will be considered RDMing. See RDMing section.<br/>
4. Following and or harassing cops for long periods of time will be considered griefing and/or spamming, and will result in your removal from the server.<br/>
5. Actively blocking cops from doing their duties can lead to your arrest. Constantly doing this will result in your removal from the server.<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["serverrules",
        [
            "Boats",
                "
Items on this list may result in your removal from the server and/or ban, based on the admins discretion.<br/><br/>
1. Repeatedly pushing boats without permission.<br/>
2. Pushing a boat with the intention of hurting or killing someone. This is not RP, it is just a flaw in the mechanics.<br/>
3. Purposefully running over swimmers/divers.<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["serverrules",
        [
            "Aviation",
                "
Items on this list may result in your removal from the server and/or ban, based on the admins discretion.<br/><br/>
1. Purposefully ramming a helicopter into anything. Other helicopters, vehicles, buildings.<br/>
2. Flying below 150m over the city constantly. Once is illegal, more than that you risk crashing into the city, thus against server rules.<br/>
3. Stealing helicopters without proper warning and significant time for the driver to lock the vehicle. If they land and run away without locking, fine, if they just get out and you get in before they get a chance to lock it, no no.<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["serverrules",
        [
            "Vehicles",
                "
Items on this list may result in your removal from the server and/or ban, based on the admins discretion.<br/><br/>
1. Purposefully running people over (VRDM). There are accidents, and then there is going out of your way to run someone over.<br/>
2. Purposefully throwing yourself in front of vehicles in order to die/get hurt.<br/>
3. Ramming into other vehicles in order to cause an explosion.<br/>
4. Constantly trying to enter vehicles that do not belong to you in order to grief the vehicle owner, and not trying to RP.<br/>
5. Stealing a vehicle just to crash it or otherwise destroy it.<br/>
6. Purchasing multiple vehicles for the purpose of doing any of the above.<br/>
7. The only reason for shooting at a vehicle would be to disable it and/or fire warning shots in a role-play scenario.You are not to deliberately destroy enemies vehicles.<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["serverrules",
        [
            "Communication Rules",
                "
Items on this list may result in your removal from the server and/or ban, based on the admins discretion.<br/><br/>
1. Side Chat may not be used to play music or otherwise micspam.<br/>
2. Spamming any chat channel will result in your removal.<br/>
4. Teamspeak channels are split up into areas for a reason. Cops must be in the cop channels at all times.<br/>
5. Civilians cannot be in any cop channels on teamspeak in order to gather information on their location or movements. Civs caught doing this will be removed the channel. Repeat offenders can be kicked or banned from both the game and teamspeak.<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["serverrules",
        [
            "Random Deathmatching (RDM)",
                "
Items on this list may result in your removal from the server and/or ban, based on the admins discretion.<br/><br/>
1. Killing anyone without a roleplay cause.<br/>
2. Declaring a rebellion is not a cause to kill anyone, even cops.<br/>
3. Cops and civilians/rebels can only commence in a shootout if there are reasons relating to a crime.<br/>
4. If you are killed in the crossfire of a fight, it is not RDM.<br/>
5. Killing someone in an attempt to protect yourself or others is not RDMing.<br/>
6. Shooting a player without giving reasonable time to follow demands is considered RDM.<br/><br/>
These are all judged by admins on a case by case basis.<br/><br/>
                "
        ]
    ];
    player createDiaryRecord ["serverrules",
        [
            "New Life Rule",
                "
The New Life Rule applies to police and civilians.<br/><br/>
Items on this list may result in your removal from the server and/or ban, based on the admins discretion.<br/><br/>
1. If you are killed you must wait 15 minutes before returning to the scene of your death.<br/>
2. If you die during roleplay your past crimes are forgotten, but you also cannot seek revenge.<br/>
3. If you are RDM'd, it is not a new life.<br/>
4. If you manually respawn, it is not a new life.<br/>
5. If you purposefully kill yourself to avoid roleplay, it is not a new life.<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["serverrules",
        [
            "Don't Be A Dick!",
                "
If an admin has to tell you that you are being a dick, you are doing dickish things.<br/>
Causing others grief, disrupting roleplay, the list goes on.<br/>
Just don't be a dick okay?<br/>
This rule may be invoked at an admin's discretion.<br/><br/>
                "
        ]
    ];

// Police Section
    player createDiaryRecord ["policerules",
        [
            "Crisis Negotiation",
                "
Crisis Negotiation must be handled by a Sergeant. If one is not available, the person with the next highest rank must handle the situation.<br/><br/>
                "
        ]
    ];
    player createDiaryRecord ["policerules",
        [
            "The Federal Reserve",
                "
1. The Federal Reserve is illegal for civilians to enter, unless they have been given authorization. If civilians enter without authorization they are to be escorted off-site or arrested if they persist.
2. Helicopters flying over the Federal Reserve may be asked to leave and disabled if they refuse.<br/>
3. If the Federal Reserve is getting robbed, it is encouraged that all available officers move in to stop it.<br/>
4. Nearby officers should immediately head to the Federal Reserve to assist. Petty crimes can be dropped during a robbery.<br/>
5. Lethal force on bank robbers may be used if no other alternative is available. Every option to taze and arrest the person should be made first.<br/>
6. Police may not fire blindly into the building.<br/>
7. The police should evacuate the civilians from the building during a robbery.<br/>
8. Any civilian who actively makes an attempt to block the police from entering the building may be treated as an accomplice.<br/>
9. Supervisory officers may hire individuals or contract a group of people to work as security guards for the bank. See 'Contracting' section for more information.<br/><br/>
                "
        ]
    ];
    player createDiaryRecord ["policerules",
        [
            "Aviation",
                "
1. No helicopter can land within city limits without authorization from the highest ranking officer online. (Exceptions being what is listed below.)<br/>
Kavala: The hospital helipad (037129) or docks (031128).<br/>
Athira: The sports field (138185) or behind the DMV (140188).<br/>
Pyrgos: The fields North/East of DMV (170127)<br/>
Sofia: Opposite the car shop (258214) or the fields Southeast of the garage (257212)<br/>
Small towns: An appropriate location may be chosen. This is to be judged by officers on a case by case basis.<br/><br/>
2. Helicopters may not land on roads.<br/>
3. Police may temporarily forbid landing at  but it cannot remain closed for a long period of time.<br/>
4. Helicopters cannot fly below 150m over the city without authorization.<br/>
5. Helicopters cannot hover over the city. Cops may only hover over the city if there is an active police operation going on.<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["policerules",
        [
            "Illegal Areas",
                "
1. Gang areas are not considered illegal. Thus a cop may enter without a raid, but may not restrain or stop anyone inside without probable cause/illegal activity. (Talking to the gang NPC is NOT probable cause/illegal activity.)<br/>
2. Do not enter an illegal area unless it is part of a raid. see Raiding/Camping.<br/>
3. If you chase someone into an illegal area, call for backup.<br/>
4. Under no circumstances is an officer allowed to camp any illegal area.<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["policerules",
        [
            "Patrolling",
                "
1. Police may patrol the island's roads and towns searching for abandoned vehicles and criminal activity.<br/>
2. Patrols can be done on foot inside of a town, or in a vehicle when outside.<br/>
3. Patrols do not include illegal areas. See Raiding/Camping.<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["policerules",
        [
            "Checkpoints",
                "
Cops are encouraged to setup checkpoints in strategic areas to help combat illegal activity and promote safety on the road.<br/><br/>
1. A checkpoint must consist of 3 or more officers, utilizing 2 or more vehicles. An ATV does not count as one of the required vehicles, but may still be used.<br/>
2. A checkpoint can not be setup within 300m of an illegal area. Basically, you cannot set one up on top of an illegal area.<br/>
3. Checkpoints may only be setup on roads, but it does not have to be on a crossroad.<br/>
4. Checkpoints do not have to be marked on the map.<br/><br/>
Proper Checkpoint Procedure:<br/>
1. Have the driver stop the vehicle at a safe distance and turn off the engine.<br/>
2. Ask the driver and any passengers if they have any weapons.<br/>
3. Ask the driver and any passengers to exit the vehicle. If they have weapons, do not immediately restrain them when they get out, tell them to lower their weapons and given them a reasonable amount of time to do so.<br/>
4. Ask them where they are headed to and from.<br/>
5. Ask if they will submit to a search.<br/>
6. If they allow a search, you may restrain them and search them.<br/>
7. If they do not submit to a search, you must let them go, unless there is probable cause.<br/>
8. After the search is done, you may allow them to re-enter their vehicle and drive away.<br/>
9. In case anything illegal is found, the person may be ticketed or arrested depending on the crime.<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["policerules",
        [
            "Vehicles",
                "
1. Vehicles in the parking lot, or are reasonably parked elsewhere should be left alone.<br/>
2. Vehicles that look abandoned, broken, with no driver, can be impounded.<br/>
3. Boats should be parked reasonably on shore.<br/>
4. Any vehicle that hasn't moved in a significant amount of time may be impounded.<br/>
5. Impounding is an essential job for a cop, it helps keep the server clean and less laggy.<br/>
6. If in doubt, always search the vehicle and message the owner(s) before impounding.<br/>
7. Police speedboats or Hunter HMGs may be used to assist in apprehending criminals. The weapon should be used to disable vehicles, not to blow them up.<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["policerules",
        [
            "Speeding",
                "
The following speeds are to be enforced by the Altis Police Force for the absolute safety of the citizens of Kavala and all travelling beyond the city.<br/><br/>
Inside major cities:<br/>
Small roads: 50km/h<br/>
Main roads: 65km/h<br/>
Outside major cities:<br/>
Small roads: 80km/h<br/>
Main roads: 110km/h<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["policerules",
        [
            "City Protocol",
                "
1. Officers may patrol major cities - Kavala, Athira, Pyrgos and Sofia.<br/>
2. Officers may stop by the car shop to make sure there are no cars that need to be impounded.<br/>
3. Officers may not stand around or loiter in the centre of town.<br/>
4. Officers may enter the town in a large number should a rebellious act occur. After the area is clear, they need to leave the town again.<br/>
5. Martial law may not be declared at any time.<br/>
6. The Police HQ buildings are illegal for civilians to enter without authorization, however it is NOT illegal for civilians to be nearby unless they are causing a nuisance.<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["policerules",
        [
            "Arresting and Ticketing",
                "
Arresting should be done to criminals who are considered a danger to themselves or others.<br/><br/>
1. You may not arrest someone if you have given them a ticket and they paid it.<br/>
2. You must tell the suspect why they are being arrested before you arrest them.<br/>
3. If a civilian is wanted, you may arrest them. Do not kill them, unless the situation falls under the 'Use of Lethal Force' section.<br/><br/>
Ticketing a civilian is considered a warning for the civilian. If they break a law, but do not pose a threat to anyone, you may ticket a civilian.<br/><br/>
1. Tickets must be a reasonable price.<br/>
2. Ticket prices should be based off of the crimes committed.<br/>
3. Refusal to pay a legit ticket is grounds for arrest.<br/>
4. Giving a civilian and illegitimate ticket, such as $100k for speeding, etc., is not allowed and will result in your removal from the police department.<br/><br/>
A complete list of all crimes and the appropriate punishments should be given to officers during training. If in doubt, or if you have not been trained, ask a higher ranking officer what to do.<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["policerules",
        [
            "Weapons",
                "
A cop is NEVER allowed to supply civilians with weapons. This will get you banned from the server and removed from being a cop.<br/><br/>
Legal Weapons for Civilians to carry with a permit:<br/>
1. P07<br/>
2. Rook<br/>
3. ACP-C2<br/>
4. Zubr<br/>
5. 4-five<br/>
6. PDW2000<br/><br/>
Any other weapon (Including Silenced P07 [Considered a Police Weapon]) is illegal.<br/><br/>
1. Civilians are not allowed to have a weapon out within the town limits.<br/>
2. Civilians may have a gun out when they are not in the town. However they should submit to a license search if confronted by an officer and should have the gun lowered (Press Ctrl Twice).<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["policerules",
        [
            "Use of Non-Lethal Force",
                "
At this time the Taser (Silenced P07) is the only form of Non-Lethal Force.<br/><br/>
1. Taser should be used to incapacitate non complying civilians in order to restrain them.<br/>
2. Do not discharge your Taser unless you intend to incapacitate a civilian, randomly discharging your weapon will result in your suspension.<br/>
3. Only use your Taser in compliance with the laws and the rules, do NOT enforce your will on others.<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["policerules",
        [
            "Raiding/Camping",
                "
Raiding is defined as a squad of police officers invading an area of high criminal activity in order to stop the criminals in illegal acts.<br/><br/>
1. In order to raid an area, the cops must have at least 4 officers involved, one of which must be a Sergeant or above.<br/>
2. All civilians in a raid area may be restrained and searched. If nothing illegal is found, you must let them go.<br/>
3. If illegals are found during a search, you may proceed to arrest or fine as usual.<br/>
5. Lethal force is only authorized as described under 'Use of Lethal Force'.<br/>
6. After the area is secure, the officers must leave the area.<br/>
7. An area cannot be raided again for 20 minutes after a previous raid.<br/>
8. If the raid is a failure (All officers die), the 20 minute timer still applies to those officers.<br/>
9. Backup may be called in, but it may not consist of fallen officers (see 'New Life Rule').<br/><br/>
Camping is defined as the prolong stay of an officer in an area.<br/><br/>
1. Checkpoints are not considered camping. See Checkpoint section for a definition of proper checkpoint procedures.<br/>
2. See Bank Robbery and Agia Marina Protocol sections for more info on camping in the main town.<br/>
3. Camping of illegal areas is staying longer than needed after a raid, or if officers do not conduct a raid but continue to watch and take action against civilians entering the area.<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["policerules",
        [
            "Chain of Command",
                "
The highest ranking officer on duty is in charge of the police force outside of admins currently online. The high ranking officer is expected to follow the rules and guidelines of his/her rank, and must report to the admin in case any action need be taken.<br/><br/>
Police Chain of Command:<br/>
1. Chief<br/>
2. Deputy Chief<br/>
3. Superintendent<br/>
4. Captain<br/>
5. Lieutenant<br/>
6. Sergeant<br/>
7. Senior Patrol Officer<br/>
8. Patrol Officer<br/>
9. Cadet<br/><br/>
Cops in game who are not enrolled/accepted into the SPD are the lowest tier and have no say in police operations.<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["policerules",
        [
            "Use of Lethal Force",
                "
1. Use of Lethal force is only permitted for the protection of your life, another officers life, or a civilians life, if and only if non-lethal force would not be effective.<br/>
2. Discharging of a weapon when not under threat or not during training exercises is not allowed. Officers caught in violation of this rule will be removed from the server and suspended from the SPD.<br/>
3. Failure to follow proper weapons discipline and procedure will get you removed from the server and suspended from the SPD.<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["policerules",
        [
            "TeamSpeak Rule",
                "
1. All cops must be on TeamSpeak 3 in a designated cop channel. Failure to be on TeamSpeak during an admin check will result in your immediate dismissal from the server.<br/>
2. Please join TeamSpeak BEFORE you spawn in as a cop, heck, join TeamSpeak before you even join the server.<br/><br/>
                "
        ]
    ];



// Illegal Items Section
    player createDiaryRecord ["illegalitems",
        [
            "Rebel Rules",
                "
A rebel is one who rises in armed resistance against a government. In this case it would be the police. However, due to the small amount of police compared to the possible amount of rebels, do not attack the police without a reason, please be civil and use common sense, and don't take the word rebel literally, but instead how it will make this server fun for all.<br/><br/>
1. A rebel must first form a gang, and then declare intentions.<br/>
2. Resistance does not excuse RDMing (See RDMing in General Rules)<br/>
3. Resistance roleplay should be conducted in more ways than constantly robbing the bank or shooting police officers.<br/>
4. Resistance must be coordinated.<br/>
5. A PROPER reason must be behind each and every attack.<br/><br/>
                "
        ]
    ];
    player createDiaryRecord ["illegalitems",
        [
            "Gang Rules",
                "
1. Being in a gang is not illegal. Only when illegal crimes are committed.<br/>
2. Being in a gang area is not illegal. Only when partaking in illegal activities.<br/>
3. Gangs may hold and control gang areas. Other gangs may attack a controlling gang to compete for control of a gang area.<br/>
4. To declare war on another gang, the leader must announce it in global and all gang members of both gangs must be notified. For a more long term gang war, a declaration should be made on the forums.<br/>
5. Gangs may not kill unarmed civilians, unless said civilian is part of a rival gang and in your gangs controlled area.<br/>
6. Gangs may not kill civilians, unless they are under threat. Killing unarmed civilians because they do not comply is considered RDM, but you can injure/damage.<br/><br/>
                "
        ]
    ];
    player createDiaryRecord ["illegalitems",
        [
            "Illegal Vehicles",
                "
A civilian in control of the following prohibited vehicles is subject to the consequences defined in the unauthorized control of a prohibited vehicle law.<br/><br/>
1. Ifrit<br/>
2. Speedboat<br/>
3. Hunter<br/>
4. Police Offroad<br/><br/>
                "
        ]
    ];
    player createDiaryRecord ["illegalitems",
        [
            "Illegal Weapons",
                "
A civilian in possession of the following is subject to the consequences as defined in the illegal possession of a firearm law.<br/><br/>
1. MX Series<br/>
2. Katiba Series<br/>
3. TRG Series<br/>
4. Mk.20 Series<br/>
5. Mk.18 ABR<br/>
6. SDAR Rifle<br/>
7. Sting SMG<br/>
8. Silenced P07 (Taser)<br/>
9. Any explosives<br/><br/>
                "
        ]
    ];
    player createDiaryRecord ["illegalitems",
        [
            "Illegal Items",
                "
The following items are illegal to posses:<br/><br/>
1. Turtle<br/>
2. Cocaine<br/>
3. Heroin<br/>
4. Cannabis<br/>
5. Marijuana<br/><br/>
                "
        ]
    ];


// Controls Section

    player createDiaryRecord ["controls",
        [
            "Police and medic controls",
                "
F: Vehicle siren.<br/>
L: Speed radar (police only and weapon is P07 Suppressed).<br/>
Left Shift + L: Activates siren lights.<br/>
Left Shift + R: Restrain (police only).<br/><br/>
                "
        ]
    ];
    player createDiaryRecord ["controls",
        [
            "Civilian controls",
                "
Left Shift + G: Knock out / stun (Weapon required. Used for robbing).<br/>
Spacebar: Place storage container.<br/><br/>
                "
        ]
    ];
    player createDiaryRecord ["controls",
        [
            "General controls",
                "
Y: Open Player Menu.<br/>
U: Lock and unlock vehicles and houses.<br/>
T: Vehicle trunk and house virtual item storage.<br/>
Left Shift + B: Surrender (hands on head).<br/>
Left Windows: Main interaction key. Used for interacting with objects like vehicles, houses, ATMs, and restrained players. Can be rebound to a single key like H by pressing ESC->Configure->Controls->Custom->Use Action 10.<br/>
Left Shift + H: Holsters the weapon in your hands.<br/>
Left Ctrl + H: Revert holster action.<br/>
Shift + Spacebar: Jump.<br/>
Left Shift + O: (un)fade sound (ear plugs).<br/><br/>
                "
        ]
    ];
