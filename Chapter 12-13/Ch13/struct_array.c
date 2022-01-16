#include <stdio.h>	

typedef struct USERDATA
{
	int nAge;
	char szName[32];
	char szPhone[32];

} USERDATA;

int main(void)
{

	//구조체 배열 선언 및 정의, 이렇게 들여쓰는 연습 하자
	USERDATA userList[4] = {
		{10, "김어준", "1234"},
		{11, "정봉주", "2345"},
		{17, "주진우", "3456"},
		{12, "김용만", "5678"}
	};

	int i = 0;


	//구조체 배열에 접근할 때는 29번 행과 같이 써야 함. 연산 우선순위는 모두1순위이지만 결합성은 왼쪽에서 오른쪽!
	//따라서 배열 연산을 먼저 수행
	for (i = 0; i < 4; ++i)
	{
		printf("%d살\t%s\t%s\n",
		userList[i].nAge, userList[i].szName,
		userList[i].szPhone);
	}

	return;
}
