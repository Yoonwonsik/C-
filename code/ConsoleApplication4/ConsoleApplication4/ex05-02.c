#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	// \n
	printf("����Ŀ�.\n");

	// \r Ŀ���� �� ������ (���ڴ� ��� ���Ե�)
	printf("����Ŀ�.����ľ�.\r���̿Ϳ�.\n");

	// \t ���� ��ġ�̵� 8ĭ
	printf("12345678123456781234567812345678\n");
	printf("^\t^\t^\t^\n");

	// \b Ŀ���� �� ĭ ������ �̵�
	printf("1234567");
	printf("\b");
	printf("\n");

	//debug�� ȭ�� ����
	getchar(); // enter �Է±��� ��ٸ�.

}