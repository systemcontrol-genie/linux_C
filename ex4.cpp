#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS // scanf error 
#pragma warning(disable:4996)
// ���� ��� 
void main()
{
	int a, b;
	printf("10�� ������ �Է��ϰ� Enter>");
	scanf_s("%x", &a);
	printf("10�� ������ �Է��ϰ� Enter>");
	scanf_s("%x", &b);
	printf("���� a��(8����) : %o\n", a);
	printf("���� a��(10����) : %d\n", a);
	printf("���� a��(16����) : %x\n", a);
	printf("���� a��(8����) : %o\n", b);
	printf("���� a��(10����) : %d\n", b);
	printf("���� a��(16����) : %x\n", b);
	printf("���� a+b��(8����) : %o\n", a+b);
	printf("���� a+b��(16����) : %x\n", a + b);

}