#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int score = 0;

	printf("���� : ");
	scanf("%d", &score);

	if (90 <= score && score <= 100)
	{
		printf("A\n");
	}
	else if (80 <= score && score < 90)
	{
		printf("B\n");
	}
	else if (70 <= score && score < 80)
	{
		printf("C\n");
	}
	else if (60 <= score && score < 70)
	{
		printf("D\n");
	}
	else if(0 <= score && score < 60)
	{
		printf("F\n");
	}
	else if(score < 0 || score > 100)
	{
		printf("�߸� �ԷµǾ����ϴ�. �ٽ� �Է����ּ���\n");
	}

	return 0;

	system("pause");
}