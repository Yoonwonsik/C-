#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void)
{
	char s[255]; // ���ڿ� ũ������
	int a = 0; // ����
	int b = 0; // ����
	int i;

	printf("�ܾ �Է��ϼ��� : ");
	scanf("%s", s);

	printf("i�� �Է��ϼ��� : ");
	scanf("%d", &i);


	
	for (i = 0; i < strlen(s); ++i)
	{
		char str = s[i];

		if (str == 'a' || str == 'e' || str == 'i' || str == 'o' || str == 'u')
		{
			a++;
		}
		else
		{
			b++;
		}
	}
	printf("�������� : %d\n", a);
	printf("�������� : %d\n", b);

	system("pause");


}