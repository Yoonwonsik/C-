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

void main()
{
	/*int pos_num = 100, num = 0, temp_num;

	char num_string[4] = "123";
	
	for (int i = 0; i < 3; i = i + 1)
	{
		temp_num = num_string[i];

		num = num + temp_num * pos_num;

		pos_num = pos_num / 10;
	}*/

	/*int post_num = 1, num = 0, i, count;

	char num_string[] = "54321";

	count = strlen(num_string);

	for (i = 0; i < count - 1; i = i + 1)post_num = post_num * 10;

	for (i = 0; i < count; i = i + 1)
	{
		num = num + (num_string[i] - '0')*post_num;
		post_num = post_num / 10;
	}*/
    
	char num_string[] = "1231012";
	
	
	// &num_string[0] == &num_sting == num, string
	int num = output(num_string);

	printf("%s -> %d \n", num_string, num);
}