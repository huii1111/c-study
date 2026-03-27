#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int pass = 1234;
	int pw=0;
	// pw 입력 받아서 pass 비교
	// 다르면 계속 반복
	// 맞으면 로그인 성공! 출력
	while (pw != pass) //암호가 틀려야 조건을 반복해야 한다는 걸 유의
	{
		printf("비밀번호 입력: ");
		scanf("%d", &pw);
	}
	printf("로그인 성공!");

	return 0;


}
