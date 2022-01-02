#include <stdio.h>

//continue-break.  여기서는 continue를 쓰나 break를 쓰나 결과는 동일하다.
// break는 즉시 반복을 중지하고 반복문 바깥으로 나가고, continue는 그것 아래 코드는 읽지 않고 다시 
//반복 위치로 돌아간다.

int main(void)
{
	int i = 0, j = 0;

	for (i = 0; i < 5; ++i)
	{
		printf("i == %d\n", i);

		for (j = 0; j < 5; ++j)
		{
			if (j > 2)
				continue;
			printf("\t%dth\n", j);

		}
		printf("end\n\n", i);
	}
	return 0;
}