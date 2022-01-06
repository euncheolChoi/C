#include <stdio.h>

// UI�� ����� ��Ȯ��	 �и�����. 

int GetFactorial(int nParam)
{
	int nResult = 1, i = 0;

	// �Ű����� ���� ��ȿ���� ������ 0�� ��ȯ�Ͽ� 
	//ȣ���� �Լ��� ������ �˸���.
	if (nParam < 1 || nParam > 10)	return 0;


	for (i = 1; i <= nParam; ++i)
	{
		nResult *= i;

	}
	return nResult;
}

// ȭ�� ����¿� ���� �Լ��� ��� main() �Լ��� ���.

int main(void)
{
	int nResult = 0, nInput = 0;

	printf("����� ���� ���� 1~10 �� �Է� :");
	scanf_s("%d", &nInput);
	
	nResult = GetFactorial(nInput);

	// ��ȯ���� Ȯ���Ͽ� ������ ����.
	if (nResult == 0)
	{
		puts("ERROR : 1~10 ������ ������ �Է��ϼ���");
		return;
	}

	printf(" Result is %d", nResult);
	return 0;

}
