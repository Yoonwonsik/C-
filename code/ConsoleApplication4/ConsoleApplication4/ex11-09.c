#include <stdio.h>
#include <stdlib.h>

void main()
{
	int a = 7;
	int *p = NULL;
	p = &a;

	printf("a       : %2d\n", a);

	a++;
	printf("a++     : %2d\n", a);

	a=a+1;
	printf("a=a+1   : %2d\n", a);

	*p=*p+1;
	printf("*p=*p+1 : %2d\n", a);

	printf("a       : %2d\n", a);

	system("pause");
}