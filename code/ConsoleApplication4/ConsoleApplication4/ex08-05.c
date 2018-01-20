#include <stdio.h>
#include <stdlib.h>

void main()
{
	/*for (int i = 1; i <= 9; i = i + 1)
	{
		for (int j = 2; j <= 9; j = j + 1)
		{
			printf("%d*%d=%2d ", j, i, j*i);
		}
		printf("\n");
	}*/
	int a = 0;
	for (;;)
	{
		printf("정수를 입력하세요 :");
		scanf("%d", &a);
		printf("Number : %d\n", a);
		if (a == -1)
		{
			break;
		}
		else
		{
			if (a == 0)
			{
				for (int i = 2; i <= 9; i = i + 1)
				{
					for (int j = 1; j <= 9; j = j + 1)
					{
						printf("%d*%d=%2d\n", i, j, j*i);
					}
					printf("\n");
				}
			}

			else if (a != 0 && 2 <= a && a <= 9)
			{
				for (int i = 1; i <= 9; i = i + 1)
				{
					printf("%d*%d=%2d\n", a, i, a*i);
				}
			}
			else
			{
				printf("에러\n");
			}
		}
	}
	system("pause");
}