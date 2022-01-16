#include <stdio.h>
#include <stdlib.h>
char* GetName(void)
{
	char *pszName = NULL;

	pszName = (char*)calloc(32, sizeof(char));
	printf("이름을 입력 :");
	gets_s(pszName, sizeof(char) * 32);

	return pszName;

}

int main(int argc, char* argv[]) {

	char* pszName = NULL;
	pszName = GetName();
	printf("당신의 이름은 %s 입니다. ", pszName );

	free(pszName);

	return 0;
}