#include <stdio.h>
#include <stdlib.h>

void recursive(int step)
{
	printf("recursive call. step=%2d \n",step);
	
	//�Լ� Ż�� ����
	if (step == 10) return;
	recursive(++step);
}

void main()
{
	int step = 0;
	recursive(step);
	system("pause");
}