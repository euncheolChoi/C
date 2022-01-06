#include <stdio.h>	
#include <conio.h>	
#include <stdlib.h>

int GetFee(int nAge)
{
	int nFee = 1000;
	if (nAge < 20)		nFee /= 2;

	return 0;
}

// 이벤트 루프
//메뉴를 출력하는 함수의 선언 및 정의.
int PrintMenu(void)
{
	int nInput = 0;

	//메뉴를 출력하기 전에 화면을 지운다.
	system("cls");
	printf("[1]New\t[2]Search\t[3]Print\t[4]Remove\t[5]Exit\n");
	scanf_s("%d", &nInput);

	return nInput;
}

int GetAge(void)
{
	int nAge = 0;
	printf("나이를 입력하세요: ");
	scanf_s("%d", nAge);

	return nAge;
}


int main(void)
{
	int nMenu = 0, nAge = 0;
	while ((nMenu = PrintMenu()) != 0)
	{
		if (nMenu == 1)
		{
			nAge = GetAge();
			printf("당신의 요금은 %d 원입니다. ", GetFee(nAge));
			_getch();

		}

	}

	puts("bye!");
	return 0;
}