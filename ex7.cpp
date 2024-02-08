#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS // scanf error 
#pragma warning(disable:4996)

void main()
{
	int a;
	double x;
	printf("정수와 실수를 입력하고 Eenter>");
	scanf_s("%d %lf", &a, &x);
	printf("입력된 정수:  %d\n", a);
	printf("입력된 실수:  %lf\n", x);
}