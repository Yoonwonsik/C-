#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a =11 ;
	int b =5;
	float c = 3.14;
	
	int add = a + b;
	int minus = a - b;
	double multi = a * b;
	double divid = a / b;
	double r = a % b;



	printf("input : "); 
	// ù��° %d�� a��, �ι�° %b b�� �ּҰ��� ���� (&�� �ּ�)
	scanf("%d %d", &a, &b); 

	printf("���ϱ� : %d\n",a + b);
	printf("����   : %d\n",a - b);
	printf("���ϱ� : %d\n",a * b);
	printf("������ : %d\n",a / b);
	printf("������ : %d\n", a % b);
	printf("[%07.3f]\n", c);

	system("pause");

	return 0;
}