#include <stdio.h>


// ������׷� 2���� �迭 ä��� -> 3���� ��� ����.
//
int main(void)
{

	int aList[5][5] = { 0 };
	int i = 0, j = 0, nCounter = 0, nOffset = 1; //nOffset �� �ʱ갪�� 1�� ����

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
			nCounter += nOffset;		//�����ϴ� �κ� _ 1�� �����ϸ� ����������, -1�� �����ϸ� 1�� �����Ѵ�.
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