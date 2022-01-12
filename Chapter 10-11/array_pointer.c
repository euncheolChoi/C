#include <stdio.h>
#include <stdlib.h>	
#include <string.h>

int main(void)
{
	char szBuffer[32] = { "you are a girl." };
	printf("%c\n", szBuffer[0]); //char 형식으로 출력

// 0번 주소에 대한 배열의 이름(주소)에 대해 간접지정 연산을 함
	printf("%c\n", *szBuffer);

//	printf("%c\n", szBuffer + 0); 이거는 쓰레기 값이 출력된다.
// 배열 연산자는 '기준주소 + 인덱스' 의 연산결과로 얻은 주소를 간접지정한 것과 같다. 
	printf("%c\n", szBuffer[5]);
	printf("%c\n", *(szBuffer + 5));

	printf("%s\n", &szBuffer[4]);
	printf("%s\n", &*(szBuffer + 4));
	printf("%s\n", szBuffer + 4);

	return 0;


}