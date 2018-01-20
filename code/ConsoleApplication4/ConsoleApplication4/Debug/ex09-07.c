#include <stdio.h>

//Call by value 예제
/*
void swap(int x, int y);

int main()
{
	int a = 5;
	int b = 3;

	printf("main : a=%d, b=%d\n", a, b);
	swap(a, b);
	printf("main : a=%d, b=%d\n", a, b);

	return 0;
}

void swap(int x, int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;

	printf("swap : x=%d, y=%d\n", x, y);
}
*/

//Call by reference 예제

void swap(int *x, int *y);

int main()
{
	int a = 5; int b = 3;

	printf("main : a=%d, b=%d\n", a, b);
	swap(&a, &b);
	printf("main : a=%d, b=%d\n", a, b);

	return 0;
}

void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;

	printf("swap : x=%d, y=%d\n", *x, *y);
}