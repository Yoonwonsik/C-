#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *ip;
	ip = (int*)malloc(sizeof(int)*5);
	if (ip == NULL)
	{
		printf("not allocated \n");
		return;
	}
	printf("Input the age of 5 people :");
	int sum = 0;
	for (int i = 0; i < 5; i = i + 1)
	{
		scanf("%d", ip + i);
		sum = sum + ip[i];
	}
	printf("Average : %.11f\n", sum / 5.0);
	free(ip);
	return 0;

	system("pause");
}