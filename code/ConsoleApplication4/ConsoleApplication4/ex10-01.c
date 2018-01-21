#include <stdio.h>
#include <stdlib.h>


//함수선언
int Sum(int a[]);
double Avg(int sum, int size);

int main()
{
	//배열 선언
	int arr[5];

	// 성적입력받기
	for (int i=0; i<5; i=i+1)
	{
		printf("성적 %d : ",i+1);
		scanf("%d", &arr[i]);
	}
	
	printf("합계 : %d \n", Sum(arr));
	int size = sizeof(arr) / sizeof(int);
	printf("평균 : %lf \n", Avg(Sum(arr),size));

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

//평균구하기
double Avg(int sum, int size)
{
	return (double)sum / size;
}