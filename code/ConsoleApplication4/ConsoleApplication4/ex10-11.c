#include <stdio.h>
#include <stdlib.h>

#define ROWS 4
#define COLS 3
void arrinput(int a[ROWS][COLS])
{
	for (int i = 0; i < ROWS; i = i + 1)
	{
		for (int j = 0; j < COLS; j = j + 1)
		{
			a[i][j] = i*j;
		}
	}
}
void arrprint(int a[ROWS][COLS])
{
	for (int i = 0; i < ROWS; i = i + 1)
	{
		for (int j = 0; j < COLS; j = j + 1)
		{
			printf("a[%d][%d]=%d ", i, j, a[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	//배열 선언
	int a[ROWS][COLS];

	//배열의 대입
	arrinput(a);

	//배열의 사용
	arrprint(a);

	return 0;
}