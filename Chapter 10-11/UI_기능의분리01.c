#include <stdio.h>

// UI와 기능을 명확히	 분리하자. 

int GetFactorial(int nParam)
{
	int nResult = 1, i = 0;

	// 매개변수 값이 유효하지 않으면 0을 반환하여 
	//호출자 함수에 오류를 알린다.
	if (nParam < 1 || nParam > 10)	return 0;


	for (i = 1; i <= nParam; ++i)
	{
		nResult *= i;

	}
	return nResult;
}

// 화면 입출력에 관한 함수는 모두 main() 함수가 담당.

int main(void)
{
	int nResult = 0, nInput = 0;

	printf("계승을 구할 정수 1~10 을 입력 :");
	scanf_s("%d", &nInput);
	
	nResult = GetFactorial(nInput);

	// 반환값을 확인하여 오류에 대응.
	if (nResult == 0)
	{
		puts("ERROR : 1~10 사이의 정수를 입력하세요");
		return;
	}

	printf(" Result is %d", nResult);
	return 0;

}
