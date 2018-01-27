#include <stdio.h>
#include <stdlib.h>

void main()
{
	int a = 7;
	int *p = NULL; // stdlib.h¿¡ Á¤ÀÇ
	p = &a;
	
	
	printf(" &a = %p\n", &a);
	printf("  a = %d\n", a);
	

	printf(" &p = %p\n", &p);
	printf("  p = %p\n", p);
	printf(" *p = %d\n", *p);


	system("pause");
}