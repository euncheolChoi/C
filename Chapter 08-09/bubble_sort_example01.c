#include <stdio.h>

//선택정렬로 알려진 버블정렬. 버블정렬이므로 매번 비교하고, 나중 인덱스의 값이 더 작으면 즉시 교환( nTmp에 임시저장하므로 데이터유실은 없다)
//주석은 처음에 작성했었던 코드(실패)
// 주석처리 안된 코드가 답안. 

int main(void)
{
	/*
	int aList[5] = { 30, 40 ,10, 50, 20 };
	int i = 0, j = 0, nTmp = 0;

	nTmp = 30;

	for (i = 0; i < 4; ++i)
	{

		aList[i] = nTmp ;

		for (j = 0; j < 4 - i; ++j)
		{
			
			
			if (nTmp < aList[j])
				aList[i] = nTmp;

			else
				aList[i] = aList[j];


		}
		putchar('\t');
	}



	for (i = 0; i < 5; ++i)
	{
		printf("%d\t", aList[i]);
	}


	putchar('\n');
	return 0;
	*/

	int aList[5] = { 30, 40 ,10, 50, 20 };
	int i = 0, j = 0, nTmp = 0;

	for (i = 0; i < 4; ++i)
	{
		for (j = 1 + i; j < 5; ++j)
		{
			if (aList[j] < aList[i])
			{
				nTmp = aList[i];
				aList[i] = aList[j];
				aList[j] = nTmp;

			}
		}

	}

	for (i = 0; i < 5; ++i)
	{
		printf("%d\t", aList[i]);
	}

	putchar('\n');

	
	return 0;


}