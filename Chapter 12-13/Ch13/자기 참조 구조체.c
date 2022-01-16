#include <stdio.h>

typedef struct USERDATA
{
	char szName[32];
	char szPhone[32];

	//USERDATA ����ü�� ����ų �� �ִ� �����͸� ����� ����
	struct USERDATA *pNext;

} USERDATA;

int main(void)
{
	//�� ���� USERDATA ����ü �ν��Ͻ� ���� �� ����
	USERDATA user = { "�����", "1234", NULL };
	USERDATA newUser = { "������", "2344", NULL };

	//pNext ����� �̿��ؼ� �� �ν��Ͻ��� �����Ѵ�
	user.pNext = &newUser;

	printf("%s\t%s\n", user.szName, user.szPhone);
	// pNext ����� �̿��ؼ� ���� �ν��Ͻ��� �����Ѵ�
	printf("%s\t%s\n", user.pNext->szName, user.pNext->szPhone);

	return 0;
}