#include <stdio.h>
#include <math.h>// �������ΰ��� ó�� �ϱ��� �ؼ� �߰�
#include <stdlib.h> // rand �Լ� ��� �ϱ����ؼ� �߰�
#include <time.h> // �ð��� ī��Ʈ seed �Լ� ���� ���ؼ� �߰� . ������ ������ �����ϰ� ����ϱ� ���ؼ� �߰�, �޽��� ���� ���� �ʱ�ȭ.
#define _CRT_SECURE_NO_WARNINGS // scanf error 
#pragma warning(disable:4996)
void main()
{
	/*int i;
	printf("�����Է��� ENTER>");
	scanf_s("%d", &i);
	printf("%d �� ���� =%d\n", i, abs(i));
	printf("pow(10,3) = %0.3f", pow(10.,3.0));

	*/
	srand(time(NULL));
	for (int i = 1; i <= 6; i++)
	{
		printf("%d\n", rand()%44+1);// 1~ 100 ���� ���� ���� ���� 75���� �ϰ� ������ %74+1 �ϐ� 1~ 75���� ���� �߻�����.
	}
}