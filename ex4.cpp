#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS // scanf error 
#pragma warning(disable:4996)
// 진법 출력 
void main()
{
	int a, b;
	printf("10진 정수를 입력하고 Enter>");
	scanf_s("%x", &a);
	printf("10진 정수를 입력하고 Enter>");
	scanf_s("%x", &b);
	printf("변수 a값(8진수) : %o\n", a);
	printf("변수 a값(10진수) : %d\n", a);
	printf("변수 a값(16진수) : %x\n", a);
	printf("변수 a값(8진수) : %o\n", b);
	printf("변수 a값(10진수) : %d\n", b);
	printf("변수 a값(16진수) : %x\n", b);
	printf("변수 a+b값(8진수) : %o\n", a+b);
	printf("변수 a+b값(16진수) : %x\n", a + b);

}