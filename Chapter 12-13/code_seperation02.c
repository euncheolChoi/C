#include <stdio.h>

// 배열 실인수로서 포인터 매개변수를 받는다. 포인터에는 요소의 갯수 정보가 없으므로 int 매개변수가 더 필요.
// 입력받아야 하는 정수 갯수가 달라져도 이 코드는 불변.
void InitList(int *pList, int nSize) {

	int i = 0;
	for (i = 0; i < nSize; ++i)
	{
		printf("정수를 입력하세요 : ");
		scanf_s("%d", &pList[i]);

	}

}

// 정렬 기능을 가진 함수. 요소가 int형식인 배열(요소의 자료형이 int*)이라면
// 요소의 갯수와 상관없이 정렬할 수 있다.

void SortList(int *pList, int nSize)
{
	int i = 0, j = 0, nTmp = 0;

	for (i = 0; i < nSize - 1; ++i)
	{

		for (j = i + 1; j < nSize; ++j)
		{
			if (pList[j] < pList[i])
			{
				nTmp = pList[j];
				pList[j] = pList[i];
				pList[i] = nTmp;

			}
		}
	}
}

//print하는 부분도 아예 따로 빼서 구성. ui와 기능의 분리!
void PrintList(int* pList, int nSize)
{
	int i = 0;
	for (i = 0; i < nSize; ++i)
		printf("%d\t", pList[i]);

	putchar('\n');

}

//이런게 좋은 코드=> 왜냐면 main()함수의 일부만 수정해서 쉽게 유지보수할수 있기 때문이다. 
int main(void) {

	//정렬해야 할 정보는 main()함수의 지역변수인 aList에 배열에 담는다.
	int aList[5] = { 0 };

	InitList(aList, 5);
	SortList(aList, 5);
	PrintList(aList, 5);

	return 0;
}