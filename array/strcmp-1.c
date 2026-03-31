#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h> // #include = 전처리기, 입출력 관련 헤더파일
#include <string.h> //문자열 함수 사용하기 위한 헤더파일

int main(void)
{
	int res;
	char a[30];
	char b[30];


	printf("첫번째 단어를 입력하시오.");
	scanf("%s", a); // 배열명은 배열의 첫 주소이다. 문자열 전체를 써버리면 주소라 & 사용 X 하지만 배열의 요소를 쓸거면 & 사용 o
	printf("두번째 단어를 입력하시오.");
	scanf("%s", b); // EX) &a[7];
	res = strcmp(a, b); //문자열 비교
	// res는 0,음수,양수
	if (res < 0)
		printf("%s가 %s보다 앞이다.", a, b); //음수이면 문자열1이 문자열2보다 사전순으로 앞에 있음
	else if (res == 0)
		printf("%s가 %s와 같다.", a, b); //변환값이 0이면 완전히 같다
	else
		printf("%s가 %s보다 뒤에 있다.", a, b);
	//양수이면 문자열1이 문자열2보다 사전순으로 뒤에 있음

	return 0;
}