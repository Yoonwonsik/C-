#include <stdio.h>
#include <stdlib.h>

void main()
{
	char   *pc = NULL;
	int	   *pi = NULL;
	double *pd = NULL;

	printf("pc의 크기 : %d \n", sizeof(pc));
	printf("pi의 크기 : %d \n", sizeof(pi));
	printf("pd의 크기 : %d \n", sizeof(pd));

	printf("char*  의 크기 : %d \n",sizeof(char*));
	printf("short* 의 크기 : %d \n",sizeof(short*));
	printf("int*   의 크기 : %d \n",sizeof(int*));
	printf("float* 의 크기 : %d \n",sizeof(float*));
	printf("double*의 크기 : %d \n",sizeof(double*));

	system("pause");
}