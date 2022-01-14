#include <stdio.h>

// 사용할수있는 메모리 종류 = 스택, 힙, 텍스트, 데이터 영역의 메모리. 사실 변수를 쓸 때애는 어떤 메모리(storage-class)를 쓸건지 명시해야 함
// 아무언급없으면(auto) 컴파일러가 지역변수는 모두 알아서 자동변수로 처리. c언어의 기억부류 지정자로 쓸 수 있는 예약어에는 extern, auto, static,
//register 등이 있다. / 전역변수 혹은 정적변수가 사용하는 데이터 영역 메모리는 프로그램이 시작할 때 확보되어 종료될 때까지 유지된다.


int TestFunc(void) {

	static int nData = 10;

	++nData;
	return nData;

}
// 정적변수는 전역변수처럼 선언될때 한번만 초기화된다. nData가 10으로 초기화되는것은 한번뿐.
//TestFunc()가 반환을 해도 (메모리가 사라지지 않으므로) nData변수는 전역변수처럼 그대로 존재한다. 
// 전역변수와 정적변수 모두 동시성을 지원하기 어렵다. -고성능 어려움. / 동시성은 병렬처리와 직결되고 병렬처리는 다시 성능과 직결

//register변수는 cpu의 레지스터를 사용하기 위한 것인데, 임베디드 운영체제 제외하면 쓸일x / 레지스터 변수는 cpu의 일부이므로 별도로 주소가 없음.

int main(int argc, char* argv[]) {

	printf("%d\n", TestFunc());
	printf("%d\n", TestFunc());
	printf("%d\n", TestFunc());
	printf("%d\n", TestFunc());

	return 0;
}