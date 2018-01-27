#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 2005;
	int *p = &a;
	printf("p : %d \n",p);
	printf("&a: %d \n",&a);

	(*p)++; // a++와 같은 의미를 지님
	printf("a :%d \n",a);
	printf("*p:%d \n",*p);

	*p++; // *(p++) 와 같은 의미를 지님
	printf("a :%d \n", a);
	printf("*p:%d \n", *p);

	return 0;
}