#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int x, int y);
void sub(int a, int b);
void arr_prn(int c[5]);

int main(void)
{
	int a = 10;
	int b = 20;
	int c[5] = { 1,2,3,4,5 };
	int q = add(a,b); // 함수 호출, 인수 2개 -> 더하기위해

	printf("%d\n", q);
	sub(a,b);
	arr_prn(c);

	return 0;
}

int add(int x,int y) { // 매개변수 -> 형을 선언

	int k = x + y;

	return k; //30 반환
}
void sub(int a, int b) { // 매개변수 -> 형을 선언

	int s = a - b;
	printf("%d\n", s);

}

void arr_prn(int c[5])
{
	for (int i = 0;i < 5;i++)
	printf("%d\n", c[i]);
}