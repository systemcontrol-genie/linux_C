#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS // scanf error 
#pragma warning(disable:4996)

// scanf_s("%c", $value name, (int)sizeof(value name))
// ���� ��� 
void main()
{
	char ch1, ch2;
	printf("���ڸ� �Է��ϰ� Eenter>");
	scanf_s("%c", &ch1,1); //scanf_s("%c", &ch1,(int)sizeof(ch1)); ���ڸ� ���������� �����Ҷ� 
	char a = getchar(); // ���ڰ� �ԷµȰ��� �����´�. ������ �ʴ� �ڸ� �����´�, visualstudio ������ ����� ���� ���ڿ� �������� �޾ƿË� getchar()�� ��� �Ͽ� ����� �ؾ��Ѵ�. 
	printf("���ڸ� �Է��ϰ� Eenter>");
	scanf_s("%c", &ch2,1);
	printf("�Էµ� ���ڴ� : %c, %c\n", ch1, ch2);
}