#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS // scanf error 
#pragma warning(disable:4996)
// 진법 출력 
void main()
{
	double a, b;
	printf("실수를 입력하고 Enter>");
	scanf_s("%lf", &a);
	printf("실수를 입력하고 Enter>");
	scanf_s("%lf", &b);
	printf("%.1f + %lf = %10.2lf\n", a,b,a + b); //%10.2f 공간을 칸을 확보한는것  
	printf("%.1f + %lf = %10.2lf\n", a, b, a - b);
	printf("%.1f + %lf = %10.2lf\n", a, b, a * b);
	printf("%.1f + %lf = %10.2lf\n", a, b, a / b);
}