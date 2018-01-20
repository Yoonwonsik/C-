#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int i, j, sum = 0;
	//for(~부터; ~까지; 어떻게)
	printf("합계를 더할 숫자를 넣으세요 : ");
	scanf("%d", &j);
	for (i = 0;   //~부터
		i <= j;  //~까지
		i = i + 1 //어떻게
		)
	{
		sum = sum + i;
		printf("%d\n", i);
	}

	printf("1부터 %d까지의 합계는 : %d\n", j,sum);
	system("pause");
}