#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS // scanf error 
#pragma warning(disable:4996)
int main(void)
{
	int koera[4], i, sum = 0;
	for (i = 1; i <= 4; i++)
	{
		printf("%d 번째 득점수 입력: ", i);
		scanf("%d", &koera[i]);
		sum += koera[i];
		printf("입력된 데이터: %d\n", koera[i]);
	}
	printf("합계: %d\n", sum);
	return 0;
}