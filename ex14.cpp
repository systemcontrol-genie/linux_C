#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS // scanf error 
#pragma warning(disable:4996)

int main()
{
	char ch[10];
	char ch1[10];
	
	for (int i = 1; i <= 10; i++)
	{
		scanf("%c\n", &ch[i]);
		getchar();
		//printf("%c ", ch[i] - 32);
		ch1[i] = ch[i] - 32;
	}
	for (int i = 1; i <= 10; i++)
	{
		printf("%c", ch1[i]);
	}
	
	return 0;
}