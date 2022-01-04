#include <stdio.h>

//배열의 크기를 이러한 방식으로 셀 수 있다. 이때 문자열의 끝은 '\0'임을 이용한다!

int main(void) {

	char szBuffer[32] = { 0 };
	int nLength = 0;

	printf("input your name");
	gets(szBuffer);

	while (szBuffer[nLength] != '\0') //NULL 값을 만나면 계수 중단.
		nLength++;

	printf("your name is : %s(%d).\n", szBuffer, nLength);
	return 0;

}