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

	//���ȣ���� ������ ���� ���ǽ�, �ݺ����� ���ǽİ� ����.
	if (nParam == 1) return 1;
	
	// �Ű������� ���� 1�� ���ҽ��� �ڱ� �ڽ��� �ٽ� ȣ���Ѵ�. -> �ݺ����� ������ ���� ����
	nResult = nParam * GetFactorial(nParam - 1); 
	return nResult;

}

int main(void)
{
	
	printf("5! = %d", GetFactorial(5));
	return 0;
}