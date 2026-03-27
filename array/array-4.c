#include <stdio.h>

void f3(); //함수원형
void arrPrint(int k[2][3]);

void f1() //함수 f1 생성
{
	int a[2][3] = { {4,5,6},{ 7,8,9 } };
	/*a[0][0] = 4;
	a[0][1] = 5;
	a[0][2] = 6;
	a[1][0] = 7;
	a[1][1] = 8;
	a[1][2] = 9;*/

	printf("%d\n", a[0][0]);
	printf("%d\n", a[0][1]);
	printf("%d\n", a[0][2]);
	printf("%d\n", a[1][0]);
	printf("%d\n", a[1][1]);
	printf("%d\n", a[1][2]);
	printf("\n");
}
void f2()
{
	int b[2][3]; //2행 3열
	int totalsize = sizeof(b); //24바이트
	printf("%d\n", totalsize); //배열 b 전체의 사이즈 (24바이트)

	int bsize = sizeof(b[0]);//12바이트 //0번째 행의 사이즈
	printf("%d\n", bsize); //12바이트
	printf("%d\n", sizeof(b[0][0]));//4바이트 //0행 0번째 원소의 사이즈
	printf("%d\n", sizeof(b) / sizeof(b[0]));//24 바이트 / 12 바이트 = 2 바이트 //전체 크기 / 한 행 크기
	printf("%d\n", sizeof(b[0]) / sizeof(b[0][0])); //12 바이트 / 4 바이트 = 3 바이트
	printf("\n");

}

int main(void) //maiin 함수 1개, 처음 시작할 때 main부터 시작
{

	//f1(); //함수는 소괄호가 있어야 함
	//f2();
	f3();

	return 0;
}

void f3()
{

	int a[2][3] = { {1, 2, 3},{4,5,6} };// a[0][0]=1 a[0][1]=2 a[0][2]=3 a[1][0]=4 a[1][1]=5 a[1][2]=6
	arrPrint(a);
	//인수 보내면서 함수 호출, a배열을 arrPrint 함수를 호출할 때 같이 보냄
	int b[2][3] = { {1},{4} }; // 1 0 0 4 0 0
	arrPrint(b);
	int c[2][3] = { {1,2} };// 1 2 0 0 0 0
	arrPrint(c);
	int d[2][3] = { 1,2,3,4,5,6 };
	arrPrint(d);
	int i[2][3] = { 1,2,3,4 }; // 1 2 3 4 0 0
	arrPrint(i);
	int j[2][3] = { 1,2 }; // 1 2 0 0 0 0 
	arrPrint(j);
	int k[2][3] = { 0 }; // 0 0 0 0 0 0 
	arrPrint(k);

}

void arrPrint(int k[2][3]) //k를 매개변수-> 인수와 유형, 개수 통일
{

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%2d", k[i][j]);
		}
		printf("\n");
	}

}

