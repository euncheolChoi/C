#include <stdio.h>

// 이차원 배열의 행과 열의 총합 구하기. 요소가 int형이고 열이4, 행의 길이가 3인 배열의 행, 열의 총합을 계산.
// 예를 들어, 0번 행의 0~2열 요소의 총합을 0번 행의 3번 열에 저장한다. 

int main(void) {
	

	int aList[3][4] = {
		{10, 20, 30},
		{40, 50, 60}
	
	};

	int i = 0, j = 0;	
	
	for (i = 0; i < 2; ++i)
	{
		for (j = 0; j < 3; ++j)
		{
			aList[i][3] += aList[i][j];
			/*
			aList[0][3] = aList[0][3] + aList[0][0]; 
			aList[0][3] = aList[0][3] + aList[0][1];
			aList[0][3] = aList[0][3] + aList[0][2];  
			*/
		}
	}

	for (j = 0; j < 4; ++j)
	{
		for (i = 0; i < 2; ++i)
		{
			aList[2][j] += aList[i][j];
		}										
	}											



	for (i = 0; i < 3; ++i)
	{
		for (j = 0; j < 4; ++j)
		{
			printf("%d\t", aList[i][j]);

		}
		putchar('\n');
	}



	return 0;

}