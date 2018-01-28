#include <stdio.h>
#include <stdlib.h>

void main()
{
	char greeting[] = "Hello";
	char *ptr;

	ptr = greeting;

	for (; *ptr != '\0';)
	{
		printf("%c", *ptr);
		ptr++;
	}
	printf("\n");

	system("pause");
}