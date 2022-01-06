#include <stdio.h>	

// 성적을 입력받는 함수
int GetResult(void)
{
	int nResult = 0;
	printf("성적(1~100)을 입력하세요 : ");
	scanf_s("%d", &nResult);

	if (nResult < 1 || nResult > 100) return 0;

	return nResult;
}

// 학점을 계산하는 기능
// return 하는 값이 char이므로 GetGrade의 앞에 char를 써줘야 한다! 
char GetGrade(int nScore)
{
	if (nScore >= 90)	return 'A';
	else if (nScore >= 80) return 'B';
	else if (nScore >= 70) return 'C';
	else if (nScore >= 60) return 'D';

	return 'F';

}

int main(void)
{

	int nResult = 0;

	// 앞서 정의한 GetResult() 함수가 형식 인수가 void 이므로 ! 
	nResult = GetResult();

	if (nResult == 0)
	{
		printf("ERROR : 알맞은 범위의 점수를 입력하세요 \n");
		return 0;
	}


	printf("당신의 학점은 '%c'(%d)입니다. ", GetGrade(nResult), nResult);


	return 0;


}