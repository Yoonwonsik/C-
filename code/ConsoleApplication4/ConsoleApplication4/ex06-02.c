#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	
	//++가 앞에 있을 경우
	int x = 3;
	int y = ++x;
	printf("%d\n", x);
	printf("%d\n", y);


	printf("---------\n");

	//++가 뒤에 있을 경우
	x = 3;
	y = x++;
	printf("%d\n", x);
	printf("%d\n", y);

	system("pause");
}