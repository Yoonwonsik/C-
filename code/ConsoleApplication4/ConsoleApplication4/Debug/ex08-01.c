#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int i, sum = 0;
	//for(~����; ~����; ���)
	for (i = 0;   //~����
		i <= 10;  //~����
		i = i + 1 //���
		)
	{
		sum = sum + i;
	}

	printf("%d\n", sum);
	system("pause");
}