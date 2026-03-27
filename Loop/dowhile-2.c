#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{

	int i = 0;

	do
	{
		printf("1---새로만들기\n");
		printf("2---파일열기\n");
		printf("3---파일닫기\n");
		printf("4---하나를 선택하시오.\n");
		scanf("%d", &i);

	} while (i < 1 || i > 3); //i가 1~3 아니면 반복
	printf("선택메뉴는: %d", i);
	return 0;


}
