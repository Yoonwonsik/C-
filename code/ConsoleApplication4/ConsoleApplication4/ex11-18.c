#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>


int main()
{
	//���� �� �ʱ��
	int i = 3, j = 5;
	int *p = &i, *q = &j, *r = NULL;
	double x;

	/*if (**&p == *(*(&p)))
	{
		printf("��\n");
	}
	else
	{
		printf("����\n");
	}

	if (*)
	{
		printf("��\n");
	}
	else
	{
		printf("����\n");
	}*/
	
	
	printf("p     =%d\n", p);
	printf("*p    =%d\n", *p);
	printf("&p    =%d\n", &p);
	printf("*&p   =%d\n", *&p);
	printf("**&p  =%d\n", **&p);
	printf("\n");
	printf("i     =%d\n", i);
	printf("&i    =%d\n", &i);
	printf("*&i   =%d\n", *&i);
	printf("\n");
	printf("*(r=&j)*=*p   =%d\n", *(r = &j) *= *p);
	printf("%lf\n", (double)(7 * (*p)) / ((*q) + 7));
}