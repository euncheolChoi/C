#include <stdio.h>
#include <stdlib.h>	
#include <string.h>

/* 
�� �ڵ��� ������ : 10�� �࿡�� pszData������ ���� �Ҵ�� �޸��� �ּҰ� szBuffer�� �޸� �ּҷ� �������.
��, deep copy(�ּ� �Ӹ� �ƴ϶� ��� �޸𸮰� ���� ���뵵 �����ϴ� ��)�� ���� �ʾҴ�. ���� free(pszData)�� �Ұ���
���� ������ �ٽ��� ���� ����� ����Ű�� �����Ͱ� �þ�°� �ƴ϶� ���� ����� ���� ���� ����Ǵ� ��!
���� ����ó�� ����� �ƴ� �����͸� �����ϴ� ���� shallow copy��� �Ѵ�. 

int main(void)
{  
	char szBuffer[12] = { "HelloWorld " };
	char *pszData = NULL;

	pszData = (char*)malloc(sizeof(char) * 12);
	pszData = szBuffer;
	puts(pszData);
	return 0;

}

*/

//����

int main(void)
{
	char szBuffer[12] = { "HelloWorld" };
	char *pszData = NULL;

	pszData = (char*)malloc(sizeof(char) * 12);
	
	//���� ���縦 �ؼ� �ּ� �Ӹ� �ƴ϶� ���� �����Ѵ�.
	strcpy(pszData, szBuffer);
	puts(pszData);

	free(pszData);

	return 0;



}