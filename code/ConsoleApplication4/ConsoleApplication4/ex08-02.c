#include <stdio.h>
#include <stdlib.h>

int main()
{

	int a, b, sum = 0;
	printf("������ �Է��ϼ��� :");
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