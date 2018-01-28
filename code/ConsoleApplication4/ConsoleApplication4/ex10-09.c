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
	// �迭����
	int score[5] = { 7,9,4,8,5 };

	// size ���ϱ�
	int size = sizeof(score) / sizeof(int);

	// ������ ����
	//printf("5�� �ɻ� ������ ���� �Է� : %d\n", &score[5]);

	// ����
	sortselect(score, size);

	printf("��ȿ���� : ");
	
	// ��ȿ ���� ���
	for (int i = 1; i <= size - 2; i = i + 1)
	{
		printf("%d",score[i]);
	}
	printf("\n");
	
	//�հ� ���ϰ� ��� : 1~size-2
	int sum = arraysum(score, 1, size - 2);
	printf("�հ� : %d\n",sum);

	//��� ���ϰ� ���
	double avg = average(sum, size - 2);
	printf("�հ� : %.2lf\n", avg);

	system("pause");
	
}