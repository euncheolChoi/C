#include <stdio.h>

//01 �ڵ��� ���ó��, û�ҳ��� ���� �з��ϰ� �ٽ� ��̸� �з��ϰ� �̾ ������ �з��ϴ� ����� ���� �ٶ������� �ʴ�!! 
//�̷��� �� ���� ���� �����ڸ� ����ص� ����ϴ�.
int main(void)
{
	int nAge = 0, nFee = 1000;
	double nRate = 0.0;
	printf("���̸� �Է��ϼ���?: ");
	scanf_s("%d", &nAge);

	if (nAge >= 65)		nRate = 0.0;
	else if (nAge >= 20) nRate = 1.0;
	else if (nAge >= 14) nRate = 0.5;
	else if (nAge >= 4)	 nRate = 0.1;
	else				nRate = 0.1;

	printf("������� : %d", (int)(nRate*nAge) );
	return 0;
}