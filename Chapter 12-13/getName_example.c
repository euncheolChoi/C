#include <stdio.h>	
#include <stdlib.h>
// ������� �̸��� �Է¹޴� UI�ڵ带 main()�Լ��κ��� �и��ؼ� ���� �Լ��� ����.
//������ ��ü�����δ� ����Ű�� ����� ���� ũ�⸦ �˼�����. ���� ��ȣ������ �Ű������� �������� ���
//�ݵ�� ��� �޸��� ũ�⸦ �Ű������� �޾ƾ� �Ѵ�! 

/*
void GetName(char *pszName, int nSize) {

	printf("�̸��� �Է��ϼ���:");
	gets_s(pszName, nSize);

}

int main(int argc, char* argv[]) {

	char szName[32] = { 0 };

	GetName(szName, sizeof(szName));
	printf("����� �̸��� %s�Դϴ�\n", szName);
	return 0;

}

*/ 

char* GetName(void)
{
	char *pszName = NULL;

	//�̺κ� �����ϸ� pszName���� calloc�Լ��� �����Ҵ��� �޸��� �ּҰ� ����ֵ�
	pszName = (char*)calloc(32, sizeof(char)); 
	printf("�̸��� �Է��ϼ���");

	gets_s(pszName, sizeof(char) * 32);
	return pszName;

}

int main(int argc, char* argv[]) {

	char *pszName = NULL;
	pszName = GetName();
	// �����ͺ��� pszName���� �ּҰ� ����Ǿ� �����Ƿ� %s�� ����ؾ��Ѵ�.
	printf("����� �̸��� %s �Դϴ�\n", pszName);

	free(pszName);
	return 0;

}