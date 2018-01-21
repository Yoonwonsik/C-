#include <stdio.h>
#include <stdlib.h>

void printarray(int array[], int size)
{
	for (int i = 0; i< size; i = i + 1)
	{
		printf("%d", array[i]);
	}
	printf("\n");
}
void sortselect(int array[], int size)
{
	// i~
	for (int i = 0; i < size - 1; i = i + 1)
	{
		// j~
		for (int j = i + 1; j < size; j = j + 1)
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
	// 배열선언
	int score[5] = { 7,9,4,8,5 };

	// size 구하기
	int size = sizeof(score) / sizeof(int);

	// 변경전 점수
	printarray(score, size);

	// 변경
	sortselect(score, size);

	// 변경 후 3개만 출력
	printarray(score, 3);

}