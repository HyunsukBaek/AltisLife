/*
    File: fn_welcomeNotification.sqf
    Author:

    Description:
    Called upon first spawn selection and welcomes our player.
*/
disableSerialization;
[
        "",
        0,
        0.2,
        10,
        0,
        0,
        8
] spawn BIS_fnc_dynamicText;

createDialog "RscDisplayWelcome";

_display = findDisplay 999999;
_text1 = _display displayCtrl 1100;
_buttonSpoiler = _display displayCtrl 2400;
_textSpoiler = _display displayCtrl 1101;
_text2 = _display displayCtrl 1102;

_message = "";
_message = _message + "<t align='center' size='8' shadow='0'><img image='textures\armalife.jpg' /></t><br /><br />";
_message = _message + "Welcome to AoSoul 24h Life Mod Server!!!<br />";
_message = _message + " <a href='http://cafe.naver.com/alflrss' color='#56BDD6'>AOSOUL Life Homepage 클릭!!</a> <br />위의 카페링크 클릭하여 가입하시고 규칙 및 공지사항 확인하세요.<br />";
_message = _message + "AOS  와  SoulFucker 서버가 하나가 되었습니다. 자세한 사항은 공지사항 참고!  <br /><br />아프리카 TV  http://afreeca.com/mixkorea <br /><br />";
_message = _message + "steam workshop에서  AOSOUL 을 검색하신 뒤 구독해주세요. (애드온 적용). <br /> 본 서버는 365일  24시간 운영됩니다.  <br /> 물건줍기가 잘 안되시면 window키 + T또는 shift +T 누른 후 1인칭 모드로 물건을 바라보며 재시도해보세요<br /><br/> 곡 접속하세요!! 팀스피크 TS3 = aosoul.net   password : 51234";

//Fill only the first text
_text1 ctrlSetStructuredText (parseText _message);

//Resize StructuredText component to display the scrollbar if needed
_positionText1 = ctrlPosition _text1;
_yText1 = _positionText1 select 1;
_hText1 = ctrlTextHeight _text1;
_text1 ctrlSetPosition [_positionText1 select 0, _yText1, _positionText1 select 2, _hText1];
_text1 ctrlCommit 0;
//Hide second text, spoiler text and button
_buttonSpoiler ctrlSetFade 1;
_buttonSpoiler ctrlCommit 0;
_buttonSpoiler ctrlEnable false;
_textSpoiler ctrlSetFade 1;
_textSpoiler ctrlCommit 0;
_text2 ctrlSetFade 1;
_text2 ctrlCommit 0;
