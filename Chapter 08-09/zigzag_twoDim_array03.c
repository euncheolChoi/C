#include <stdio.h>	

//�÷��׸� �̿��ؼ� ����ġó�� �״ٰ� ���� ���!
// F9 �ɰ� ���� �帧 �ľ��ذ��鼭 Ȯ���غ���! (nFlag)

int main(void)
{
	int aList[5][5] = { 0 };
	int i = 0, j = 0, nCounter = 0, nFlag = 1;

	for (i = 0; i < 5; ++i)
	{

		if (nFlag)
		{
			for (j = 0; j < 5; ++j)
			{
				aList[i][j] = ++nCounter;
			}

			nFlag = 0;
		}
		else
		{
			for (j = 0; j < 5; ++j)
			{
				aList[i][4 - j] = ++nCounter;
			}

			nFlag = 1;

		}

		putchar('\n');

	}

	for (i=0; i < 5; ++i)
	{
		for (j = 0; j < 5; ++j)
		{
			printf("%d\t", aList[i][j]);
		}
		putchar('\n');
	}


	return 0;

}