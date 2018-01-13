#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int score = 0;

	printf("점수를 입력하세요 :");
	scanf("%d", &score);

	if (score >= 60)
	{
		printf("점수 : %d\n", score);
		printf("결과 : 합격\n");
	}
	else
	{
		printf("점수 : %d\n", score);
		printf("결과 : 불합격\n");
	}
	return 0;

	system("pause");
}