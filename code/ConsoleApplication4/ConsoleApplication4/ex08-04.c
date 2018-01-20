#include <stdio.h>
#include <stdlib.h>

void main()
{
	/*for (int i = 2; i <= 3; i = i + 1)
	{
		for (int j = 1; j <= 9; j = j + 1)
		{
			printf("%d * %d = %2d\n", i, j, i*j);
		}
	}

	for (int i = 1; i <= 5; i = i + 1)
	{
		for (int j = 0; j <= 9; j = j + 1)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	for (int i = 1; i <= 9; i = i + 1)
	{
		for (int j = 1; j <= i; j = j + 1)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("\n");
*/
	for (int i = 1; i <= 9; i = i + 1)
	{
		for (int j = 1; j <= i; j = j + 1)//°ø¹é
		{
			printf("*");
		}

		printf("\n");
	}
	printf("\n");

	for (int i = 1; i <= 9; i = i + 1)
	{
		for (int j = 2; j <= i; j = j + 1)//°ø¹é
		{
			printf(" ");
		}

		for (int j = 0; j <= 9 - i; j = j + 1)//º°Âï±â
		{
			printf("*");
		}

		printf("\n");
	}
	
	printf("\n");

	for (int i = 1; i <= 9; i = i + 1)
	{
		if (i < 5)
		{
			for (int j = 0; j <i; j = j + 1)//º°Âï±â
			{
				printf("*");
			}
		}
		else
			for (int j = 0; j <= 9-i; j = j + 1)//º°Âï±â
			{
				printf("*");
			}
		printf("\n");
	}
	system("pause");
}