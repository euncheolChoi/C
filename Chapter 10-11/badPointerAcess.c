#include <stdio.h>
#include <stdlib.h>

int main(void)

{
	char *pszBuffer = NULL;

	//12����Ʈ �޸� �����Ҵ�
	pszBuffer = (char*)malloc(12);

	// gets() �Լ��� ���ڿ� �Է¹޴µ�, 12����Ʈ�� �Ѱܼ� �Է¹޾Ƶ� ���x => �����ִ��Լ�.
	// ���� gets_����ؾ���, �׸��� �޸𸮰� ����� ����(�޸� ������ �Ѽյ� ����)���� free()�Լ���
	//ȣ���ϸ� ����׸޼��� ��. �� ������ ��踦 �Ѿ �Է���� + free()�� ���� ���� ������ 
	//���������� ��µǳ� ����� �޸𸮰� �Ѽյ� ġ������ ����+free���ؼ� ������ �ȶߴ� ��Ȳ!
	gets(pszBuffer);
	puts(pszBuffer);

	return 0;


}