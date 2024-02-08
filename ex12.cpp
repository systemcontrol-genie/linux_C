#include <stdio.h>
#include <math.h>// 수학적인것을 처리 하깅위 해서 추가
#include <stdlib.h> // rand 함수 사용 하기위해서 추가
#include <time.h> // 시간을 카운트 seed 함수 생성 위해서 추가 . 임의의 값으로 랜덤하게 출력하기 위해서 추가, 메실행 마다 난수 초기화.
#define _CRT_SECURE_NO_WARNINGS // scanf error 
#pragma warning(disable:4996)
void main()
{
	/*int i;
	printf("숫자입력후 ENTER>");
	scanf_s("%d", &i);
	printf("%d 의 절댓값 =%d\n", i, abs(i));
	printf("pow(10,3) = %0.3f", pow(10.,3.0));

	*/
	srand(time(NULL));
	for (int i = 1; i <= 6; i++)
	{
		printf("%d\n", rand()%44+1);// 1~ 100 까지 숫자 난수 생성 75까지 하고 싶으면 %74+1 하먄 1~ 75까지 난수 발생가능.
	}
}