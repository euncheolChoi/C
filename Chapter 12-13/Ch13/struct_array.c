#include <stdio.h>	

typedef struct USERDATA
{
	int nAge;
	char szName[32];
	char szPhone[32];

} USERDATA;

int main(void)
{

	//����ü �迭 ���� �� ����, �̷��� �鿩���� ���� ����
	USERDATA userList[4] = {
		{10, "�����", "1234"},
		{11, "������", "2345"},
		{17, "������", "3456"},
		{12, "��븸", "5678"}
	};

	int i = 0;


	//����ü �迭�� ������ ���� 29�� ��� ���� ��� ��. ���� �켱������ ���1���������� ���ռ��� ���ʿ��� ������!
	//���� �迭 ������ ���� ����
	for (i = 0; i < 4; ++i)
	{
		printf("%d��\t%s\t%s\n",
		userList[i].nAge, userList[i].szName,
		userList[i].szPhone);
	}

	return;
}
