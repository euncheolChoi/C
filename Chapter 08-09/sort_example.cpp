#include <stdio.h>



typedef struct USERDATA
{
	char szName[32];
	char szPhone[32];
	struct USERDATA *pNext;
	
} USERDATA;

int main(void)
{

	USERDATA userList[4] = {
		{"±è", "1234", NULL},
		{ "Á¤", "2345", NULL},
		{ "ÁÖÁø¿ì", "3456", NULL},
		{ "±è¿ë¹Î", "4567", NULL}
	};
	USERDATA *pUser = NULL;

	userList[0].pNext = &userList[1];
	userList[1].pNext = &userList[2];
	userList[2].pNext = &userList[3];
	userList[3].pNext = NULL;

	pUser = &userList[0];


	while (pUser != NULL)
	{
		printf("%s\t%s\n", pUser->szName, pUser->szPhone);
		pUser = pUser->pNext;
	}
	return 0;


	/*
	for (int i = 0; i < 4; ++i)
	{
		printf("%s\t%s\n", userList[i].szName, userList[i].szPhone);
	}

	return 0;
	*/


}
