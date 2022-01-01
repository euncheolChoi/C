#include <stdio.h>

// goto 문은 즉시 코드의 흐름을 바꿔주나, 설계적으로 전려 관련이 없어야 할 두 대상을 하나로 묶어줄 수 있기
//때문에 구조적 결함을 만들어 낼 가능성이 높다. 유지보수의 효율을 매우 떨어뜨리므로 예외처리의경우를 제외하고는 쓰지 않는다.
// ERROR 문의 ':' 콜론은 레이블명이다(일종의 팻말), switch-case 문의 case문과 비슷한 역할을 한다.
// 이 코드 오류가 있으나 아직 해결 못함! 다음에 다시 체크

int main(void)
{
	int nAge = 0;
	printf("나이를 입력하세요 : ");
	scanf_s("%d", &nAge);

//예외처리 코드
ERROR:
	puts("나이는 0보다 작거나 같을 수 없습니다");
	return 0;

	if (nAge <= 0)
	{
		goto ERROR;
	}

	else
	{
		printf("당신의 나이는 %d 살입니다.", nAge);
		return 0;
	}

}