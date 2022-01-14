#include <stdio.h>

//매개변수 전달법 => 기본적으로2가지 : call by value, call by reference


/*
// Call by value

int Add(int a, int b) {

	return a + b;
}

int main(int argc, char* argv[]) {

	printf("%d\n", Add(3, 4));
	return 0;


}

*/

// Call by reference

int Add(int* a, int* b) {

	return *a + *b;

}


// Add 함수를 호출할 때 지역변수의 주소를 실인수로 기술!
// call by reference의 가장 큰 장점은 배열처럼 덩치가 큰 메모리를 매개변수로 전달할 수 있다는 점!
int main(void) {

	int x = 3, y = 4;
	printf("%d\n", Add(&x, &y));
	return 0;


}