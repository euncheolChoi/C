#include <stdio.h>
#include <stdlib.h>	
#include <string.h>

int main()
{
	int *pList = NULL, *pListNew = NULL;

	int aList[3] = { 0 };
	// malloc�� �⺻������ void*�� ��ȯ�ϱ� ������ �� �ּҰ� ����Ű�� ��� �޸𸣸� 
	// int*�� ���� ����ȯ��
	pList = (int*)malloc(sizeof(int) * 3);

	// ù��° �μ��� ���޵� �޸� �ּҸ� ��������, ����° �μ��� ���޵� �޸𸮿� 
	//�� ��° �μ��� ���޵� ������ �����Ѵ�. malloc�� memset�� ��Ʈ! �ַ� �̷��Ը� ����.
	memset(pList, 0, sizeof(int) * 3);
	pListNew = (int*)calloc(3, sizeof(int));

	free(pList);
	free(pListNew);

	return 0;
}