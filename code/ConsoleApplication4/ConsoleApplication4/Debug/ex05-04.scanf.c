#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int age = 0;
	float weight = 0.0;

	printf("������ �Ǽ��� �Է��Ͻÿ�\n");
	scanf("%d %f", &age, &weight);

	printf("���̴� : %d\n", age);
	printf("�����Դ� : %l\n", weight);
	
	getchar();

	return 0;

}