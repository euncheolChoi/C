#include <stdio.h>

/*
// call by reference (교환)
void Swap(int *pLeft, int *pRight)
{

	int nTmp = *pLeft;
	*pLeft = *pRight;
	*pRight = nTmp;

}

int main(int argc, char* argv[])
{
	int x = 10, y = 20;
	Swap(&x, &y);
	printf("%d, %d\n", x, y);
	return 0;

}

*/

// const는 형한정어. char* 인 매개변수 pszParam을 통해 간접지정한 대상을 상수화. 즉 간접지정한 대상에서 
// 정보를 읽을 수는 있지만 쓸 수는 없다.

//매개변수로 포인터를 쓸 때, 예제처럼 const를 잘 활용하면 피호출자 함수가 의도치 않게 호출자가 전달한 주소의 메모리에 
//쓰기 연산하는 일을 방지할 수 있다. 
int GetLength(const char *pszParam)
{
	//	1차원 배열을 포인터 관점으로 설명하면 기준주소에서 일정 인덱스만큼 떨어진 상대주소를 배열요소의 변수로 지정하는 연산.
	// 즉 pszParam[인덱스] 는 *(pszParam + 인덱스) 와 같다
	int nLength = 0;
	while (pszParam[nLength] != '\0')
		nLength++;

	return nLength;
}

int main(int argc, char* argv[]) {

	char *pszData = "Hello"; //문자열도 '문자의 배열'이다.

	printf("%d\n", GetLength("Hi"));
	printf("%d\n", GetLength(pszData));

	return 0;
}