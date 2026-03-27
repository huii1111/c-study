#include <stdio.h>
#define TAX_RATE 0.2//기호상수 선언
//전처리 단계에서 처리(자료형이 없음), 전범위
int main(void)
{
	const int MONTHS = 12; //기호상수 선언
	//컴파일러 단계에서 처리 블록안에만 유효
	int m_salary, y_salsry; // 변수 선언

	printf("월급을 입력하시오: "); // 입력 안내문
	scanf_s("%d", &m_salary);

	y_salsry = MONTHS * m_salary; //순수입 계산
	printf("연봉은 %d 입니다.\n", y_salsry);
	printf("세금은 %f 입니다.\n", y_salsry * TAX_RATE);


	return 0;
}