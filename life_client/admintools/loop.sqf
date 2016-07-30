/*
이 스크립트는 ARMA AOS 서버의 소유물입니다.
무단으로 수정 및 배포 시 문제가 발생됨을 알려드립니다.
문의 : magicianaos@gmail.com
홈페이지 : http://cafe.naver.com/alflrss
*/
for "_i" from 0 to 1 step 0 do {
	waitUntil {alive vehicle player};
	[] execVM "admintools\activate.sqf";
	waitUntil {!alive player};
};