#include <stdio.h>

int main(int argc, char* argv[])
{
	
	char* astrList[3] = { "Hello", "World", "String" };
	
	//astrList�� ��� ������ char* �̹Ƿ� char**�� ��´�. 
	char* *ppstrList = astrList;

	//char** ���� ������ �ּҴ� char***�� ��´�.
	char** *pppstrList = &ppstrList;

	// *(char** + �ε���)�� ������ char*�̴�-> ���� %s�� ����ϰų� puts�� ����Ѵ�.
	//ppstrList�� �ڷ����� char**�ε� �����͸� ���� 0�� �ε����� ���� char* �� �����Եȴ�(�ּҸ� �����ϰ��ִ³�)
	puts(ppstrList[0]);
	puts(ppstrList[1]);
	puts(ppstrList[2]);

	//char***�� �ι� ���������ϸ� char*�̴�. 
	// *pppstrList[0]���� ������� ����Ǵ°��� �������������� �ƴ϶� �迭����. ���� **(pppstrList + 0) �̰�
	// pppstrList + 0 ���� ��� �ڷ����� char*** �̹Ƿ� �̰Ϳ� ���� ������������ 2�� �ϸ� char*�� �ȴ�. 
	puts(*pppstrList[0]);
	puts(*(*pppstrList + 0) + 1);

	return 0;
}