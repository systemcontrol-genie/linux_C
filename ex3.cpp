#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS // scanf error 
#pragma warning(disable:4996)

void main()
{
	int a, b;
	printf("10진 정수를 입력하고 Enter>");
	scanf_s("%d", &a);
	printf("10진 정수를 입력하고 Enter>");
	scanf_s("%d", &b);
	printf("a+b= %d\n", a + b);
	printf("a-b= %d\n", a - b);
	printf("a*b= %d\n", a * b);
	printf("a/b= %d\n", a / b);

}
