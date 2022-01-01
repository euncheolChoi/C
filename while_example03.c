#include <stdio.h>
// '*'는 문자, "*"는 문자열. 
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