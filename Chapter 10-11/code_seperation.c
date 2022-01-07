#include <stdio.h>

/* 처음에 짜던 코드.. 나중에 한번 보려고 남겨 둠..
int aList[3] = 0;
int nMax = -9999, i = 0;

int GetData(void)
{
	for (i = 0; i < 3; ++i)
	{
		printf("정수를 입력하세요 :");
		scanf_s("%d", &aList[i]);

	}
	return aList[i];
}

int GetMax(aList[0], aList[1], aList[3])
{
	for (i = 0; i < 3; ++i)
	{
		if (aList[i] > nMax)	nMax = aList[i]

	}

	return nMax;
}

// 출력하는 함수
int PrintData(aList[0], aList[1], aList[3], nMax)
{
	printf("%d, %d, %d중 가장 큰 수는 %입니다", aList[0], aList[1], aList[3], nMax);




int main(void)
{
	int aList[3] = {0};
	int nMax = -9999, i = 0;

	for (i = 0; i < 3; ++i)
	{
		aList[i] = GetData();
	}


	nMax = GetMax(aList[0], aList[1], aList[2]);


	printData(aList[0], aList[1], aList[2], nMax);
	return 0;


}


}
*/

// 프로그램을 입력, 최댓값 계산, 출력 등의 세 부분으로 나눔.

#include <stdio.h>

int GetData(void)
{
	int nInput = 0;
	printf("정수를 입력하세요 :");
	scanf_s("%d", &nInput);

	return nInput;
}

int GetMax(int a, int b, int c)
{
	int nMax = a;
	if (b > nMax)	nMax = b;
	if (c > nMax)	nMax = c;

	return nMax;
}

void PrintData(a, b, c, nMax)
{
	printf("%d, %d, %d 중 가장 큰 수는 %d 입니다", a, b, c, nMax);

}

int main(void)
{
	int aList[3] = { 0 };
	int nMax = -9999, i = 0;
	
	for (i = 0; i < 3; ++i)
	{
		aList[i] = GetData();
	}

	nMax = GetMax(aList[0], aList[1], aList[2]);

	PrintData(aList[0], aList[1], aList[2], nMax);
	return 0;
}