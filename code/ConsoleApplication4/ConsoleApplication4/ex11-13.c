#include <stdio.h>
#include <stdlib.h>

void main()
{
	char ch = '\0';
	char *pc = NULL;
	pc = &ch;
	for (int i = 0; i < 3; i++)
	{
		printf("pc+%d = %d\n", i, pc + i);
	}

	int n = 0;
	int *pi = &n;
	for (int i = 0; i < 3; i++)
	{
		printf("pi+%d = %d\n", i, pi + i);
	}

	double d = 0.0;
	double *pd = &d;
	for (int i = 0; i < 3; i++)
	{
		printf("pd+%d = %d\n", i, pd + i);
	}

	system("pause");
}