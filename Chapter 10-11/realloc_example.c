#include <stdio.h>
#include <malloc.h>
#include <string.h>

int main(void)
{
	char *pszBuffer = NULL, *pszNewBuffer = NULL;

	// 12바이트 메모리를 동적 할당, 힙 영역에 할당된 메모리 요소의 형식이 char이고  
	// 그 메모리 중 첫 번째 바이트 메모리의 주소를 pszBuffer에 저장
	pszBuffer = (char*)malloc(12);

	//문자열을 콘솔에 출력하는게 아니라 특정 주소의 메모리에 출력한다(저장한다)
	sprintf(pszBuffer, "%s", "Teststring");

	printf("[%p] %d %s\n", pszBuffer, _msize(pszBuffer), pszBuffer);

	// 할당에 실패하면 NULL반환 - 이때는 수동으로 메모리 해제해줘야함 / 할당성공하면 반환값은 원래의 
	//메모리 시작 주소값과 동일한 값을 반환
	pszNewBuffer = (char*)realloc(pszBuffer, 32);

	if (pszNewBuffer == NULL)
	{
		free(pszBuffer);
	}
	sprintf(pszNewBuffer, "%s", "TeststringData	");
	printf("[%p] %d %s\n",
		pszNewBuffer, _msize(pszNewBuffer), pszNewBuffer);

	free(pszNewBuffer);
	return 0;

}