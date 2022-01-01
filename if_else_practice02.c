#include <stdio.h>

//01 코드의 경우처럼, 청소년을 먼저 분류하고 다시 어린이를 분류하고 이어서 성인을 분류하는 방식은 절대 바람직하지 않다!! 
//이렇게 한 번의 관계 연산자만 사용해도 충분하다.
int main(void)
{
	int nAge = 0, nFee = 1000;
	double nRate = 0.0;
	printf("나이를 입력하세요?: ");
	scanf_s("%d", &nAge);

	if (nAge >= 65)		nRate = 0.0;
	else if (nAge >= 20) nRate = 1.0;
	else if (nAge >= 14) nRate = 0.5;
	else if (nAge >= 4)	 nRate = 0.1;
	else				nRate = 0.1;

	printf("최종요금 : %d", (int)(nRate*nAge) );
	return 0;
}