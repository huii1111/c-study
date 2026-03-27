#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int p, c, m;
	int c5000, c1000, c100;

	printf("물건값을 입력하세요: ");
	scanf("%d", &p);

	printf("투입 금액을 입력하세요: ");
	scanf("%d", &m);

	c = m - p;

	c5000 = c / 5000;
	c = c % 5000;

	c1000 = c / 1000;
	c = c % 1000;

	c100 = c / 100;

	printf("거스름돈은: %d\n", m - p);
	printf("5000원권: %d개 1000원권: %d개 100원권: %d개 ", c5000, c1000, c100);
	

	return 0;
}

