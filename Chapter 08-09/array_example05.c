#include <stdio.h>

//�迭�� ũ�⸦ �̷��� ������� �� �� �ִ�. �̶� ���ڿ��� ���� '\0'���� �̿��Ѵ�!

int main(void) {

	char szBuffer[32] = { 0 };
	int nLength = 0;

	printf("input your name");
	gets(szBuffer);

	while (szBuffer[nLength] != '\0') //NULL ���� ������ ��� �ߴ�.
		nLength++;

	printf("your name is : %s(%d).\n", szBuffer, nLength);
	return 0;

}