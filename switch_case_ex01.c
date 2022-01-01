#include <stdio.h>
// "_main 이(가) Hello.obj에 이미 정의되어 있습니다." -> 이런 오류 발생 : 하나의 프로젝트 폴더 안에는 main()이름으로 된 소스파일이
//하나만 있어야 한다. 
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
		puts("error : 알수없는 연산");
	}
	
	printf("Result : %d", nResult);
	return 0;
	
}