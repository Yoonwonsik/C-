#include <stdio.h>
#include <stdlib.h>

void scanstr(char str[])
{
	for (; str[0] == '\0';)
	{
		printf("Enter a string: ");
		scanf("%9[0123456789.,-$]s", str);
		//입력버퍼 초기화
		fflush(stdin);
		rewind(stdin);
		flushall();
	}
}

void pointer(char *ptr)
{
	for (; *ptr != '\0'; ptr = ptr + 1)
	{
		printf("%c", *ptr);
	}
	printf("\n");
}


int main()
{
	char str[10] = { '\0' };
	
	//&str[0] == &str == str
	scanstr(str);

	pointer(str);


	system("pause");

	return 0;
}