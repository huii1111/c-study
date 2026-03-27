#include <stdio.h>

int main(void)
{

	int a[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	//a[행][열] 0~2행 0~2열 -> 9개의 요소 구성

	int i, j;
	for (i = 0; i < 3; i++) { //i 행 의미 0~2
		for (j = 0; j < 3; j++) //j 열 의미 0~2
			printf("%d\t", a[i][j]); //9번 출력
			//i=0 j = 0 1 2
			//i=1 j = 0 1 2
			//i=2 j = 0 1 2
		printf("\n");			
		
	}
}