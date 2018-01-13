#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	/*
	int Score = 0;
	

	printf("점수를 입력하세요(0~100) : ");
	scanf("%d", &Score);
	printf("입력된 점수(Score) : %d\n", Score);

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
		printf("숫자가 잘못 입력되었습니다.\n");
	}
	*/
	int month = 0;

	printf("일수를 알고 싶은 달을 입력하세요(1~12) : ");
	scanf("%d", &month);
	printf("일수를 알고 싶은 달은 : %d\n", month);


	if (month <= 12)
	{
		switch (month)
		{
		case 4:
		case 6:
		case 9:
		case 11:
			printf("%d월의 날수는 : 30일\n",month);
			break;
		case 2:
			printf("%d월의 날수는 : 29일\n", month);
			break;
		default:
			printf("%d월의 날수는 : 31일\n", month);
			break;
		}
	}
	else
	{
		printf("달이 잘못 입력되었습니다 1~12 사이 정수를 입력하세요.\n");
	}


	return 0;

	system("pause");

}