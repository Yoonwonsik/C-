#include <stdio.h>
#include <stdlib.h>


//�Լ�����
int Sum(int a[]);
double Avg(int sum, int size);

int main()
{
	//�迭 ����
	int arr[5];

	// �����Է¹ޱ�
	for (int i=0; i<5; i=i+1)
	{
		printf("���� %d : ",i+1);
		scanf("%d", &arr[i]);
	}
	
	printf("�հ� : %d \n", Sum(arr));
	int size = sizeof(arr) / sizeof(int);
	printf("��� : %lf \n", Avg(Sum(arr),size));

	return 0;
}



int Sum(int a[], int size)
{
	int sum = 0;
	for (int i = 0; i < 5; i = i + 1)
	{
		sum = sum + a[i];
	}
	return sum;
}

//��ձ��ϱ�
double Avg(int sum, int size)
{
	return (double)sum / size;
}