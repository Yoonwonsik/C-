#include <stdio.h>
#include <stdlib.h>

int sum(char input[],int length)
{
	int result = 0;

	for (int i = 0; i < length; i = i + 1)
	{
		result = result + (input[i] - '0');
	}
	return result;
}

void main()
{
	char input[100];
	int length;
	scanf("%d", &length);
	scanf("%s", input);

	int result = sum(input,length);

	printf("%d", result);
}