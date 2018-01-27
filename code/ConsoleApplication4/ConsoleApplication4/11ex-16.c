#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[] = { 0,1,2,3,4 };
	int *p = &arr[0]; // arr == &arr[0] 즉 *p=arr로 써도 됨

	// sizeof를 이용하여 배열의 크기 구하기
	int size = 0;
	size = sizeof(arr) / sizeof(int);

	//포인터 주소 연산을 이용하여 배열의 값을 출력
	for (int i = 0; i < size; i = i + 1)
	{
		printf("%d ", *(p+i));
	}

	return 0;
}