#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int score = 0;

	printf("������ �Է��ϼ��� :");
	scanf("%d", &score);

	if (score >= 60)
	{
		printf("���� : %d\n", score);
		printf("��� : �հ�\n");
	}
	else
	{
		printf("���� : %d\n", score);
		printf("��� : ���հ�\n");
	}
	return 0;

	system("pause");
}