#include <stdio.h>
#include <string.h>

// ����ü ����, �� �缱��(���⼭�� struct USERDATA�� �ٿ��� USERDATA��� �������� ���� ���Ѵ�. 
typedef struct USERDATA {

	int nAge;
	char szName[32];
	char szPhone[32];

} USERDATA;


int main(void) {
	
	//USERDATA ����ü�� ���� user ���� �� ���� , typedef ���п� ����ü �ν��Ͻ�(user)�� ������ �� struct���� ������ �� �ִ�. 
	USERDATA user = { 0, "", "" };


	//����ü ��� ����, �� ä���
	user.nAge = 10;
	strcpy(user.szName, "HOON");
	strcpy(user.szPhone, "010-1234-1211");

	printf("%d ��, %s, %s\n", user.nAge, user.szName, user.szPhone);

	return 0;
}