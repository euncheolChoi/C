#include <stdio.h>

int main(void)
{

	// astrList[3]��	 �迭�̰� ������ ��������� char*�̴� ( = astrList�� �ڷ����� char* [3]). �� ������ 0,1,2 �ε����� ����
	// ��ҿ��� char*�� ����Ǿ��ְ�, char �� �����Ͱ� ����Ű�� �޸� �ּҸ� ���󰡸�
	// Hello, World, String �� ����Ǿ�����. 
	char *astrList[3] = { "Hello", "World", "String" };

	// astrList�� �迭�̰� �� ��ҿ� char*�� ����Ǿ������Ƿ� %s�� ����ؾ���. ( %s�� �μ��� ����Ű�� �޸��� ������ string���� ���)
	printf("%s\n", astrList[0]);
	printf("%s\n", astrList[1]);
	printf("%s\n", astrList[2]);


	// ����ּ� ���. astrList�� �ڷ����� char*�� �迭, �� char*[3]�̰� �ᱹ char**�� �ȴ�!!! �̰͸� �����ϸ�ȴ�.
	// char* �迭�� �ּҸ� ���� �� �ִ� ������ ������ �ڷ����� char** �̹Ƿ� �̰� �ڷ���.
	//������ Ǯ��� : *(�迭��ҿ� ���� ������ + �ε���) �̰� �̰� *(char** + int) => ���� char* �迭�� �ּҴ������ִ� �����ͺ����� �ڷ����� char**
	//�̶� �������� ������ �ѹ��� �ϸ� *(char**) �� char*�� �ȴ�.
	printf("%s\n", astrList[0] + 1); // ���� char* + int ������ ����ּҰ��. -> ������ �ڷ����� char*
	printf("%s\n", astrList[0] + 2);
	printf("%s\n", astrList[0] + 3);

	// �� ���� char**�� �������� ������ �� �� ������ �Ͱ� ����. �� **(char**)�� �� ��. 
	// astrList �� �ڷ����� char** �ε� �̳� ����ּҿ��� 2�� �ϰ� �ߴ�.(�����͸� 2�� ���󰡰� �� => �������� ���� 2�� ����)
	printf("%s\n", astrList[0][3]);
	printf("%s\n", astrList[1][3]);
	printf("%s\n", astrList[2][3]); 
	
	
	return 0;


}