#include <stdio.h>
#include <stdlib.h>	
#include <string.h>

int main()
{
	int *pList = NULL, *pListNew = NULL;

	int aList[3] = { 0 };
	// malloc은 기본적으로 void*를 반환하기 때문에 기 주소가 가리키는 대상 메모르를 
	// int*로 강제 형변환함
	pList = (int*)malloc(sizeof(int) * 3);

	// 첫번째 인수로 전달된 메모리 주소를 시작으로, 세번째 인수로 전달된 메모리에 
	//두 번째 인수로 전달된 정보를 대입한다. malloc과 memset은 세트! 주로 이렇게만 쓴다.
	memset(pList, 0, sizeof(int) * 3);
	pListNew = (int*)calloc(3, sizeof(int));

	free(pList);
	free(pListNew);

	return 0;
}