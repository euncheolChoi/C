#include <stdio.h>
// "_main ��(��) Hello.obj�� �̹� ���ǵǾ� �ֽ��ϴ�." -> �̷� ���� �߻� : �ϳ��� ������Ʈ ���� �ȿ��� main()�̸����� �� �ҽ�������
//�ϳ��� �־�� �Ѵ�. 
int main(void)
{
	char cOperator = 0;
	int x = 0, y = 0, nResult = 0;

	scanf("%d%c%d", &x, &cOperator, &y);

	switch (cOperator)
	{
	case '+' :
		nResult = x + y;
		break;
	
	case '-' :
		nResult = x - y;
		break;

	case '*' :
		nResult = x * y;
		break;

	case '/' :
		nResult = x / y;
		break;

	default:
		puts("error : �˼����� ����");
	}
	
	printf("Result : %d", nResult);
	return 0;
	
}