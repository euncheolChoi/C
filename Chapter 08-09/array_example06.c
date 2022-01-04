#include <stdio.h>
// 이차원 배열을 미리 정의하고 출력/ 계수기를 이용해서 이차원배열을 만들고 출력을 하는 경우. 이때는 이차원배열을 정의하는
//기능과 출력하는 기능을 한 함수에 넣지 않고 분리하였다.

int main(void) {
	/*
	int aList[3][4] = {
		{10, 20, 30 ,40},
		{50, 60, 70, 80},
		{90, 100, 110, 120}
	};
	int i = 0, j = 0;

	for (i = 0; i < 3; ++i)
	{
		for (j = 0; j < 4; ++j)
		{
			printf("%d\t", aList[i][j]);

		}
		putchar('\n');
	}
	return 0;
	*/

	int aList[3][4] = { 0 };
	int i = 0, j = 0, nCounter = 0;

	for (i = 0; i < 3; ++i)
	{
		for (j = 0; j < 4; ++j)
		{
			aList[i][j] = ++nCounter;

		}

	}
	

	for (i = 0; i < 3; ++i)
	{
		for (j = 0; j < 4; ++j)
		{
			printf("%d\t", aList[i][j]);
		}
		putchar('\n');

	}
	return 0;
}