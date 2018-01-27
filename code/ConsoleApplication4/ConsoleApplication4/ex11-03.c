#include <stdio.h>
#include <stdlib.h>

void main()
{
	char c = 'a';
	int n = 7;

	int *p = NULL; // stdlib.h¿¡ Á¤ÀÇ
	p = &n;

	printf(" &n = %p\n", &n);//7
	printf("  n = %d\n",n);

	printf(" &p = %p\n", &p);
	printf("  p = %d\n", p); 
	printf(" *p = %d\n", *p);

	system("pause");
}