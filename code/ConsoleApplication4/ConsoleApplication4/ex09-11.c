#include <stdio.h>
#include <stdlib.h>
#include <time.h> //C���� ��¥�� �ð� ���õ� ���

// ���� ����
void main()
{
	int rand1, rand2, rand3 = 0;

	printf("rand()�� �̿��� ������ �� ����\n");

	srand(time(NULL));

	//������ �� ����
	rand1 = rand();
	printf("%d\n", rand1);

	//0���� 50������ ������ ���� ����
	rand2 = rand() % 51;
	printf("%d\n", rand2);

	//min(10) ���� max(80) ������ ������ ���� ����
	int min = 10;
	int max = 80;
	rand3 = (rand() % ((max + 1) - min)) + min;
	printf("%d\n", rand3);

	system("pause");
}