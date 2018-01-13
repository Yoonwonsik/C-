#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int k = 0;

	printf("두수를 입력하세요 : ");
	scanf("%d %d", &a, &b);

	if (a >= b)
	{
		printf("입력 받은 수중 가장 큰 수는 %d입니다.\n",a);
	}
	else
	{
		printf("입력 받은 수중 가장 큰 수는 %d입니다.\n", b);
	}

	printf("세수를 입력하세요 : ");
	scanf("%d %d %d", &a, &b, &c);
	/*if (a - b > 0)
	{
		if (a - c > 0)
		{
			printf("입력 받은 수중 가장 큰 수는 %d입니다.\n", a);
		}
		else
		{
			printf("입력 받은 수중 가장 큰 수는 %d입니다.\n", c);
		}
	}
	else
	{
		if (b - c > 0)
		{
			printf("입력 받은 수중 가장 큰 수는 %d입니다.\n", b);
		}
		else
		{
			printf("입력 받은 수중 가장 큰 수는 %d입니다.\n", c);
		}
	}*/
	if (a - b > 0 && a - c > 0)
	{
		printf("입력 받은 수중 가장 큰 수는 %d입니다.\n", a);
	}
	else if (b - a > 0 && b -c > 0)
	{
		printf("입력 받은 수중 가장 큰 수는 %d입니다.\n", b);
	}
	else
	{
		printf("입력 받은 수중 가장 큰 수는 %d입니다.\n", c);
	}
	printf("정수를 입력하세요 : ");
	scanf("%d", &k);
	printf("입력된 정수는 : %d\n", k);

	if (k == 0)
	{
		printf("출력된 값은   : A\n");
	}
	else if (k > 3)
	{
		printf("출력된 값은   : B\n");
	}
	else
	{
		printf("출력된 값은   : C\n");
	}


	return 0;

	system("pause");
}