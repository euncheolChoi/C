#include <stdio.h>	

// int aList[5] 라는 배열은 사실 변수가 5개인 것이다. 배열은 여러 개의 인스턴스가 모여 한 덩어리를 이룬것이지, 배열의 이름(식별자)가
//하나라고 해서 변수 하나라고 생각하면 안된다. 이 경우 자료형은 integer가 5개 있는 배열이다.

int main(void)
{
	int aList[5] = { 10, 20, 30, 40, 50 };
	int i = 0;

	for (i = 0; i < 5; ++i)
	{
		printf("%d\t", aList[i]);
	}
	putchar('\n');
	
	aList[0] = 100;
	aList[3] = 200;

	for (i = 0; i < 5; ++i)
	{
		printf("%d\t", aList[i]);
	}
	putchar('\n');

	return 0;
}