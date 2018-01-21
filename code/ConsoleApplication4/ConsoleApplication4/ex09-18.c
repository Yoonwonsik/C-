#include <stdio.h>
#include <stdlib.h>

int factorial(int n);

int main()
{
	int a;
	printf("숫자넣으세요 : ");
	scanf("%d", &a);

	printf("%d! = %d\n", a, factorial(a));

	system("pause");
}

int factorial(int n)
{
	if (n == 0)
		return 1;
	else
		return n* factorial(n - 1);
}