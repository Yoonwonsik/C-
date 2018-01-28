#include <stdio.h>
#include <stdlib.h>

void main()
{
	/*char s1[] = "ABC COMPANY";
	char s2[] = "ABC INC";

	printf("strcmp  : %3d\n", strcmp(s1, s2));
	printf("strncmp : %3d\n", strncmp(s1, s2,4));

	char s3[] = "ABC COMPANY";
	char s4[] = "ABC COMPANY";
	printf("strcmp  : %3d\n", strcmp(s3, s4));
	printf("strncmp : %3d\n", strncmp(s3, s4, sizeof(s3)));

	char s5[] = "aacb";
	char s6[] = "aac";
	printf("%d\n", strcmp(s5, s6));*/

	char s7[14] = "CON";
	char s8[11] = "CATENATION";
	printf("%s\n", strcat(s7, s8));

	char s9[10] = "CON";
	char s10[11] = "CATENATION";
	int size = sizeof(s9) / sizeof(char) - strlen(s9) -1;
	printf("%s\n", strncat(s9,s10,size));


	system("pause");
}