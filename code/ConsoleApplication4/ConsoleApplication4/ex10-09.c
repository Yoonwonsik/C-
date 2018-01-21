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
				//swap�ϱ�!
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}
void main()
{
	// �迭����
	int score[5] = { 7,9,4,8,5 };

	// size ���ϱ�
	int size = sizeof(score) / sizeof(int);

	// ������ ����
	printarray(score, size);

	// ����
	sortselect(score, size);

	// ���� �� 3���� ���
	printarray(score, 3);

}