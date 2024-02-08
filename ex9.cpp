#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS // scanf error 
#pragma warning(disable:4996)
void main()
{
	int y;
	printf("년도를 입력하고 ENTER>");
	scanf("%d", &y);
	if ((y % 4 == 0 && y % 100 == !0) || y % 400 == 0)
	{
		printf("%d 년은 윤년입니다.\n",y);
	}
	else
	{
		printf("%d 년은 평년입니다.\n",y);;
	}

}
