#include <stdio.h>


//구구단 프로그램 예제_ 처음에는 외부 반복문에 while(i < j)를 쓰고, 내부 반복문에 while(j < 10) 을 쓰는 무식한 짓을..
//디버그 모드로 숫자 따라가며 해봐도 잘 안됐다!  계수기 초기화 코드를 써야 하는 점과, 어디에 써야 할지 중점적으로 보자.
int main(void)
{
	int i = 0, j = 0;

	i = 1;
	while (i < 10)
	{
		j = 1;
		while (j < 10)
		{
			int nResult = i * j;
			printf("%d * %d = %d\n", i, j, nResult);

			++j;
		}
		++i;
	}
	return 0;
}