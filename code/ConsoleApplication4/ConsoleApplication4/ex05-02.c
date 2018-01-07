#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	// \n
	printf("배고파요.\n");

	// \r 커서를 맨 앞으로 (글자는 덮어서 쓰게됨)
	printf("배고파요.배고파아.\r잠이와요.\n");

	// \t 탭의 위치이동 8칸
	printf("12345678123456781234567812345678\n");
	printf("^\t^\t^\t^\n");

	// \b 커서를 한 칸 앞으로 이동
	printf("1234567");
	printf("\b");
	printf("\n");

	//debug시 화면 멈춤
	getchar(); // enter 입력까지 기다림.

}