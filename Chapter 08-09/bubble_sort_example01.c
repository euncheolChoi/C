#include <stdio.h>

//�������ķ� �˷��� ��������. ���������̹Ƿ� �Ź� ���ϰ�, ���� �ε����� ���� �� ������ ��� ��ȯ( nTmp�� �ӽ������ϹǷ� ������������ ����)
//�ּ��� ó���� �ۼ��߾��� �ڵ�(����)
// �ּ�ó�� �ȵ� �ڵ尡 ���. 

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