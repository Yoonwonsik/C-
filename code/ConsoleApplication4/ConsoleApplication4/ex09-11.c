#include <stdio.h>
#include <stdlib.h>
#include <time.h> //C에서 날짜와 시간 관련된 헤더

// 난수 생성
void main()
{
	int rand1, rand2, rand3 = 0;

	printf("rand()를 이용한 임의의 수 생성\n");

	srand(time(NULL));

	//임의의 수 생성
	rand1 = rand();
	printf("%d\n", rand1);

	//0부터 50까지의 임의의 숫자 생성
	rand2 = rand() % 51;
	printf("%d\n", rand2);

	//min(10) 부터 max(80) 사이의 임의의 숫자 생성
	int min = 10;
	int max = 80;
	rand3 = (rand() % ((max + 1) - min)) + min;
	printf("%d\n", rand3);

	system("pause");
}