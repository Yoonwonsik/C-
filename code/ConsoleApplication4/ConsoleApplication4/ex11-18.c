#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>


int main()
{
	//선언 및 초기와
	int i = 3, j = 5;
	int *p = &i, *q = &j, *r = NULL;
	double x;

	/*if (**&p == *(*(&p)))
	{
		printf("참\n");
	}
	else
	{
		printf("거짓\n");
	}

	if (*)
	{
		printf("참\n");
	}
	else
	{
		printf("거짓\n");
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