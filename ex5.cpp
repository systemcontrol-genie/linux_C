#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS // scanf error 
#pragma warning(disable:4996)
// ���� ��� 
void main()
{
	double a, b;
	printf("�Ǽ��� �Է��ϰ� Enter>");
	scanf_s("%lf", &a);
	printf("�Ǽ��� �Է��ϰ� Enter>");
	scanf_s("%lf", &b);
	printf("%.1f + %lf = %10.2lf\n", a,b,a + b); //%10.2f ������ ĭ�� Ȯ���Ѵ°�  
	printf("%.1f + %lf = %10.2lf\n", a, b, a - b);
	printf("%.1f + %lf = %10.2lf\n", a, b, a * b);
	printf("%.1f + %lf = %10.2lf\n", a, b, a / b);
}