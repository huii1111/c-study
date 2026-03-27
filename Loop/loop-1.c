#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//int n, i;

	for (int n = 2;n <= 9;n++) //n은 단, i가 반복(9번)이 끝나면 그때 증가
	{
		printf("<%d단>\n", n);

		for (int i = 1;i <= 9;i++) //i는 곱하는 수
		{
			printf("%d*%d=%3d\t", n, i, n * i); //3d->3자리. 원래는 오른쪽 정렬, -는 왼쪽정렬 
		}//j끝
	}//i꿑

	return 0;

}//main 끝


	//int n, i;

	//printf("원하는 단을 입력하세요.");
	//scanf("%d", &n); //원하는 정수 입력
	//printf("<%d단>\n",n);//입력받은 숫자 출력

	//for (i = 1;i <= 9;i++) //구구단의 시작이 1이니 초기값=1, 9단까지 출력하니 조건값은 i<=9, 구구단은 2*1, 2*2... 이런 식으로 1씩 증가하므로 I++ 사용
	//{	
	//	printf("%d*%d=%d\n", n,i,n*i); //아까 입력받은 숫자 * 1~9를 반복적으로 출력
	//}

	/*int n=1;
	int sum=0;

	while (n <= 10)
	{
		sum = sum + 1;
		n = n + 2;
	}


	for (n = 1;n < 11; n= n + 2)
	{
		sum += n;

	}

	printf("n은 %d 1~10까지의 합은: %d",n, sum);*/


	/*int n,i;
	int sum = 0;
	printf("정수를 입력하세요.");
	scanf("%d", &n);

	for (i = 1;i <= n;i++)
	{
		sum += i;

	}
	printf("합계는 %d", sum);*/


