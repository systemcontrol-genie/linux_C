#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS // scanf error 
#pragma warning(disable:4996)

int main()
{
	char str[10];
	printf("문자열을 입력후 Enter>");
	scanf("%s", str);
	printf("입력된문자열 : %s \n", str);
	printf("str[7] = %c\n", str[7]);
	return 0;
}