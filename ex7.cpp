#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS // scanf error 
#pragma warning(disable:4996)

void main()
{
	int a;
	double x;
	printf("������ �Ǽ��� �Է��ϰ� Eenter>");
	scanf_s("%d %lf", &a, &x);
	printf("�Էµ� ����:  %d\n", a);
	printf("�Էµ� �Ǽ�:  %lf\n", x);
}