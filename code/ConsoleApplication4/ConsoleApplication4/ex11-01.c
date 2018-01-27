#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 2005;

	printf("a : %d\n", a);
	printf("\n");
	
	printf("&a x= %#p \n",&a);
	printf("&a x= %#x \n",&a);
	printf("&a d= %d \n",&a);

	return 0;
}