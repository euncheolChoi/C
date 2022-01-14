#include <stdio.h>
#include <stdlib.h>

int main(void)

{
	char *pszBuffer = NULL;

	//12바이트 메모리 동적할당
	pszBuffer = (char*)malloc(12);

	// gets() 함수로 문자열 입력받는데, 12바이트를 넘겨서 입력받아도 경고x => 결함있는함수.
	// 따라서 gets_사용해야함, 그리고 메모리가 변경된 상태(메모리 단편이 훼손된 상태)에서 free()함수를
	//호출하면 디버그메세지 뜸. 이 문제는 경계를 넘어서 입력허용 + free()도 하지 않은 문제라서 
	//정상적으로 출력되나 사실은 메모리가 훼손된 치명적인 문제+free안해서 오류도 안뜨는 상황!
	gets(pszBuffer);
	puts(pszBuffer);

	return 0;


}