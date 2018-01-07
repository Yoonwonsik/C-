#include <stdio.h>
#include <stdlib.h>

void main(void)
{	


	//변수 선언
	char c1;
	int n1;
	float d1;

	//변수 대입(넣는다)
	c1 = 'a';
	n1 = 200;
	d1 = 59.56f;

	// c1, n1, d1을 printf를 이용하여 출력하시오
	printf("[%c]\n[%d]\n[%f]\n", c1, n1, d1);


	// 변수 선언 & 초기화
	char c = 'A';
	int n = 123;
	double f = 3.14;
	
	//출력 : printf
	printf("\r[%c]\n[%d]\n[%lf]", c, n, f);

	// debug시 결과화면 스탑시키기위해
	getchar();
}