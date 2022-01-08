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

	// pszData 에는 NULL문자가 저장된 주소가 저장되어있고, szBuffer에는 배열의 시작 주소가 저장되어 있다.
	printf("Length : %d\n", pszData - szBuffer);  
	return 0;


}