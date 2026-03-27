#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define STUDENTS 5		//기호상수 5 -> STUDENTS

int main()
{
	int score[STUDENTS], cnt=0; //5개
	int sum = 0; //누적하는 변수는 0으로 초기화
	float avg;

	for (int i = 0;i <= 4;i++)
	{
		printf("성적을 입력해 주세요: ");
		scanf("%d", &score[i]);
		
		if (score[i] > 100)
		{
			i--;
			score[i] = 0;
			continue;

		}

		else if (score[i] != 0)
		{
			cnt += 1;
		}

		sum += score[i];
	}


	avg = (float)sum / cnt;

	printf("합계는: %d ", sum);
	printf("평균은: %.2f ", avg);


	return 0;

}