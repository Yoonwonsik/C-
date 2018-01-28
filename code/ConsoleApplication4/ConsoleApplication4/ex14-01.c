#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *p;
	p = (int*)malloc(sizeof(int));
	if (p == NULL)
	{
		printf("not allocated \n");
		return;
	}
	*p = 1;
	printf("%d\n", *p);

	return 0;

	system("pause");
}