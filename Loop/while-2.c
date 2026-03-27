#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{

	int num, cnt = 0, i;
	printf("원하는 배수 입력: ");
	scanf("%d", &i); //3

	printf("배수의 개수 입력: ");
	scanf("%d", &num); //5

	while (cnt++ < num)
		//0<5 조건 무조건 물어보고 참 => 다음 문장 가기 전에 cnt+1 => cnt는 1이 됨
		//1<5 조건 무조건 물어보고 참 => 다음 문장 가기 전에 cnt+1 => cnt는 2가 됨
		//2<5 조건 무조건 물어보고 참 => 다음 문장 가기 전에 cnt+1 => cnt는 3이 됨
		//3<5 조건 무조건 물어보고 참 => 다음 문장 가기 전에 cnt+1 => cnt는 4가 됨
		//4<5 조건 무조건 물어보고 참 => 다음 문장 가기 전에 cnt+1 => cnt는 5가 됨
		//5<5 조건 무조건 물어보고 거짓 => 탈출

		printf("%d", i * cnt);
		// 3*1 3*2 3*3 3*4
	return 0;


}



