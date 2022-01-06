#include <stdio.h>


// 지그재그로 2차원 배열 채우기 -> 3가지 방법 있음.
//
int main(void)
{

	int aList[5][5] = { 0 };
	int i = 0, j = 0, nCounter = 0, nOffset = 1; //nOffset 의 초깃값을 1로 지정

	for (i = 0; i < 5; ++i)
	{
		if (i % 2 == 0)
		{
			nCounter = i * 5;
		}
		else
		{
			nCounter = (i + 1) * 5 + 1;

		}

		for (j = 0; j < 5; ++j)
		{
			nCounter += nOffset;		//누적하는 부분 _ 1씩 누적하면 증가하지만, -1씩 누적하면 1씩 감소한다.
			aList[i][j] = nCounter;
		}

		nOffset = -nOffset;

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