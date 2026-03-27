#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	//정수 (2~9) 입력 
	int m;
	int u = 1;

	printf("출력하고싶은 단은?: ");
	scanf("%d", &m);

	while (u < 10)
	{
		printf("%d * %d = %d ", m, u, m * u); //printf("%d\n", m * u); -> 내가한거
		u++;
	}

	return 0;


}
