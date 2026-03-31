#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h> // #include = 전처리기, 입출력 관련 헤더파일
#include <string.h> //문자열 함수 사용하기 위한 헤더파일

int main(void)
{
	char a[10] = "Hello"; //h->a[0]
	printf("%s\n", a);
	printf("%c\n", a[0]);

	char b[10];
	//b="LOVE" -> 오류
	strcpy(b, "LOVE"); //문자열 복사(대상, 문자열)
	/*b[0] = 'L';
	b[1] = 'o';
	b[2] = 'v';
	b[3] = 'e';*/
	printf("%s\n", b);
	//strcpy : 문자배열은 선언 이후 뒤에 초기화가 안돼
			// 이후 문자열 복사할 때

	return 0;
}