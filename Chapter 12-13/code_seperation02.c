#include <stdio.h>

// �迭 ���μ��μ� ������ �Ű������� �޴´�. �����Ϳ��� ����� ���� ������ �����Ƿ� int �Ű������� �� �ʿ�.
// �Է¹޾ƾ� �ϴ� ���� ������ �޶����� �� �ڵ�� �Һ�.
void InitList(int *pList, int nSize) {

	int i = 0;
	for (i = 0; i < nSize; ++i)
	{
		printf("������ �Է��ϼ��� : ");
		scanf_s("%d", &pList[i]);

	}

}

// ���� ����� ���� �Լ�. ��Ұ� int������ �迭(����� �ڷ����� int*)�̶��
// ����� ������ ������� ������ �� �ִ�.

void SortList(int *pList, int nSize)
{
	int i = 0, j = 0, nTmp = 0;

	for (i = 0; i < nSize - 1; ++i)
	{

		for (j = i + 1; j < nSize; ++j)
		{
			if (pList[j] < pList[i])
			{
				nTmp = pList[j];
				pList[j] = pList[i];
				pList[i] = nTmp;

			}
		}
	}
}

//print�ϴ� �κе� �ƿ� ���� ���� ����. ui�� ����� �и�!
void PrintList(int* pList, int nSize)
{
	int i = 0;
	for (i = 0; i < nSize; ++i)
		printf("%d\t", pList[i]);

	putchar('\n');

}

//�̷��� ���� �ڵ�=> �ֳĸ� main()�Լ��� �Ϻθ� �����ؼ� ���� ���������Ҽ� �ֱ� �����̴�. 
int main(void) {

	//�����ؾ� �� ������ main()�Լ��� ���������� aList�� �迭�� ��´�.
	int aList[5] = { 0 };

	InitList(aList, 5);
	SortList(aList, 5);
	PrintList(aList, 5);

	return 0;
}