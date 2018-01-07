#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a ;
	int b ;
	float c = 3.14;

	printf("input : ");
	scanf("%d %d", &a, &b);

	printf("더하기 : %d\n",a + b);
	printf("빼기   : %d\n",a - b);
	printf("곱하기 : %d\n",a * b);
	printf("나누기 : %d\n",a / b);
	printf("나머지 : %d\n", a % b);
	printf("[%07.3f]", c);

	system("pause");

	return 0;
}