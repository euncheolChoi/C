#include <stdio.h>

int main(int argc, char* argv[])
{
	double aRate[10] = {
		0.0, 0.1, 0.25,
		0.5, 0.5,
		0.6, 0.65,
		0.8, 0.82, 0.97
	};

	int nAge = 0, i = 0, nFee = 1000;

	printf("요금표\n");
	for (i = 1; i <= 10; ++i)
		printf("%d세 요금 : \t%d\n", i, (int)(nFee * aRate[i - 1]));
	putchar('\n');
	
	printf("나이를 입력하세요. :");
	scanf_s("%d", & nAge);

	// 인덱스 범위를 넘어서면 배열 인덱스 내부로 값을 강제 조정한다
	if (nAge < 1)	nAge = 1;
	else			nAge = 10;

	printf("당신의 요금은 %d 원 입니다\n", (int)(nFee * aRate[nAge - 1]));
	
	return 0;
}