#include <stdio.h>	
#include <stdlib.h>
// 사용자의 이름을 입력받는 UI코드를 main()함수로부터 분리해서 별도 함수로 만듦.
//포인터 자체만으로는 가리키는 대상의 실제 크기를 알수없다. 따라서 피호출자의 매개변수가 포인터인 경우
//반드시 대상 메모리의 크기를 매개변수로 받아야 한다! 

/*
void GetName(char *pszName, int nSize) {

	printf("이름을 입력하세요:");
	gets_s(pszName, nSize);

}

int main(int argc, char* argv[]) {

	char szName[32] = { 0 };

	GetName(szName, sizeof(szName));
	printf("당신의 이름은 %s입니다\n", szName);
	return 0;

}

*/ 

char* GetName(void)
{
	char *pszName = NULL;

	//이부분 실행하면 pszName에는 calloc함수가 동적할당한 메모리의 주소가 들어있디
	pszName = (char*)calloc(32, sizeof(char)); 
	printf("이름을 입력하세요");

	gets_s(pszName, sizeof(char) * 32);
	return pszName;

}

int main(int argc, char* argv[]) {

	char *pszName = NULL;
	pszName = GetName();
	// 포인터변수 pszName에는 주소가 저장되어 있으므로 %s로 출력해야한다.
	printf("당신의 이름은 %s 입니다\n", pszName);

	free(pszName);
	return 0;

}