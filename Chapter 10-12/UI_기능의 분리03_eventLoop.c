#include <stdio.h>	
#include <conio.h>	
#include <stdlib.h>

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

int main(void)
{
	int nMenu = 0;

	while ((nMenu = PrintMenu()) != 0)
	{
		switch (nMenu)
		{

		case 1:
			puts(" 새 항목을 추가합니다\n");
			break;

		case 2:
			puts("기존 항목에서 검색합니다\n");
			break;

		case 3:
			puts("전체 내용을 출력합니다\n");
			break;

		case 4:
			puts("기존 항목을 삭제합니다\n");
			break;

		default:
			puts("알 수 없는 명령어입니다.");

		}

		_getch();
	}

	puts("bye!");
	return 0;
}