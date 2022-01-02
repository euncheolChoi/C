#include <stdio.h>

// 배열을 값을 가지고 최대값을 찾는 방법 => 배열 0번째 인덱스의 수를 nMax라고 가정하고 
//순차적으로 비교해 나간다.
int main(void)
{
	int aList[5] = { 30,10,40,20,50 };
	int i = 0,  nMax = aList[0];

	for (i = 0; i < 5; ++i)
	{
		if (aList[i] > nMax)
			nMax = aList[i];

	}

	for (i = 0; i < 5; ++i)
	{
		printf("%d\t", aList[i]);
	}
	putchar('\n');
	printf("max : %d", nMax);


	return 0;

}