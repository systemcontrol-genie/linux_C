#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS // scanf error 
#pragma warning(disable:4996)

// scanf_s("%c", $value name, (int)sizeof(value name))
// 진법 출력 
void main()
{
	char ch1, ch2;
	printf("문자를 입력하고 Eenter>");
	scanf_s("%c", &ch1,1); //scanf_s("%c", &ch1,(int)sizeof(ch1)); 문자를 가변젇르로 변결할때 
	char a = getchar(); // 문자가 입력된것을 가져온다. 원하지 않는 자를 가져온다, visualstudio 에서만 생기는 문제 문자열 다중으로 받아올떄 getchar()를 사용 하여 출력을 해야한다. 
	printf("문자를 입력하고 Eenter>");
	scanf_s("%c", &ch2,1);
	printf("입력된 문자는 : %c, %c\n", ch1, ch2);
}