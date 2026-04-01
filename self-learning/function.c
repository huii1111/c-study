#include<stdio.h>

int digit(int n) { //정수 n을 받아서 계산

	if (n < 10) return n; //만약 n이 10보다 작으면 반환
	return(n % 10) + digit(n / 10); //n을 10으로 나눈 나머지+ n을 10으로 나눈 값
}

int main() {

	printf("%d", digit(235));
	//digit에 235를 넣은 후 결과값을 출력
	// 계산과정 1) 235%10 = 5, 235/10=digit(23)
	// 2) 23%10=3, 23/10= digit(2)
	// 3) digit(2)<10이므로 그대로 반환
	// 4) 최종 계산은 5+3+2=10
}