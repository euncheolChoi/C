#include <stdio.h>

int main(void)
{
	char szBuffer[16] = { "Hello" };
	char *pszData = szBuffer;

	int nLength = 0;

	while (*pszData != '\0')
	{
		pszData++;
	}

	// pszData ���� NULL���ڰ� ����� �ּҰ� ����Ǿ��ְ�, szBuffer���� �迭�� ���� �ּҰ� ����Ǿ� �ִ�.
	printf("Length : %d\n", pszData - szBuffer);  
	return 0;


}