#include <stdio.h>
#include <stdlib.h>
#define ip 10

int main(void)
{
	int a = 10;
	int b = 15;

	double result;

	result = a / b;
	printf("%lf \n", result);

	// ( (double)a) / b => �Ǽ� / ������ �ؼ� �Ǽ��� ����..
	// (double)(a/b)�� �� ��� (a/b)�� �����̹Ƿ� (double)(����)�̹Ƿ� 
	// .000���� ����
	result = (double)a / b;
	printf("%lf \n", result);

	double c = (double)a;
	printf("%lf \n", c);


	return 0;

	system("pause");
}
