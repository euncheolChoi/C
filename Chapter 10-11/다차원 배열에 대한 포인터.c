#include <stdio.h>

// 일반적으로 다차원 배열에 대한 포인터 선언할 일이 많지는 않음. 그러나 영상처리 공부하려면 반드시 알아야 한다
// 눈으로 볼수있는 각종 이미지가 논리적으로 2차원배열 형식이기 떄문.


int main(int argc, char* argv[])
{
	//char[12]가 요소이고 이게 2개 있는 배열. 
	// char** pstrList = astrList 라고 하면 char*를 요쇼로 가지는 배열의 의미가 된다!! 따라서 안됨.
	char astrList[2][12] = { "Hello", "World" };
	
	// 다차원 배열에 대한 포인터.반드시 괄호로 묶어야 한다! 
	// 이것만은 꼭! 배열의 식별자인 주소를 저장할 수 있는 포인터 변수는 '배열 요소의 자료형에 대한 포인터'
	char(*pstrList)[12] = astrList; 

	puts(pstrList[0]);
	puts(pstrList[1]);

	return 0;
}

