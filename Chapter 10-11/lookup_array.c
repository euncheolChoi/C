#include <stdio.h>

int main(int argc, char* argv[])
{
	double aRate[10] = {
		0.0, 0.1, 0.25,
		0.5, 0.5,
		0.6, 0.65,
		0.8, 0.82, 0.97
	};

	int nAge = 0, i = 0, nFee = 1000;

	printf("���ǥ\n");
	for (i = 1; i <= 10; ++i)
		printf("%d�� ��� : \t%d\n", i, (int)(nFee * aRate[i - 1]));
	putchar('\n');
	
	printf("���̸� �Է��ϼ���. :");
	scanf_s("%d", & nAge);

	// �ε��� ������ �Ѿ�� �迭 �ε��� ���η� ���� ���� �����Ѵ�
	if (nAge < 1)	nAge = 1;
	else			nAge = 10;

	printf("����� ����� %d �� �Դϴ�\n", (int)(nFee * aRate[nAge - 1]));
	
	return 0;
}