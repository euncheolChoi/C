#include <stdio.h>
#include <string.h>

/*
// 문자열을 복사하는 함수 만들기 
void MyStrcp(char* szBufferDst, int bufferSize, char* szBufferSrc)
{
	char* nTmp = NULL;
	nTmp = szBufferSrc;
	szBufferSrc = szBufferDst;
	szBufferDst = nTmp;


} 

int main(int argc, char* argv[])
{
	char szBufferSrc[12] = { "TestString" };
	char szBufferDst[12] = { 0 };

	MyStrcp(szBufferDst, sizeof(szBufferDst), szBufferSrc);
	puts(szBufferDst);

	return 0;

}

*/

//문자열을 복사하려면 원본 문자열의 길이를 측정할 수밖에 없음. 
//추가로 37,38행에서 대상 메모리의 적절한 크기를 확인하는데 측정된 정보를 이용.
//49행에서 이를 호출자에 반환해서 함수가 제대로 동작했다는 사실과 문자열의 길이정보 두가지를 전달.
//문자열이 제대로 복사되었다면 적어도 0이상의 값이 반환되고, 버퍼크기가 작아서 메모리가 복사가 안된다면
//음수가 반환되었을 것. 

int MyStrcp(char* pszDst, int nDstSize, const char *pszSrc)
{
	int i = 0, nLenSrc = 0;

	nLenSrc = strlen(pszSrc);
	if (nLenSrc + 1 > nDstSize)
		return nDstSize - (nLenSrc + 1);

	while (pszSrc[i] != NULL)
	{
		pszDst[i]= pszSrc[i];
		++i;
	}

	//중요한 부분. 문자들을 모두 복사한 뒤에는 마지막에 반드시 널문자를 넣어줘야 함! 안그러면 복사는 잘 되었어도 
	//사실상 활용하기가 어려운 문자열이 됨. 41행에서 nLenSrc에서 1더한 이유도 널문자가 저장될 공간까지 고려했기때문.
	pszDst[i] = '\0';
	return nLenSrc;
}

int main(int argc, char* argv[])
{
	char szBufferSrc[12] = { "TestString" };
	char szBufferDst[12] = { 0 };

	MyStrcp(szBufferDst, sizeof(szBufferDst), szBufferSrc);
	puts(szBufferDst);

	return 0;

}

