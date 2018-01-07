#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	//putchar = put + character
	putchar(65); // 65='A'
	putchar('A'); // 'A'

	//#define putchar(c) putc( (c), stdout)
	putc('a',stdout); // stdout : standard output(모니터)

	printf("\n");

	//puts : 문자열을 출력할 때 사용
	puts("배가 고픕니다.");



	//debug 화면 멈춤
	getchar();


}