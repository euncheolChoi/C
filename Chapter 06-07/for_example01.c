#include <stdio.h>

// 왼쪽으로 기운 직각삼각형 만들기. 두번째 for문의 j < i + 1 부분을 생각하지 못했다.

int main(void)
{
	int i = 0, j = 0;

	for (i = 0; i <5; ++i )
	{
		for (j = 0; j < i + 1 ; ++j)
		{
			printf("*\t");
		} 
		putchar('\n');
	}


	return 0;
}