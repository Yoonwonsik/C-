#include <stdio.h>
#include <stdlib.h>

void main(void)
{	


	//���� ����
	char c1;
	int n1;
	float d1;

	//���� ����(�ִ´�)
	c1 = 'a';
	n1 = 200;
	d1 = 59.56f;

	// c1, n1, d1�� printf�� �̿��Ͽ� ����Ͻÿ�
	printf("[%c]\n[%d]\n[%f]\n", c1, n1, d1);


	// ���� ���� & �ʱ�ȭ
	char c = 'A';
	int n = 123;
	double f = 3.14;
	
	//��� : printf
	printf("\r[%c]\n[%d]\n[%lf]", c, n, f);

	// debug�� ���ȭ�� ��ž��Ű������
	getchar();
}