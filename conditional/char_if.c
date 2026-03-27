#include <stdio.h>
int main()
{
	char ch; //문자 한 글자 변수
	printf("문자를 입력하세요:");
	//scanf("%c", &ch);
	ch = getchar();//한 글자, getchar() = scanf()

	if (ch >= 'A' && ch <= 'Z') // 65~90
		// =(ch >= 65 && ch <= 90)
		printf("대문자 입니다.\n");			
			
	else if (ch >= 'a' && ch <= 'z') // 97~122
		// =(ch >= 97 && ch <= 122)
		printf("소문자 입니다.\n");			

	else if (ch >= '0' && ch <= '9') // 48~57
		// =(ch >= 48 && ch <= 57)
		printf("숫자 입니다.\n");
			
	else
		printf("기타\n");

	return 0;
}