#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	//printf
	int data = 5;
	printf("%d\n", data);

	int data1 = 3;
	int data2 = 5;
	printf("%d %d\n", data1, data2);

	int step = 5;
	int value = 3 * step;
	printf("3 * %d = %d\n",step, value);

	//ASCII �ڵ� ��� : ���� -> ����
	printf("65�� ASCII ���� %c�Դϴ�.\n", 65);

	// ���� -> ����
	char data3 = 65;
	printf("%c�� ASCII ���� %d�Դϴ�.\n", data3, data3);

	//�Ǽ� ǥ��
	float value1 = 2.1f;//2.1�� ����
	double value2 = 2.1;
	printf("%f\n", value1);
	printf("%f, %d\n", value1, value2);

	char data4 = -1;
	printf("%d, %u\n", data4, data4);

	//����
	int d1 = 10;
	int d2 = 012; // 10���� 10
	int d3 = 0xa; // 10���� 10

	printf("%x, %d, %o\n", d3, d1, d2); //�� ���� ���� ���
	printf("%d, %d, %d\n", d3, d1, d2); //10������ ���缭 ���

	//printf ����
	int data21 = 7;
	printf("[%d][%5d]  \n", data21, data21); // ����������
	printf("[%d][%-5d]  \n", data21, data21); // ��������
	printf("[%d][%05d]  \n", data21, data21);// ���鿡 0�� ä��

	//�Ҽ��� ���� ���
	double data31 = 3.141592;
	printf("[%f][%.4f][%8.4f][%-8.4f]\n", data31, data31, data31, data31); //


	// debug ȭ�� stop
	getchar();
}