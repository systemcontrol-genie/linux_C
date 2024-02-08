#include<stdio.h>
#include <stdlib.h> 
#include <time.h> 
#define _CRT_SECURE_NO_WARNINGS // scanf error 
#pragma warning(disable:4996)
int l, num1, num2;
int n = 0;
int f = 0;
void q(int i, int num1, int num2)
{
	printf("====== %d 번째 비밀번호 ======\n", i);
	printf("%d x %d  = ?\n", num1, num2);
	printf("==============================\n");
	scanf("%d", &l);
}


void main()
{
	srand(time(NULL));
	for (int i = 1; i<=10 ; i++)
	{

		num1 = rand() % 44 + 1;
		num2 = rand() % 44 + 1;
		q(i, num1, num2);
		if (l == -1)
		{
			break;
		}
		else
		{
			if (num1 * num2 == l)
			{
				printf("정답입니다.\n");
				n++;
			}
			else
			{
				printf("틀렸습니다.\n");
				f++;
			}
			printf("맞힌 갯수: %d, 틀린 갯수 : %d\n", n, f);
		}
	}

	

}