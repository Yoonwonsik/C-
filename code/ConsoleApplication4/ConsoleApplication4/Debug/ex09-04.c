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
	return (double)x / y; // ��ȯŸ�԰� �Լ� Ÿ���� ���ƾ� �Ѵ�.
}

void main(void)
{
	int a, b = 0;

	printf("�� ���� ������ �Է��ϼ��� :");
	scanf("%d %d", &a, &b);
	printf("First num : %d\n", a);
	printf("Second num : %d\n", b);

	printf("Add : %d\n", Add(a, b));
	printf("Sub : %d\n", Sub(a, b));
	printf("Mul : %d\n", Mul(a, b));
	printf("Div : %.6lf\n", Div(a, b));

	system("pause");

}
