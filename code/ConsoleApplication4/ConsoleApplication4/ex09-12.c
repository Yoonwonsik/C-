#include <stdio.h>
#include <stdlib.h>

void recursive(int step)
{
	printf("recursive call. step=%2d \n",step);
	
	//함수 탈출 조건
	if (step == 10) return;
	recursive(++step);
}

void main()
{
	int step = 0;
	recursive(step);
	system("pause");
}