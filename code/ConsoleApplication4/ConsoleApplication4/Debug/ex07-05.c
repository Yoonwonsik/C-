#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	/*
	int Score = 0;
	

	printf("������ �Է��ϼ���(0~100) : ");
	scanf("%d", &Score);
	printf("�Էµ� ����(Score) : %d\n", Score);

	int check = Score / 10;


	if (Score <= 100)
	{
		switch (check)
		{
		case 10:
		case 9:
			printf("Grade : A\n");
			break;
		case 8:
			printf("Grade : B\n");
			break;
		case 7:
			printf("Grade : C\n");
			break;
		case 6:
			printf("Grade : D\n");
			break;
		default:
			printf("Grade : F\n");
			break;
		}
	}
	else
	{
		printf("���ڰ� �߸� �ԷµǾ����ϴ�.\n");
	}
	*/
	int month = 0;

	printf("�ϼ��� �˰� ���� ���� �Է��ϼ���(1~12) : ");
	scanf("%d", &month);
	printf("�ϼ��� �˰� ���� ���� : %d\n", month);


	if (month <= 12)
	{
		switch (month)
		{
		case 4:
		case 6:
		case 9:
		case 11:
			printf("%d���� ������ : 30��\n",month);
			break;
		case 2:
			printf("%d���� ������ : 29��\n", month);
			break;
		default:
			printf("%d���� ������ : 31��\n", month);
			break;
		}
	}
	else
	{
		printf("���� �߸� �ԷµǾ����ϴ� 1~12 ���� ������ �Է��ϼ���.\n");
	}


	return 0;

	system("pause");

}