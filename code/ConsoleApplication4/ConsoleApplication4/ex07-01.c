#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a = 0;
	int b = 0;

	printf("두 정수를 입력하세요 :");
	scanf("%d %d", &a, &b);

	if (a <= b)
		printf("%d <= %d\n", a, b);
	else
		printf("%d > %d\n ", a, b);

	return 0;

	system("pause");
}