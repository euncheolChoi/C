#include <stdio.h>

// 3���� �迭�� ���� : i, j, k �ε��� ������� ��, ��, �� ������ ���

int main(void) {

	int aList[4][2][3] = { 0 };
	int i = 0, j = 0, k = 0, nCounter = 0;

	for (i = 0; i < 4; ++i)
	{
		
		printf("plane number : %d\n ", i);

		for (j = 0; j < 2; ++j)
		{
			for (k = 0; k < 3; ++k)
			{
				
				aList[i][j][k] += ++nCounter ;
				printf("%d\t", aList[i][j][k]);

			}

			putchar('\n');

		}
	}


	return 0;


}

