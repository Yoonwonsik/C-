#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int k = 0;

	printf("�μ��� �Է��ϼ��� : ");
	scanf("%d %d", &a, &b);

	if (a >= b)
	{
		printf("�Է� ���� ���� ���� ū ���� %d�Դϴ�.\n",a);
	}
	else
	{
		printf("�Է� ���� ���� ���� ū ���� %d�Դϴ�.\n", b);
	}

	printf("������ �Է��ϼ��� : ");
	scanf("%d %d %d", &a, &b, &c);
	/*if (a - b > 0)
	{
		if (a - c > 0)
		{
			printf("�Է� ���� ���� ���� ū ���� %d�Դϴ�.\n", a);
		}
		else
		{
			printf("�Է� ���� ���� ���� ū ���� %d�Դϴ�.\n", c);
		}
	}
	else
	{
		if (b - c > 0)
		{
			printf("�Է� ���� ���� ���� ū ���� %d�Դϴ�.\n", b);
		}
		else
		{
			printf("�Է� ���� ���� ���� ū ���� %d�Դϴ�.\n", c);
		}
	}*/
	if (a - b > 0 && a - c > 0)
	{
		printf("�Է� ���� ���� ���� ū ���� %d�Դϴ�.\n", a);
	}
	else if (b - a > 0 && b -c > 0)
	{
		printf("�Է� ���� ���� ���� ū ���� %d�Դϴ�.\n", b);
	}
	else
	{
		printf("�Է� ���� ���� ���� ū ���� %d�Դϴ�.\n", c);
	}
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &k);
	printf("�Էµ� ������ : %d\n", k);

	if (k == 0)
	{
		printf("��µ� ����   : A\n");
	}
	else if (k > 3)
	{
		printf("��µ� ����   : B\n");
	}
	else
	{
		printf("��µ� ����   : C\n");
	}


	return 0;

	system("pause");
}