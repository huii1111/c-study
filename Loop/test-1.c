#include <stdio.h>

//int main(void)
//{
//	int i;
//	for (i = 0;i < 10;i++) { // i의 초기값은 0, 조건값은 10 미만, 증감값은 1
//		if (i % 3 == 0) //만약 i를 3으로 나눴을 때 나머지가 0이라면
//			continue; //밑으로 내려가지 않고 for문 반복
//		if (i > 5) // 만약 i가 5보다 크면
//			break; //탈출
//		printf("%d", i); // 1,2,4,5 출력
//	}
//	
//	return 0;
//}



int main(void)
{
	int i; //cnt = 0;

	for (i = 1; i <= 100; i++) // 초기값은 1, 조건값은 100이하, 증감값은 1
	{
		if (i % 3 == 0 && i % 7 == 0) //만약 i를 3과 7로 나눈 나머지가 0이면 출력
		printf("%d*", i); //숫자* 출력, 답은 21*42*63*84*
	}
	return 0;
}