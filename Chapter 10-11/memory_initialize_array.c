#include <stdio.h>	
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int *pList = NULL, *pListNew = NULL;

	int aList[3] = { 0 };
	pList = (int*)malloc(sizeof(int) * 3);
	memset(pList, 0, sizeof(int) * 3);
	
	pListNew = (int*)calloc(3, sizeof(int));

	free(pList);
	free(pListNew);
	printf("%d\n", pListNew);
	return 0;



}