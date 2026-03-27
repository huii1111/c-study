#include <stdio.h>

int main()
{
	int a, b, c;

	a = 5 % 3; //이때 a 값은 2
	a--; //후위감소 돼서 a=1
	b = (a++) + 3; //후위 증가 이므로 a=2, b=4
	printf("%d, %d\n", a, b); //2,4로 출력
	c = (++a) + 3; //전위 증가이므로 a=3, c=6
	printf("%d, %d, %d", a, b, c); //3,4,

	return 0;
}