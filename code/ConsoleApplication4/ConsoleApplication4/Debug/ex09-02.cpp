#include <stdio.h>
#include <stdlib.h>

int Add(int x, int y, int z);

void main(void)
{
	int a = 10, b = 20, c = 30;

	int sum = 0;
	
	sum = Add(a, b, c);

	printf("%d\n", sum);

	system("pause");

}
int Add(int x, int y, int z)
{
	return x + y + z;
}
