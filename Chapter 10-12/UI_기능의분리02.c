#include <stdio.h>	

// ������ �Է¹޴� �Լ�
int GetResult(void)
{
	int nResult = 0;
	printf("����(1~100)�� �Է��ϼ��� : ");
	scanf_s("%d", &nResult);

	if (nResult < 1 || nResult > 100) return 0;

	return nResult;
}

// ������ ����ϴ� ���
// return �ϴ� ���� char�̹Ƿ� GetGrade�� �տ� char�� ����� �Ѵ�! 
char GetGrade(int nScore)
{
	if (nScore >= 90)	return 'A';
	else if (nScore >= 80) return 'B';
	else if (nScore >= 70) return 'C';
	else if (nScore >= 60) return 'D';

	return 'F';

}

int main(void)
{

	int nResult = 0;

	// �ռ� ������ GetResult() �Լ��� ���� �μ��� void �̹Ƿ� ! 
	nResult = GetResult();

	if (nResult == 0)
	{
		printf("ERROR : �˸��� ������ ������ �Է��ϼ��� \n");
		return 0;
	}


	printf("����� ������ '%c'(%d)�Դϴ�. ", GetGrade(nResult), nResult);


	return 0;


}