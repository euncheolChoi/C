#include <stdio.h>

/* ó���� ¥�� �ڵ�.. ���߿� �ѹ� ������ ���� ��..
int aList[3] = 0;
int nMax = -9999, i = 0;

int GetData(void)
{
	for (i = 0; i < 3; ++i)
	{
		printf("������ �Է��ϼ��� :");
		scanf_s("%d", &aList[i]);

	}
	return aList[i];
}

int GetMax(aList[0], aList[1], aList[3])
{
	for (i = 0; i < 3; ++i)
	{
		if (aList[i] > nMax)	nMax = aList[i]

	}

	return nMax;
}

// ����ϴ� �Լ�
int PrintData(aList[0], aList[1], aList[3], nMax)
{
	printf("%d, %d, %d�� ���� ū ���� %�Դϴ�", aList[0], aList[1], aList[3], nMax);




int main(void)
{
	int aList[3] = {0};
	int nMax = -9999, i = 0;

	for (i = 0; i < 3; ++i)
	{
		aList[i] = GetData();
	}


	nMax = GetMax(aList[0], aList[1], aList[2]);


	printData(aList[0], aList[1], aList[2], nMax);
	return 0;


}


}
*/

// ���α׷��� �Է�, �ִ� ���, ��� ���� �� �κ����� ����.

#include <stdio.h>

int GetData(void)
{
	int nInput = 0;
	printf("������ �Է��ϼ��� :");
	scanf_s("%d", &nInput);

	return nInput;
}

int GetMax(int a, int b, int c)
{
	int nMax = a;
	if (b > nMax)	nMax = b;
	if (c > nMax)	nMax = c;

	return nMax;
}

void PrintData(a, b, c, nMax)
{
	printf("%d, %d, %d �� ���� ū ���� %d �Դϴ�", a, b, c, nMax);

}

int main(void)
{
	int aList[3] = { 0 };
	int nMax = -9999, i = 0;
	
	for (i = 0; i < 3; ++i)
	{
		aList[i] = GetData();
	}

	nMax = GetMax(aList[0], aList[1], aList[2]);

	PrintData(aList[0], aList[1], aList[2], nMax);
	return 0;
}