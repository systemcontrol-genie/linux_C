#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS // scanf error 
#pragma warning(disable:4996)
void main()
{
	int y;
	printf("�⵵�� �Է��ϰ� ENTER>");
	scanf("%d", &y);
	if ((y % 4 == 0 && y % 100 == !0) || y % 400 == 0)
	{
		printf("%d ���� �����Դϴ�.\n",y);
	}
	else
	{
		printf("%d ���� ����Դϴ�.\n",y);;
	}

}
