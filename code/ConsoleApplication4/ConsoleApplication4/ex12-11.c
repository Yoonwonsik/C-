#include <stdio.h>
#include <stdlib.h>

int main()
{
/*	char str1[] = "abcde";
	char str2[10] = "";
	char str3[] = "Hello World";

	printf("str1의 길이 = %2d \n", strlen(str1));
	printf("str2의 길이 = %2d \n", strlen(str2));
	printf("str3의 길이 = %2d \n", strlen(str3));*/

	char s1[12] = { '\0' };
	char s2[9] = "Good Day";
	printf("%s\n", s1);
	printf("%s\n", s2);

	strcpy(s1,s2);

	printf("%s\n", s1);

	strcpy(s1, "01234");

	printf("%s\n", s1);

	strncpy(s1, "012344400000000000000",sizeof(s1)/sizeof(char)-1);

	printf("%s\n", s1);

	system("pause");

	return 0;
}