#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int score = 0;

	printf("성적 : ");
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
		printf("잘못 입력되었습니다. 다시 입력해주세요\n");
	}

	return 0;

	system("pause");
}