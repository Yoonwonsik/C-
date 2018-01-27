#include <stdio.h>
#include <stdlib.h>

void main()
{
	int data = 0;
	int *p = NULL;
	p = &data;
	p = p + 1; // 포인터 변수에 저장된 주소 값을 1만큼 증가~

	char *p1 = (char*)100; //p1에 100번지를 저장
	short *p2 = (short*)100; // p2에 100번지를 저장
	int *p3 = (int*)100; // p3에 100번지를 저장
	double *p4 = (double*)100; // p4에 100번지를 저장

	p1++; //가르키는 대상의 크기가 char형이기 때문에 에 저장된 주소값이 101가 됨
	p2++; //가르키는 대상의 크기가 short형이기 때문에 에 저장된 주소값이 102가 됨
	p3++; //가르키는 대상의 크기가 int형이기 때문에 에 저장된 주소값이 104가 됨
	p4++; //가르키는 대상의 크기가 double형이기 때문에 에 저장된 주소값이 108가 됨
}