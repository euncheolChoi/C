#include <stdio.h>
#include <stdlib.h>	
#include <string.h>

/*

// �ƽ�Ű ���� �� t �� T���� �� ū �����̴�.
int main(void)
{

	char szBuffer[12] = { "TestString" };
	char *pszData = "TestString";
	printf("%d\n", memcmp(szBuffer, pszData, 10));
	printf("%d\n", memcmp("teststring", pszData, 10));

	printf("%d\n", memcmp("DataString", pszData, 10));
	return 0;
}

*/

// ���ڿ� �˻�.

int main(void)
{
	char szBuffer[32] = { "I AM A BOY." };
	
	printf("%p\n", szBuffer);

	printf("%p\n", strstr(szBuffer, "am"));
	printf("%p\n", strstr(szBuffer, "boy"));

	printf("Index : %d\n", strstr(szBuffer, "am") - szBuffer);
	printf("Index : %d\n", strstr(szBuffer, "boy") - szBuffer);

	return 0;

}