#include <stdio.h>

int main()

{
	int n1, n2;
	int res1; //sum, sub, mul
	double res2; //divi
	char op, a;

	while (1)
	{
		printf("첫번째 숫자를 입력하세요.: ");
		scanf_s("%d", &n1); //scanf 문법이 불안전한 문법이므로 오류나지않게 scanf_s 사용

		printf("연산자를 입력하세요(+ - * /).:");
		scanf_s(" %c", &op); //%c 앞에 한 칸 띄우는거 까먹지 XX

		printf("두번째 숫자를 입력하세요.:");
		scanf_s("%d", &n2);


		switch (op)

		{
		case '+':
			res1 = n1 + n2;
			//printf("%d", sum);
			break;

		case '-':
			res1 = n1 - n2;
			//printf("%d", sub);
			break;

		case '*':
			res1 = n1 * n2;
			//printf("%d", mul);
			break;

		case '/':
			res2 = (double)n1 / n2; //divi = n1 / n2 -> n1과 n2 모두 정수여서 결과값도 정수로 나옴, (double)n1 -> n1을 순간적으로 실수로 만들어줌, 형변환
			//printf("%.2f", divi);
			break;

			//default:
				//printf("입력 오류\n");
		}

		if (op == '+' || op == '-' || op == '*') //3개 중에 하나만 만족하면 되니까 or의 뜻인 || 사용
			printf("연산 결과: %d\n", res1);

		else if (op == '/')
			printf("연산 결과: %.2f\n", res2);

		else
			printf("입력 오류");

		printf("연산을 종료하시겠습니까?(Y,N) :");
		scanf_s(" %c", &a);

		if (a == 'Y' || a == 'y') //대,소문자 가리지 않고 받아야 하므로 위와 같이 or의 의미인 || 사용
			break; //else는 있으나 마나 -> Y나 y 쓴거 아니면 위로 올라가서 반복하기 때문 

	}

	return 0;
}
