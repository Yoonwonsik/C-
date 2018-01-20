#include <stdio.h>
#include <stdlib.h>

int main()
{

	int a, b, sum = 0;
	printf("정수를 입력하세요 :");
	scanf("%d %d", &a, &b);

	if (a > b)
	{
		//swap
		int temp = a;
		a = b;
		b = temp;
	}
	for (int i = 0; i <= b; i = i + 1)
	{
		sum = sum + i;
	}


	system("pause");
	
	return 0;
}