#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	
	//++�� �տ� ���� ���
	int x = 3;
	int y = ++x;
	printf("%d\n", x);
	printf("%d\n", y);


	printf("---------\n");

	//++�� �ڿ� ���� ���
	x = 3;
	y = x++;
	printf("%d\n", x);
	printf("%d\n", y);

	system("pause");
}