#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 2005;
	int *p = &a;
	printf("p : %d \n",p);
	printf("&a: %d \n",&a);

	(*p)++; // a++�� ���� �ǹ̸� ����
	printf("a :%d \n",a);
	printf("*p:%d \n",*p);

	*p++; // *(p++) �� ���� �ǹ̸� ����
	printf("a :%d \n", a);
	printf("*p:%d \n", *p);

	return 0;
}