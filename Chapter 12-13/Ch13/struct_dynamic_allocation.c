#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct USERDATA
{
	int nAge;
	char szName[32];
	char szPhone[32];

} USERDATA;

int main(void)
{
	// USERDATA ����ü�� ���� ������ ���� ���� �� ���� 

	USERDATA *pUser = NULL;

	//USERDATA ����ü�� ����� �� ���� �� �ִ� ũ���� �޸� ���� �Ҵ�
	pUser = (USERDATA*)malloc(sizeof(USERDATA));

	//�������̹Ƿ� ��� ������ -> �� ����!
	pUser->nAge = 10;
	strcpy(pUser->szName, "Hoon");
	strcpy(pUser->szPhone, "1234");

	printf("%d\t%s\t%s", pUser->nAge, pUser->szName, pUser->szPhone);

	free(pUser);
	return 0;
}


