#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[] = { 0,1,2,3,4 };
	int *p = &arr[0]; // arr == &arr[0] �� *p=arr�� �ᵵ ��

	// sizeof�� �̿��Ͽ� �迭�� ũ�� ���ϱ�
	int size = 0;
	size = sizeof(arr) / sizeof(int);

	//������ �ּ� ������ �̿��Ͽ� �迭�� ���� ���
	for (int i = 0; i < size; i = i + 1)
	{
		printf("%d ", *(p+i));
	}

	return 0;
}