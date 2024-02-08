#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS // scanf error 
#pragma warning(disable:4996)
void main()
{
	int a, b;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	printf("a+b= %d", a + b);
}
