#include <stdio.h>

typedef struct USERDATA
{
	int nAge;
	char szName[32];
	char szPhone[32];

} USERDATA;


// 매개변수로 주소를 넘겨받는다
//아직 이 문법에 익숙하지가 않다! 대강 이해한채로 일단은 넘어가고 다음에 다시 확인.
void GetUserData(USERDATA *pUser)
{
	scanf_s("%d%*c", &pUser->nAge);
	gets_s(pUser->szName, sizeof(pUser->szName));
	gets_s(pUser->szPhone, sizeof(pUser->szPhone));

}



int main(void)
{

	USERDATA user = { 0 };

	// 피호출자에게 구조체의 주소를 넘겨준다, call by reference.
	GetUserData(&user);
	printf("%d살\t%s\t%s\n",
		user.nAge, user.szName, user.szPhone);

	return 0;
}