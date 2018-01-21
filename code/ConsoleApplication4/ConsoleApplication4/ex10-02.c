#include <stdio.h>
#include <stdlib.h>

void printarray(int arr[], int size);

int main()
{
	//배열 선언 초기화의 경우 array[] = {, ,}
	int array[5];
	//배열의 초기화 = 선언 +대입
	
	int array1[5] = { 0,0,0,0,0 };
	int array2[5] = {  0, }; // ={ 0,0,0,0,0 }
	int array3[5] = { -1, }; // { -1,0,0,0,0 }
	int array4[ ] = { 1,2,3,1}; // int array4[4] = {1,2,3,1}

	//array1를 출력하시오
	printarray(array1, sizeof(array1) / sizeof(int) );
	//array2를 출력하시오
	printarray(array2, sizeof(array2) / sizeof(int));
	//array3를 출력하시오
	printarray(array3, sizeof(array3) / sizeof(int));
	//array4를 출력하시오
	printarray(array4, sizeof(array4) / sizeof(int));


	return 0;
}
void printarray(int arr[], int size)
{
	// i<= 아닌 이유는 0부터 시작하기 때문!
	for (int i = 0; i < size; i = i + 1)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
}