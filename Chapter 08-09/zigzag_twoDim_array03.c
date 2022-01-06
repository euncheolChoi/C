#include <stdio.h>	

//플래그를 이용해서 스위치처럼 켰다가 끄는 방식!
// F9 걸고 구문 흐름 파악해가면서 확인해보기! (nFlag)

int main(void)
{
	int aList[5][5] = { 0 };
	int i = 0, j = 0, nCounter = 0, nFlag = 1;

	for (i = 0; i < 5; ++i)
	{

		if (nFlag)
		{
			for (j = 0; j < 5; ++j)
			{
				aList[i][j] = ++nCounter;
			}

			nFlag = 0;
		}
		else
		{
			for (j = 0; j < 5; ++j)
			{
				aList[i][4 - j] = ++nCounter;
			}

			nFlag = 1;

		}

		putchar('\n');

	}

	for (i=0; i < 5; ++i)
	{
		for (j = 0; j < 5; ++j)
		{
			printf("%d\t", aList[i][j]);
		}
		putchar('\n');
	}


	return 0;

}