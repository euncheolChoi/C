#include <stdio.h>

int main(int argc, char* argv[])
{
	
	char* astrList[3] = { "Hello", "World", "String" };
	
	//astrList의 요소 형식이 char* 이므로 char**에 담는다. 
	char* *ppstrList = astrList;

	//char** 형식 변수의 주소는 char***에 담는다.
	char** *pppstrList = &ppstrList;

	// *(char** + 인덱스)의 형식은 char*이다-> 따라서 %s로 출력하거나 puts로 출력한다.
	//ppstrList의 자료형은 char**인데 포인터를 따라 0번 인덱스로 가면 char* 를 만나게된다(주소를 저장하고있는놈)
	puts(ppstrList[0]);
	puts(ppstrList[1]);
	puts(ppstrList[2]);

	//char***를 두번 간접지정하면 char*이다. 
	// *pppstrList[0]에서 가장먼저 수행되는것은 간접지정연산이 아니라 배열연산. 따라서 **(pppstrList + 0) 이고
	// pppstrList + 0 연산 결과 자료형은 char*** 이므로 이것에 대해 간접지정연산 2번 하면 char*가 된다. 
	puts(*pppstrList[0]);
	puts(*(*pppstrList + 0) + 1);

	return 0;
}