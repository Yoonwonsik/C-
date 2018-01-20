#include <stdio.h>
#include <stdlib.h>

int main()
{

	int a, b,  sum = 0;
	printf("정수를 입력하세요 :");
	scanf("%d %d", &a, &b);

	if (a > b)
	{
		//swap
		int temp = a;
		a = b;
		b = temp;
	}
	
	for (int i = a; i <= b; i = i + 1)
	{
		//3의 배수 그리고 5의 배수
		if (i % 3 == 0 || i % 5 == 0)
		{
			printf("%d는 제외\n", i);
		}
	}
	for (int i = a; i <= b; i = i + 1)
	{
		//3의 배수가 아니고 그리고 5의 배수가 아니면
		if (i % 3 != 0 && i % 5 != 0)
		{
			sum = sum + i;
			printf("%d", i);

			if (i == b)
				printf("=");
			else
				printf("+");

		}
	}

	printf("%d\n", sum);

	system("pause");

	return 0;
}