#include <stdio.h>

//증가감소 연산자
//++a  예) printf("%d", ++a) -> 5였던 a가 1 증가 후 6 출력
//a++  예) printf("%d", a++) -> 5 출력 후 1 증가되어 6 출력
//--a  예) printf("%d", --a) -> 5였던 a가 1 감소 후 4 출력
//a--  예) printf("%d", a--) -> 5 출력 후 1 감소되어 4 출력

int main()
{	
	int a = 10;

	printf("%d\n", a++);  //후위 증가
	printf("%d\n", ++a);  //전위 증가
	printf("%d\n", a--);  //후위 감소
	printf("%d\n", --a);  //전위 감소


	return 0;
}