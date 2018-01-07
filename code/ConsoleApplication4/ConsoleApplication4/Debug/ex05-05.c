#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int data = 0;
	int year = 0;
	int month = 0;
	int date = 0;
	float a1 = 0.0;
	float a2 = 0.0;
	float a3 = 0.0;
	float a4 = 0.0;
	float a5 = 0.0;

	printf("정수값을 입력하세요 : \n");
	scanf("%d", &data);
	printf("입력값 : %d\n", data);
	printf("출력값 : %d\n", data);

	printf("ACII 값을 얻을 정수값을 입력하세요 : \n");
	scanf("%d", &data);
	printf("input : %d\n", data);
	printf("output : %c\n", data);

	printf("ACII 값을 얻을 정수값을 입력하세요 : \n");
	scanf("%d", &data);
	printf("input : %d\n", data);
	printf("output : %c\n", data);

	printf("년을 입력하세요 : \n");
	scanf("%d", &year);
	printf("월을 입력하세요 : \n");
	scanf("%d", &month);
	printf("일을 입력하세요 : \n");
	scanf("%d", &date);
	printf("input year: %d\n", year);
	printf("input month: %d\n", month);
	printf("input date: %d\n", date);
	printf("Your birthday is %d. %d. %d.\n", year, month, date);

	printf("숫자를 차례대로 입력하세요 : \n");
	scanf("%f %f %f %f %f", &a1, &a2, &a3, &a4, &a5);
	printf("input : %.1f %.3f %.5f %.1f %.4f\n", a1, a2, a3, a4, a5);
	printf("%9.3f\n", a1);
	printf("%9.3f\n", a2);
	printf("%9.3f\n", a3);
	printf("%9.3f\n", a4);
	printf("%9.3f\n", a5);

	system("pause");

	return 0;

}