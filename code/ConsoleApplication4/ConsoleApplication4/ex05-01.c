#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	//printf
	int data = 5;
	printf("%d\n", data);

	int data1 = 3;
	int data2 = 5;
	printf("%d %d\n", data1, data2);

	int step = 5;
	int value = 3 * step;
	printf("3 * %d = %d\n",step, value);

	//ASCII 코드 출력 : 숫자 -> 문자
	printf("65의 ASCII 값은 %c입니다.\n", 65);

	// 숫자 -> 문자
	char data3 = 65;
	printf("%c의 ASCII 값은 %d입니다.\n", data3, data3);

	//실수 표현
	float value1 = 2.1f;//2.1도 가능
	double value2 = 2.1;
	printf("%f\n", value1);
	printf("%f, %d\n", value1, value2);

	char data4 = -1;
	printf("%d, %u\n", data4, data4);

	//진접
	int d1 = 10;
	int d2 = 012; // 10진수 10
	int d3 = 0xa; // 10진수 10

	printf("%x, %d, %o\n", d3, d1, d2); //각 진수 맞춰 출력
	printf("%d, %d, %d\n", d3, d1, d2); //10진수에 맞춰서 출력

	//printf 정렬
	int data21 = 7;
	printf("[%d][%5d]  \n", data21, data21); // 오른쪽정렬
	printf("[%d][%-5d]  \n", data21, data21); // 왼쪽정렬
	printf("[%d][%05d]  \n", data21, data21);// 공백에 0을 채움

	//소수점 정렬 출력
	double data31 = 3.141592;
	printf("[%f][%.4f][%8.4f][%-8.4f]\n", data31, data31, data31, data31); //


	// debug 화면 stop
	getchar();
}