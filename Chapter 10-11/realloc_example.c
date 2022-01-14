#include <stdio.h>
#include <malloc.h>
#include <string.h>

int main(void)
{
	char *pszBuffer = NULL, *pszNewBuffer = NULL;

	// 12����Ʈ �޸𸮸� ���� �Ҵ�, �� ������ �Ҵ�� �޸� ����� ������ char�̰�  
	// �� �޸� �� ù ��° ����Ʈ �޸��� �ּҸ� pszBuffer�� ����
	pszBuffer = (char*)malloc(12);

	//���ڿ��� �ֿܼ� ����ϴ°� �ƴ϶� Ư�� �ּ��� �޸𸮿� ����Ѵ�(�����Ѵ�)
	sprintf(pszBuffer, "%s", "Teststring");

	printf("[%p] %d %s\n", pszBuffer, _msize(pszBuffer), pszBuffer);

	// �Ҵ翡 �����ϸ� NULL��ȯ - �̶��� �������� �޸� ����������� / �Ҵ缺���ϸ� ��ȯ���� ������ 
	//�޸� ���� �ּҰ��� ������ ���� ��ȯ
	pszNewBuffer = (char*)realloc(pszBuffer, 32);

	if (pszNewBuffer == NULL)
	{
		free(pszBuffer);
	}
	sprintf(pszNewBuffer, "%s", "TeststringData	");
	printf("[%p] %d %s\n",
		pszNewBuffer, _msize(pszNewBuffer), pszNewBuffer);

	free(pszNewBuffer);
	return 0;

}