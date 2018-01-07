#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int age = 0;
	float weight = 0.0;

	printf("정수와 실수를 입력하시오\n");
	scanf("%d %f", &age, &weight);

	printf("나이는 : %d\n", age);
	printf("몸무게는 : %l\n", weight);
	
	getchar();

	return 0;

}