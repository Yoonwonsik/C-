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

	// ( (double)a) / b => 실수 / 정수로 해서 실수가 나옴..
	// (double)(a/b)로 할 경우 (a/b)가 정수이므로 (double)(정수)이므로 
	// .000으로 나옴
	result = (double)a / b;
	printf("%lf \n", result);

	double c = (double)a;
	printf("%lf \n", c);


	return 0;

	system("pause");
}
