#include <stdio.h>

/*
// call by reference (��ȯ)
void Swap(int *pLeft, int *pRight)
{

	int nTmp = *pLeft;
	*pLeft = *pRight;
	*pRight = nTmp;

}

int main(int argc, char* argv[])
{
	int x = 10, y = 20;
	Swap(&x, &y);
	printf("%d, %d\n", x, y);
	return 0;

}

*/

// const�� ��������. char* �� �Ű����� pszParam�� ���� ���������� ����� ���ȭ. �� ���������� ��󿡼� 
// ������ ���� ���� ������ �� ���� ����.

//�Ű������� �����͸� �� ��, ����ó�� const�� �� Ȱ���ϸ� ��ȣ���� �Լ��� �ǵ�ġ �ʰ� ȣ���ڰ� ������ �ּ��� �޸𸮿� 
//���� �����ϴ� ���� ������ �� �ִ�. 
int GetLength(const char *pszParam)
{
	//	1���� �迭�� ������ �������� �����ϸ� �����ּҿ��� ���� �ε�����ŭ ������ ����ּҸ� �迭����� ������ �����ϴ� ����.
	// �� pszParam[�ε���] �� *(pszParam + �ε���) �� ����
	int nLength = 0;
	while (pszParam[nLength] != '\0')
		nLength++;

	return nLength;
}

int main(int argc, char* argv[]) {

	char *pszData = "Hello"; //���ڿ��� '������ �迭'�̴�.

	printf("%d\n", GetLength("Hi"));
	printf("%d\n", GetLength(pszData));

	return 0;
}