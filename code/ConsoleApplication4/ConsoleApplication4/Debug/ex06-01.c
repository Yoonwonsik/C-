#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a =11 ;
	int b =5;
	float c = 3.14;
	
	int add = a + b;
	int minus = a - b;
	double multi = a * b;
	double divid = a / b;
	double r = a % b;



	printf("input : "); 
	// 첫번째 %d는 a에, 두번째 %b b의 주소값에 저장 (&는 주소)
	scanf("%d %d", &a, &b); 

	printf("더하기 : %d\n",a + b);
	printf("빼기   : %d\n",a - b);
	printf("곱하기 : %d\n",a * b);
	printf("나누기 : %d\n",a / b);
	printf("나머지 : %d\n", a % b);
	printf("[%07.3f]\n", c);

	system("pause");

	return 0;
}