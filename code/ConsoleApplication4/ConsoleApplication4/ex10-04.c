#include <stdio.h>
#include <stdlib.h>

void printarray(int array[], int size)
{
	for (int i =0; i< size; i=i+1)
	{
		printf("%d", array[i]);
	}
	printf("\n");
}
void sortselect(int array[], int size)
{
	// i: 0~ 8까지
	for (int i = 0; i < size-1; i = i + 1)
	{
		// j: 1~9까지
		for (int j = i+1; j < size; j = j + 1)
		{
			if (array[i] > array[j])
			{
				//swap하기!
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}
void main()
{
	//배열선언
	int score[] = {23, 96, 35, 42, 81, 19, 8, 77, 50};

	//배열의 사이즈
	int size = sizeof(score) / sizeof(int);

	//배열출력
	printf("정렬전 :");
	printarray(score, size);
	/*for (int i = 0; i < size; i = i + 1)
	{
		printf("%d", score[i]);
		if (i < size-1)
		{
			printf(", ");
		}
	}
	printf("\n");*/
	
	//정렬
	sortselect(score, size);

	//배열 다시 출력
	printf("정렬후 :");
	printarray(score, size);
	/*printf("정렬후 :");
	for (int i = 0; i < size; i = i + 1)
	{
		printf("%d", score[i]);
		if (i < size-1)
		{
			printf(", ");
		}
	}
	printf("\n");*/
}