#include <stdio.h>
#include <string.h>

// 구조체 선언, 형 재선언(여기서는 struct USERDATA를 줄여서 USERDATA라고 재정의한 것을 말한다. 
typedef struct USERDATA {

	int nAge;
	char szName[32];
	char szPhone[32];

} USERDATA;


int main(void) {
	
	//USERDATA 구조체의 변수 user 선언 및 정의 , typedef 덕분에 구조체 인스턴스(user)를 정의할 때 struct예약어를 생략할 수 있다. 
	USERDATA user = { 0, "", "" };


	//구조체 멤버 접근, 값 채우기
	user.nAge = 10;
	strcpy(user.szName, "HOON");
	strcpy(user.szPhone, "010-1234-1211");

	printf("%d 살, %s, %s\n", user.nAge, user.szName, user.szPhone);

	return 0;
}