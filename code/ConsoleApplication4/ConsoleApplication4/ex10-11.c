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
	//�迭 ����
	int a[ROWS][COLS];

	//�迭�� ����
	arrinput(a);

	//�迭�� ���
	arrprint(a);

	return 0;
}