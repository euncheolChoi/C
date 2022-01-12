#include <stdio.h>
#include <stdlib.h>	
#include <string.h>

/* 
이 코드의 문제점 : 10번 행에서 pszData변수에 동적 할당된 메모리의 주소가 szBuffer의 메모리 주소로 덮어씌워짐.
즉, deep copy(주소 뿐만 아니라 대상 메모리가 가진 내용도 복사하는 것)을 하지 않았다. 따라서 free(pszData)도 불가능
깊은 복사의 핵심은 단지 대상을 가리키는 포인터가 늘어나는게 아니라 실제 대상이 여로 개로 복사되는 것!
밑의 예제처럼 대상이 아닌 포인터만 복사하는 것을 shallow copy라고 한다. 

int main(void)
{  
	char szBuffer[12] = { "HelloWorld " };
	char *pszData = NULL;

	pszData = (char*)malloc(sizeof(char) * 12);
	pszData = szBuffer;
	puts(pszData);
	return 0;

}

*/

//수정

int main(void)
{
	char szBuffer[12] = { "HelloWorld" };
	char *pszData = NULL;

	pszData = (char*)malloc(sizeof(char) * 12);
	
	//깊은 복사를 해서 주소 뿐만 아니라 값도 저장한다.
	strcpy(pszData, szBuffer);
	puts(pszData);

	free(pszData);

	return 0;



}