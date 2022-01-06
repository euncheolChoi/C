#include <stdio.h>	

// 지그재그로 2차원 배열 채우기 -> 3가지 방법 있음.
// 짝수 행, 홀수 행 구분하는 방법. 
int main(void)
{

	int aList[5][5] = { 0 };
	int i = 0, j = 0, nCounter = 0;

	for (i = 0; i < 5; ++i)
	{

		if (i % 2 == 0)
		{
			for (j = 0; j < 5; ++j)
			{
				aList[i][j] = ++nCounter;
			}
		}

		else
		{
			for (j = 0; j < 5; ++j)
			{

				aList[i][4 - j] = ++nCounter;
			}
		}

	}
	
	for (i = 0; i < 5; ++i)
	{

		for (j = 0; j < 5; ++j)
		{
			printf("%d\t", aList[i][j]);
		}

		putchar('\n');
	}
	


	

	return 0;


}