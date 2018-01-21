#include <stdio.h>
#include <stdlib.h>

double avg(int a1, int a2, int a3, int a4, int a5);
int sumDigits(int n);

int main()
{
	int b1, b2, b3, b4, b5 = 0;
	int c = 0;
	printf("input :");
	scanf("%d %d %d %d %d", &b1, &b2, &b3, &b4, &b5);
	printf("result : %.6lf\n", avg(b1, b2,  b3,  b4,  b5));
	
	for (int i = 0; i <= 2; i = i + 1)
	{
		printf("input :");
		scanf("%d", &c);
		printf("result : %d\n", sumDigits(c));
	}
	
	system("pause");
}

double avg(int a1, int a2, int a3, int a4, int a5)
{
	return (double)(a1 + a2 + a3 + a4 + a5)/ 5;
}

int sumDigits(int n)
{
	int sum = 0;
	for(;;)
	{
		sum = sum + n % 10;
		n = n / 10;
		if (n == 0)
			break;
	}
	return sum;
}