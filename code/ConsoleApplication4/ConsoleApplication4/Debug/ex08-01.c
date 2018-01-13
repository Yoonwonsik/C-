#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int i, sum = 0;
	//for(~부터; ~까지; 어떻게)
	for (i = 0;   //~부터
		i <= 10;  //~까지
		i = i + 1 //어떻게
		)
	{
		sum = sum + i;
	}

	printf("%d\n", sum);
	system("pause");
}