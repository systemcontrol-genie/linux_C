#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS // scanf error 
#pragma warning(disable:4996)

int main()
{
	char str[10];
	printf("���ڿ��� �Է��� Enter>");
	scanf("%s", str);
	printf("�Էµȹ��ڿ� : %s \n", str);
	printf("str[7] = %c\n", str[7]);
	return 0;
}