#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int i, j, sum = 0;
	//for(~����; ~����; ���)
	printf("�հ踦 ���� ���ڸ� �������� : ");
	scanf("%d", &j);
	for (i = 0;   //~����
		i <= j;  //~����
		i = i + 1 //���
		)
	{
		sum = sum + i;
		printf("%d\n", i);
	}

	printf("1���� %d������ �հ�� : %d\n", j,sum);
	system("pause");
}