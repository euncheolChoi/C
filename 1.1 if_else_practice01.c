#include <stdio.h>

/*page 197 예제 
int main(void)
{
	int bus_price = 1000, nInput = 0;
	scanf_s("%d", &nInput);

	if (nInput <= 13)
	{
		if (nInput <= 3) printf("최종요금 : %d", bus_price * 0);

		else			 printf("최종요금 : %f", bus_price*0.5);
	}

	else
	{
		if (nInput <= 19) printf("최종요금 :%f", bus_price*0.75);

		else              printf("최종요금 :%d", bus_price);
	}
	
	return 0;
}
*/

int main(void)
{
	int nFee = 1000, nAge = 0;
	double nRate = 0.0;

	scanf("%d", &nAge);
	if (nAge < 14)
	{
		if (nAge < 4)		nRate = 0.0;
		else				nRate = 0.5;
	}
	else
	{
		if (nAge < 20)		nRate = 0.75;
		else                nRate = 1.0;
	}

	printf("최종요금 : %d원", (int)(nFee * nRate) );
	return 0;
}