#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a ;
	int b ;
	float c = 3.14;

	printf("input : ");
	scanf("%d %d", &a, &b);

	printf("���ϱ� : %d\n",a + b);
	printf("����   : %d\n",a - b);
	printf("���ϱ� : %d\n",a * b);
	printf("������ : %d\n",a / b);
	printf("������ : %d\n", a % b);
	printf("[%07.3f]", c);

	system("pause");

	return 0;
}