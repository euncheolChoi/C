#include <stdio.h>
#include <stdlib.h>
char* GetName(void)
{
	char *pszName = NULL;

	pszName = (char*)calloc(32, sizeof(char));
	printf("�̸��� �Է� :");
	gets_s(pszName, sizeof(char) * 32);

	return pszName;

}

int main(int argc, char* argv[]) {

	char* pszName = NULL;
	pszName = GetName();
	printf("����� �̸��� %s �Դϴ�. ", pszName );

	free(pszName);

	return 0;
}