#include <stdio.h>
#include <stdlib.h>

void main()
{
	int arr[10];

	// 정수입력받기
	for (int i = 0; i < 10; i = i + 1)
	{
		printf("정수 %d : ", i + 1);
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
	printf("최소값 : %d\n", min);
	printf("최대값 : %d\n", max);

}