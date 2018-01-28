#include <stdio.h>
#include <stdlib.h>


int output(char string[])
{
	int num = 0, count = 0;

	for (; string[count] != 0; count = count + 1)
	{
		num = num * 10 + (string[count] - '0');
	}

	return num;
}

// char msg[] = "input first num";
// char msg[] = "input second num";

void input(char msg[], char num[])
{
	printf("%s",msg);
	scanf("%s", num);
}

void main()
{
	char f_num[100];
	char s_num[100];
	
	input("input first num: ", f_num);
	input("input second num: ", s_num);

	int num1 = output(f_num);
	int num2 = output(s_num);
	printf("%d+%d = %d \n",num1,num2,num1+num2);
}