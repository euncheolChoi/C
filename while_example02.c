#include <stdio.h>


//������ ���α׷� ����_ ó������ �ܺ� �ݺ����� while(i < j)�� ����, ���� �ݺ����� while(j < 10) �� ���� ������ ����..
//����� ���� ���� ���󰡸� �غ��� �� �ȵƴ�!  ����� �ʱ�ȭ �ڵ带 ��� �ϴ� ����, ��� ��� ���� ���������� ����.
int main(void)
{
	int i = 0, j = 0;

	i = 1;
	while (i < 10)
	{
		j = 1;
		while (j < 10)
		{
			int nResult = i * j;
			printf("%d * %d = %d\n", i, j, nResult);

			++j;
		}
		++i;
	}
	return 0;
}