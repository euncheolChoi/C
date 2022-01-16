#include <stdio.h>

/*
int GetFactorial(int nParam)
{
	int i = 0, nFact = 1;
	for (i = nParam; i > 1; --i)
	{
		nFact *= i;

	}
	return nFact;

}


int main(void) {

	printf(") 5! = %d", GetFactorial(6));

	return 0;
}

*/


int GetFactorial(int nParam)
{
	int nResult = 0;

	//재귀호출을 끝내기 위한 조건식, 반복문의 조건식과 같다.
	if (nParam == 1) return 1;
	
	// 매개변수의 값을 1씩 감소시켜 자기 자신을 다시 호출한다. -> 반복문의 계수기와 같은 역할
	nResult = nParam * GetFactorial(nParam - 1); 
	return nResult;

}

int main(void)
{
	
	printf("5! = %d", GetFactorial(5));
	return 0;
}