#include <stdio.h>
#include <stdlib.h>	
#include <string.h>

int main(void)
{
	char szBuffer[32] = { "you are a girl." };
	printf("%c\n", szBuffer[0]); //char �������� ���

// 0�� �ּҿ� ���� �迭�� �̸�(�ּ�)�� ���� �������� ������ ��
	printf("%c\n", *szBuffer);

//	printf("%c\n", szBuffer + 0); �̰Ŵ� ������ ���� ��µȴ�.
// �迭 �����ڴ� '�����ּ� + �ε���' �� �������� ���� �ּҸ� ���������� �Ͱ� ����. 
	printf("%c\n", szBuffer[5]);
	printf("%c\n", *(szBuffer + 5));

	printf("%s\n", &szBuffer[4]);
	printf("%s\n", &*(szBuffer + 4));
	printf("%s\n", szBuffer + 4);

	return 0;


}