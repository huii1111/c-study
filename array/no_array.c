
int main(void)
{
	int i, s, sum = 0;
	float a;

	for (i = 1; i <= 10;i++)

	{
		printf("%d번째 학생의 점수를 입력하세요:", i);
		scanf("%d", &s);
		sum += s;

	}

	a = (float)sum / 10;

	printf("합계는: %d\n", sum);
	printf("평균은: %.2f", a);

	return 0;
}





//int main(void)
//{
//	int s, c, o, sum;
//	float a;
//
//	printf("점수를 입력하세요:");
//	scanf("%d", &s);
//
//	printf("점수를 입력하세요:");
//	scanf("%d", &c);
//
//	printf("점수를 입력하세요:");
//	scanf("%d", &o);
//
//	sum = s + c + o;
//	a = ((float)s + c + o) / 3;
//
//	printf("합계는: %d", sum);
//	printf("평균은: %.2f", a);
//
//	return 0;
//}