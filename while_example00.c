#include <stdio.h>

int main(void)
{   
	// ó���� ®�� �ڵ�. �ٺ����� while�� �������ִ� �ڵ带 �ȽἭ ���ѷ����� ����. // 10-12��° �ٵ� �Ʒ� �� ���ư��� �ڵ忡 �־�� 
	//�� ������ �ȵǴ��� �� �׷��ɱ�?
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