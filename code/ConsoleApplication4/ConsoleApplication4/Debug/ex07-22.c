#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void)
{
	char s[255]; // 문자열 크기측정
	int a = 0; // 모음
	int b = 0; // 자음
	int i;

	printf("단어를 입력하세요 : ");
	scanf("%s", s);

	printf("i를 입력하세요 : ");
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
	printf("모음개수 : %d\n", a);
	printf("자음개수 : %d\n", b);

	system("pause");


}