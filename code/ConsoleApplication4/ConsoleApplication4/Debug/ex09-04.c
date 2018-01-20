#include <stdio.h>
#include <stdlib.h>

int Add(int x, int y);
int Sub(int x, int y);
int Mul(int x, int y);
double Div(double x, double y);

int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
double Div(int x, int y)
{
	return (double)x / y; // 반환타입과 함수 타입은 같아야 한다.
}

void main(void)
{
	int a, b = 0;

	printf("두 개의 정수를 입력하세요 :");
	scanf("%d %d", &a, &b);
	printf("First num : %d\n", a);
	printf("Second num : %d\n", b);

	printf("Add : %d\n", Add(a, b));
	printf("Sub : %d\n", Sub(a, b));
	printf("Mul : %d\n", Mul(a, b));
	printf("Div : %.6lf\n", Div(a, b));

	system("pause");

}
