#include <stdio.h>
#include <stdlib.h>

int main()
{

	int a, b,  sum = 0;
	printf("������ �Է��ϼ��� :");
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
		//3�� ��� �׸��� 5�� ���
		if (i % 3 == 0 || i % 5 == 0)
		{
			printf("%d�� ����\n", i);
		}
	}
	for (int i = a; i <= b; i = i + 1)
	{
		//3�� ����� �ƴϰ� �׸��� 5�� ����� �ƴϸ�
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