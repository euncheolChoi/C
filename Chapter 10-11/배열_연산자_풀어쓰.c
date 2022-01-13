#include <stdio.h>
#include <stdlib.h>	
#include <string.h>

int main(void)
{
	char szBuffer[32] = { "You are a girl." };
	char *pszData = szBuffer + 4;

	printf("%c\n", szBuffer[0]);
	printf("%c\n", pszData[0]);
	printf("%c\n", szBuffer[6]);

	printf("%s\n", szBuffer + 4);
	printf("%p\n", pszData);
	printf("%s\n", pszData + 4);

	return 0;

}