#include <stdio.h>

int main()
{
	/*int a;
	a = sizeof(int) + sizeof(char); int는 4byte char는 1byte
	printf("%d", a);*/


	/*int a = 7 + 6; 13, 정수형이니까 그대로 출력
	int b = (int)7.3 + (int)6.7; int니까 정수형으로 출력 7+6, 반올림 XXX
	printf("%d %d", a, b);*/


	float t;
	t = 10 / 3; // 정수/정수니까 출력값도 정수
	printf("%f", t);
	t = (float)10 / 3; // 실수/정수니까 출력값은 실수
	printf("%f", t);

	
	return 0;

}
