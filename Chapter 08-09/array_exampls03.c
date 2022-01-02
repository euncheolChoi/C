#include <stdio.h>

// 변수의 값을 단순대입하여 기존 값이 사라지게 하는 방식이 아니라, 기존 배열의 일부 값이 유실되지
//않게 임시변수 하나를 이용해서 최솟값 구하기

int main(void)
{
	int aList[5] = { 30, 40, 10, 50, 20 };
	int i = 0, nTmp = 0;

	for (i = 1; i < 5; ++i)
	{


		if (aList[i] < aList[0])
		{
			nTmp = aList[0];
			aList[0] = aList[i];
			aList[i] = nTmp;
		}


	}

	for (i = 0; i < 5; ++i)
	{
		printf("%d\t", aList[i]);
	}
	putchar('\n');

	printf("Min : %d\n", aList[0]);
	return 0;
}