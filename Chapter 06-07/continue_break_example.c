#include <stdio.h>

//continue-break.  ���⼭�� continue�� ���� break�� ���� ����� �����ϴ�.
// break�� ��� �ݺ��� �����ϰ� �ݺ��� �ٱ����� ������, continue�� �װ� �Ʒ� �ڵ�� ���� �ʰ� �ٽ� 
//�ݺ� ��ġ�� ���ư���.

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