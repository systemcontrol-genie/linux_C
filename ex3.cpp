#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS // scanf error 
#pragma warning(disable:4996)

void main()
{
	int a, b;
	printf("10�� ������ �Է��ϰ� Enter>");
	scanf_s("%d", &a);
	printf("10�� ������ �Է��ϰ� Enter>");
	scanf_s("%d", &b);
	printf("a+b= %d\n", a + b);
	printf("a-b= %d\n", a - b);
	printf("a*b= %d\n", a * b);
	printf("a/b= %d\n", a / b);

}
