#include <stdio.h>	
#include <conio.h>	
#include <stdlib.h>

int GetFee(int nAge)
{
	int nFee = 1000;
	if (nAge < 20)		nFee /= 2;

	return 0;
}

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

int GetAge(void)
{
	int nAge = 0;
	printf("���̸� �Է��ϼ���: ");
	scanf_s("%d", nAge);

	return nAge;
}


int main(void)
{
	int nMenu = 0, nAge = 0;
	while ((nMenu = PrintMenu()) != 0)
	{
		if (nMenu == 1)
		{
			nAge = GetAge();
			printf("����� ����� %d ���Դϴ�. ", GetFee(nAge));
			_getch();

		}

	}

	puts("bye!");
	return 0;
}