#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS // scanf error 
#pragma warning(disable:4996)

void first()
{
	printf("==========서비스를 선택해주세요 ==========\n");
	printf("1. \n");
	printf("2. \n");
	printf("3. \n");
	printf("==========================================\n");
}
void second()
{
	printf("========== 상품을 선택해주세요 ==========\n");
	printf("\n");
	printf("==========================================\n");
}
void second1()
{
	printf("========== 상품을 선택해주세요 ==========\n");
	printf("\n");
	printf("==========================================\n");
}
void second2()
{
	printf("========== 상품을 선택해주세요 ==========\n");
	printf("\n");
	printf("==========================================\n");
}
void end()
{
	printf("선택하신 상품은 : ~ 가격은 %d 입니다.\n");
	printf("%d. 다른 상품 보러가기\n");
	printf("%d. 상품구매 종료\n");
	printf("==========================================\n");
}

int main()
{
	first();
}