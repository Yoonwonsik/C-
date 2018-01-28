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
int arraysum(int array[], int start, int end)
{
	int sum = 0;
	for (int i = start; i <= end; i = i + 1)
	{
		sum = sum + array[i];
	}
	return sum;
}
double average(int sum,int count)
{
	double avg = (double)sum / count;
	return avg;
}
void main()
{
	// 배열선언
	int score[5] = { 7,9,4,8,5 };

	// size 구하기
	int size = sizeof(score) / sizeof(int);

	// 변경전 점수
	//printf("5명 심사 위원의 점수 입력 : %d\n", &score[5]);

	// 변경
	sortselect(score, size);

	printf("유효점수 : ");
	
	// 유효 점수 출력
	for (int i = 1; i <= size - 2; i = i + 1)
	{
		printf("%d",score[i]);
	}
	printf("\n");
	
	//합계 구하고 출력 : 1~size-2
	int sum = arraysum(score, 1, size - 2);
	printf("합계 : %d\n",sum);

	//평균 구하고 출력
	double avg = average(sum, size - 2);
	printf("합계 : %.2lf\n", avg);

	system("pause");
	
}