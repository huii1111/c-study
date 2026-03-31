#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int Add(int a, int b); //함수원형
int Input(void); // ; 꼭 붙임
void Result_print(int val);
void Intro(void);

int main() //시작
{
	int a, b, result;

	Intro(); //Intro() 함수 호출, ()안에 인수가 없음
	//함수 앞에 형이 없음, 반환되는 것이 없음
	a = Input(); //Input() 함수 호출, 인수없음
	b = Input(); //Input() 함수 호출, 인수없음
	result = Add(a, b); //Add 함수 호출, 인수 있음(정수형 a,b)
	Result_print(result); // Result_print 함수 호출, 인수 한 개(정수형 resuit)

	return 0;
}

void Intro(void) // 함수, ()안에 매개변수 없음
{ //반환되는 값이 없음(void)
	printf("****** START ******\n"); //제목 출력 부분
	printf("두 개의 정수 입력: \n");
}

int Input(void) //사용자 정의 함수, 매개변수 없음
{
	int input; //변수 선언
	scanf("%d", &input); //정수형 숫자 입력 
	return input; //값을 반환
	//int input()->int는 반환되는 값의 형 의미
}

int Add(int i, int j) // int i, int j -> 매개변수(형 선언)
{	//a -> i, b -> j
	return i + j; //더한값을 반환(int형) -> int
}

void Result_print(int val) //result -> 매개변수 val (정수형)
{
	printf("덧셈에 대한 결과: %d\n", val); 
	printf("****** END ******");
	//반환없음(void Result_print)
}