#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void main()
{
	for (;;)
	{
		int a , b = 0;
		printf("���۴ܼ��� ���� �ܼ��� �Է��ϼ��� :");
		scanf("%d %d", &a, &b);

		if (a != 0 && b != 0)
		{
			if ((2 <= a && a <= 9) && (2 <= b && b <= 9))
			{
				if (a > b)
				{
					int temp = a;
					a = b;
					b = temp;
					for (int i = a; i <= b; i = i + 1)
					{
						for (int j = 1; j <= 9; j = j + 1)
						{
							printf("%d*%d=%2d\n", i, j, j*i);
						}
						printf("\n");
					}
				}
				else
				{
					for (int i = a; i <= b; i = i + 1)
					{
						for (int j = 1; j <= 9; j = j + 1)
						{
							printf("%d*%d=%2d\n", i, j, j*i);
						}
						printf("\n");
					}
				}
			}
			else
				printf("�ٽ��Է����ּ���\n");
		}

		else
			break;
	}
	
	system("pause");
}