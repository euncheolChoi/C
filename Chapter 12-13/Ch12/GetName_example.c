#include <stdio.h>
#include <stdlib.h>


// 스택 프레임 그리는 중요 예제. GetName() 함수에서 동적할당한 메모리를 free(pszName)하지 않았지만
// 이 경우 memory leak 발생하지 않는다. 
char* GetName(void)
{

	char* pszName = NULL;

	pszName = (char*)calloc(32, sizeof(char));
	printf("이름을 입력하세요 : ");
	gets_s(pszName, sizeof(char) * 32);

	//여기서 GetName() 함수는 main()함수에 주소를 반환하는 순간 메모리가 누수될 뻔 했지만,
	return pszName;

}

int main(int argc, int argv[])
{

	char* pszName = NULL;
	
	//여기서 해제의 열쇠가 되는 기준주소를 호출자에 반환함으로써 대상 메모리에 이를수 있는 방법이 사라지지 않았다.
	pszName = GetName();
	printf("당신의 이름은 %s 입니다. ", pszName);
	free(pszName);
	return 0;
}