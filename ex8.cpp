#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS // scanf error 
#pragma warning(disable:4996)

void main()
{
	int a, b, c;
	printf("정수 a,b,c 를 입력하고 Eenter>");
	scanf_s("%d %d %d", &a, &b, &c);
	float s = 3 * a + 4 * b - 6 * c;
	float m = 2 * a * a + 4 * b * c;
	double e = (a + b) / c;
	printf("3a + 4b-6c = %d \n", s );
	printf("2a*a + 4bc = %d \n", m);
	printf("(a+b)/c = %f\n", e);
}