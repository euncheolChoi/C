#include <stdio.h>

int main(void)
{

	// astrList[3]은	 배열이고 각각의 요소형식은 char*이다 ( = astrList의 자료형은 char* [3]). 즉 각각의 0,1,2 인덱스를 가진
	// 요소에는 char*가 저장되어있고, char 형 포인터가 가리키는 메모리 주소를 따라가면
	// Hello, World, String 가 저장되어있음. 
	char *astrList[3] = { "Hello", "World", "String" };

	// astrList는 배열이고 각 요소에 char*가 저장되어있으므로 %s로 출력해야해. ( %s는 인수가 가리키는 메모리의 내용을 string으로 출력)
	printf("%s\n", astrList[0]);
	printf("%s\n", astrList[1]);
	printf("%s\n", astrList[2]);


	// 상대주소 계산. astrList의 자료형은 char*의 배열, 즉 char*[3]이고 결국 char**이 된다!!! 이것만 이해하면된다.
	// char* 배열의 주소를 담을 수 있는 포인터 변수의 자료형은 char** 이므로 이게 자료형.
	//과정을 풀어쓰면 : *(배열요소에 대한 포인터 + 인덱스) 이고 이건 *(char** + int) => 따라서 char* 배열의 주소담을수있는 포인터변수의 자료형은 char**
	//이때 간접지정 연산을 한번만 하면 *(char**) 즉 char*가 된다.
	printf("%s\n", astrList[0] + 1); // 따라서 char* + int 형식의 상대주소계산. -> 연산결과 자료형은 char*
	printf("%s\n", astrList[0] + 2);
	printf("%s\n", astrList[0] + 3);

	// 이 경우는 char**에 간접지정 연산을 두 번 수행한 것과 같다. 즉 **(char**)가 된 것. 
	// astrList 의 자료형이 char** 인데 이놈에 상대주소연산 2번 하게 했다.(포인터를 2번 따라가게 함 => 간접지정 연산 2번 수행)
	printf("%s\n", astrList[0][3]);
	printf("%s\n", astrList[1][3]);
	printf("%s\n", astrList[2][3]); 
	
	
	return 0;


}