#include <stdio.h>


typedef struct MYBODY
{
	int nHeight;
	int nWeight;

} MYBODY;

typedef struct USERDATA
{
	char szName[32];
	char szPhone[32];
	MYBODY body;
} USERDATA;

int main(void)
{
	USERDATA user = {
		"HOON",
		"1234",
		{ 180, 75 }

	};

	printf("%s\t%s\t%d\t%d\n",
		user.szName, user.szPhone, user.body.nHeight,
		user.body.nWeight);


	return 0;

}