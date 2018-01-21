#include <stdio.h>
#include <stdlib.h>
 
int global_mode;

int main()
{
	char ch = 'a';
	int value, temp;
	global_mode = 1;
	value = MODE(ch, temp);

	system("pause");
}
int MODE(char ch, int temp)
{
	int found = 0;
	if (found==0)
	{
		global_mode = 2;
	}

	return found;
}