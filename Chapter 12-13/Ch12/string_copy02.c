#include <stdio.h>
#include <string.h>

/*
// ���ڿ��� �����ϴ� �Լ� ����� 
void MyStrcp(char* szBufferDst, int bufferSize, char* szBufferSrc)
{
	char* nTmp = NULL;
	nTmp = szBufferSrc;
	szBufferSrc = szBufferDst;
	szBufferDst = nTmp;


} 

int main(int argc, char* argv[])
{
	char szBufferSrc[12] = { "TestString" };
	char szBufferDst[12] = { 0 };

	MyStrcp(szBufferDst, sizeof(szBufferDst), szBufferSrc);
	puts(szBufferDst);

	return 0;

}

*/

//���ڿ��� �����Ϸ��� ���� ���ڿ��� ���̸� ������ ���ۿ� ����. 
//�߰��� 37,38�࿡�� ��� �޸��� ������ ũ�⸦ Ȯ���ϴµ� ������ ������ �̿�.
//49�࿡�� �̸� ȣ���ڿ� ��ȯ�ؼ� �Լ��� ����� �����ߴٴ� ��ǰ� ���ڿ��� �������� �ΰ����� ����.
//���ڿ��� ����� ����Ǿ��ٸ� ��� 0�̻��� ���� ��ȯ�ǰ�, ����ũ�Ⱑ �۾Ƽ� �޸𸮰� ���簡 �ȵȴٸ�
//������ ��ȯ�Ǿ��� ��. 

int MyStrcp(char* pszDst, int nDstSize, const char *pszSrc)
{
	int i = 0, nLenSrc = 0;

	nLenSrc = strlen(pszSrc);
	if (nLenSrc + 1 > nDstSize)
		return nDstSize - (nLenSrc + 1);

	while (pszSrc[i] != NULL)
	{
		pszDst[i]= pszSrc[i];
		++i;
	}

	//�߿��� �κ�. ���ڵ��� ��� ������ �ڿ��� �������� �ݵ�� �ι��ڸ� �־���� ��! �ȱ׷��� ����� �� �Ǿ�� 
	//��ǻ� Ȱ���ϱⰡ ����� ���ڿ��� ��. 41�࿡�� nLenSrc���� 1���� ������ �ι��ڰ� ����� �������� ����߱⶧��.
	pszDst[i] = '\0';
	return nLenSrc;
}

int main(int argc, char* argv[])
{
	char szBufferSrc[12] = { "TestString" };
	char szBufferDst[12] = { 0 };

	MyStrcp(szBufferDst, sizeof(szBufferDst), szBufferSrc);
	puts(szBufferDst);

	return 0;

}

