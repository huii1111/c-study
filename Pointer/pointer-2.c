#include <stdio.h>

int main(void)
{
	int i = 3000;
	int* p = NULL; //포인터 변수 선언

	p = &i; // i 변수의 주소를 p 포인터 변수에 줌

	printf("p=%p\n", p);
	//%p : 주소를 출력하는 서식 문자
	printf("&i=%d\n", &i);

	printf("i=%d\n", i);
	printf("*p=%d\n", *p);
	// 주소에 저장된 내용에 접근하는 포인터

	i = 4000;
	printf("i=%d\n", i);

	*p = 5000;
	printf("*p=%d\n", *p);

	int x = 10, y = 20;
	int* pi; // 포인터 변수 선언

	pi = &x; //x 변수의 주소를 pi 포인터 변수에 줌
	printf("pi=%p\n", pi); // x의 주소를 가진 pi 출력
	printf("*pi=%d\n", *pi); // pi가 가리키는 x의 값(10) 출력

	pi = &y; // y 변수의 주소를 pi 포인터 변수에 줌
	printf("pi=%p\n", pi); // y의 주소를 가진 pi 출력
	printf("*pi=%d\n", *pi);// pi가 가리키는 y의 값(20) 출력


	return 0;
}