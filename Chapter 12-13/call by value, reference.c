#include <stdio.h>

//�Ű����� ���޹� => �⺻������2���� : call by value, call by reference


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


// Add �Լ��� ȣ���� �� ���������� �ּҸ� ���μ��� ���!
// call by reference�� ���� ū ������ �迭ó�� ��ġ�� ū �޸𸮸� �Ű������� ������ �� �ִٴ� ��!
int main(void) {

	int x = 3, y = 4;
	printf("%d\n", Add(&x, &y));
	return 0;


}