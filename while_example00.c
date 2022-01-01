#include <stdio.h>

int main(void)
{   
	// 처음에 짰던 코드. 바보같이 while문 종료해주는 코드를 안써서 무한루프가 생김. // 10-12번째 줄도 아래 잘 돌아가는 코드에 넣어보면 
	//또 실행이 안되던데 왜 그런걸까?
/*	char ch = 0;
	int nInput = 0;
	scanf_s("%d", &nInput);

	if (nInput < 1 || nInput > 9)
	{
		printf(1);
	}
	while (nInput >= 1 && nInput <= 9)
	{
		printf("*", nInput);
	}
	printf("\n");
	return 0;
*/

	int nInput = 0, i = 0;
	if (nInput < 1) nInput = 1;
	if (nInput > 9) nInput = 9;
	scanf_s("%d", &nInput);

	while (i < nInput)
	{
		putchar('*');
		i++;

	}

	putchar('\n');
	return 0;
}