#include <stdio.h>
#include <stdlib.h>

void main()
{
	int arr[10];

	// �����Է¹ޱ�
	for (int i = 0; i < 10; i = i + 1)
	{
		printf("���� %d : ", i + 1);
		scanf("%d", &arr[i]);
	}
	printf("input :");
	for (int i = 0; i < 10; i = i + 1)
	{
		printf("%d", arr[i]);
		if (i < 9)
		{
			printf(", ");
		}
	}
	printf("\n");
	
	int max = arr[0];
	int min = arr[0];

	for (int i = 0; i < 10; i = i + 1)
	{
		if (max <= arr[i])
		{
			max = arr[i];
		}
		if (min >= arr[i])
		{
			min = arr[i];
		}
	}
	printf("�ּҰ� : %d\n", min);
	printf("�ִ밪 : %d\n", max);

}