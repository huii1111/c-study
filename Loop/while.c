#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// 1~5 출력
int main()
{
	//int i = 2; //1~100 수
	//int sum = 0; //합계 누적할 변수


	//while (i <= 100) //i<6도 ㄱㄴ
	//{
	//	//printf("%d\n", i);
	//	i = i + 1; // i += 1, i++
	//	sum = sum + 2;


	//}


	//printf("1~100d의 합은: %d", sum); 

	int num, i = 0;
	printf("양의 정수 입력: ");
	scanf("%d", &num);
	while (i < num)
	{
		printf("handman!\n");
		i++;
	}

	return 0; //안 써도 오류 안 남

}