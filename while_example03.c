#include <stdio.h>
// '*'�� ����, "*"�� ���ڿ�. 
int main(void)
{
	int i = 0, j = 0;


	i = 1;
	while (i <= 5)
	{
		j = 1;
		while (j <= 5)
		{
			printf("*\t");
			++j;
		}
		printf("\n");
		++i;
	}
	return 0;
}