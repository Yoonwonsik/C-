#include <stdio.h>
#include <stdlib.h>

void printarray(int arr[], int size);

int main()
{
	//�迭 ���� �ʱ�ȭ�� ��� array[] = {, ,}
	int array[5];
	//�迭�� �ʱ�ȭ = ���� +����
	
	int array1[5] = { 0,0,0,0,0 };
	int array2[5] = {  0, }; // ={ 0,0,0,0,0 }
	int array3[5] = { -1, }; // { -1,0,0,0,0 }
	int array4[ ] = { 1,2,3,1}; // int array4[4] = {1,2,3,1}

	//array1�� ����Ͻÿ�
	printarray(array1, sizeof(array1) / sizeof(int) );
	//array2�� ����Ͻÿ�
	printarray(array2, sizeof(array2) / sizeof(int));
	//array3�� ����Ͻÿ�
	printarray(array3, sizeof(array3) / sizeof(int));
	//array4�� ����Ͻÿ�
	printarray(array4, sizeof(array4) / sizeof(int));


	return 0;
}
void printarray(int arr[], int size)
{
	// i<= �ƴ� ������ 0���� �����ϱ� ����!
	for (int i = 0; i < size; i = i + 1)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
}