#include <stdio.h>
#include <stdlib.h>

int main()
{
	char str[10] = { '\0' };

	char *ptr = NULL;

	for (; str[0] == '\0';)
	{
		printf("Enter a string: \n");
		scanf("%9[0123456789.,-$]s", str);
		//입력버퍼 초기화
		fflush(stdin);
		rewind(stdin);
		flushall();
	}

	ptr = str;

	for (; *ptr != '\0'; ptr=ptr+1) 
	{
		printf("%c", *ptr);
	}
	printf("\n");

	
	system("pause");

	return 0;
}
