#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS // scanf error 
#pragma warning(disable:4996)
int main(void)
{
	int koera[4], i, sum = 0;
	for (i = 1; i <= 4; i++)
	{
		printf("%d ��° ������ �Է�: ", i);
		scanf("%d", &koera[i]);
		sum += koera[i];
		printf("�Էµ� ������: %d\n", koera[i]);
	}
	printf("�հ�: %d\n", sum);
	return 0;
}