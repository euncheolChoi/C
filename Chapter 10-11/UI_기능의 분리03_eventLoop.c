#include <stdio.h>	
#include <conio.h>	
#include <stdlib.h>

// �̺�Ʈ ����
//�޴��� ����ϴ� �Լ��� ���� �� ����.
int PrintMenu(void)
{
	int nInput = 0;

	//�޴��� ����ϱ� ���� ȭ���� �����.
	system("cls");
	printf("[1]New\t[2]Search\t[3]Print\t[4]Remove\t[5]Exit\n");
	scanf_s("%d", &nInput);

	return nInput;
}

int main(void)
{
	int nMenu = 0;

	while ((nMenu = PrintMenu()) != 0)
	{
		switch (nMenu)
		{

		case 1:
			puts(" �� �׸��� �߰��մϴ�\n");
			break;

		case 2:
			puts("���� �׸񿡼� �˻��մϴ�\n");
			break;

		case 3:
			puts("��ü ������ ����մϴ�\n");
			break;

		case 4:
			puts("���� �׸��� �����մϴ�\n");
			break;

		default:
			puts("�� �� ���� ��ɾ��Դϴ�.");

		}

		_getch();
	}

	puts("bye!");
	return 0;
}