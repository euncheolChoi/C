#include <stdio.h>

// �迭�� ���� ������ �ִ밪�� ã�� ��� => �迭 0��° �ε����� ���� nMax��� �����ϰ� 
//���������� ���� ������.
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