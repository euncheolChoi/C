#include <stdio.h>
#include <stdlib.h>


// ���� ������ �׸��� �߿� ����. GetName() �Լ����� �����Ҵ��� �޸𸮸� free(pszName)���� �ʾ�����
// �� ��� memory leak �߻����� �ʴ´�. 
char* GetName(void)
{

	char* pszName = NULL;

	pszName = (char*)calloc(32, sizeof(char));
	printf("�̸��� �Է��ϼ��� : ");
	gets_s(pszName, sizeof(char) * 32);

	//���⼭ GetName() �Լ��� main()�Լ��� �ּҸ� ��ȯ�ϴ� ���� �޸𸮰� ������ �� ������,
	return pszName;

}

int main(int argc, int argv[])
{

	char* pszName = NULL;
	
	//���⼭ ������ ���谡 �Ǵ� �����ּҸ� ȣ���ڿ� ��ȯ�����ν� ��� �޸𸮿� �̸��� �ִ� ����� ������� �ʾҴ�.
	pszName = GetName();
	printf("����� �̸��� %s �Դϴ�. ", pszName);
	free(pszName);
	return 0;
}