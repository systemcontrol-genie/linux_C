#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS // scanf error 
#pragma warning(disable:4996)
void main()
{
	int i;
	printf("숫자를 입력해주세요>");
	scanf("%d\n", &i);
	
	do
	{
		printf("%d\n", i);
		i -= 2;
	} while (i >=10);
}