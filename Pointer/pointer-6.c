// 포인터의 증감 연산(increment /Decrement)

#include <stdio.h>

int main() {

	int i = 10;
	int* pi = &i; //i주소를 포인터 변수 pi 줌. pi는i의 주소를 기억

	printf("i = %d, pi = %p\n", i, pi); //%p는 주소 지정자, 메모리 주소는 2진수(16진수로 보여줌)

	(*pi)++; //pi가 가리키는 위치의 값을 증가
	//() 먼저->*pi->가리키는 주소의 값 -> ++ : 값을 1 증가
	printf("i=%d,pi=%p\n", i, pi);

	*pi++; //pi가 가리키는 위치에서 값을 가져온 후에 포인터 pi를 증가
	//*pi -> i를 가리키는데 그 값(* 있으므로) -> 11 -> ++는 주소 증가(주소 바뀌니까 위치가 바뀜, 위치가 바뀌니까 값도 바뀜)
	printf("i=%d,pi=%p\n", i, pi);

	return 0;
}