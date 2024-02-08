#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void mainpage();
void buy_drink();
void buy_snack();
void extra_event();
int cost = 0;

int main(void) {
    srand(time(0));
    while (1) {
        mainpage();
    }
    return 0;
}

void mainpage() {
    int choice_1;
    printf("##################\n");
    printf("1. ����� ��� \n");
    printf("2. ���� ��� \n");
    printf("3. ���� \n");
    printf("##################\n");
    printf("�������� ����ּ���: ");
    scanf_s("%d", &choice_1);
    switch (choice_1) {
    case 1:
        buy_drink();
        break;
    case 2:
        buy_snack();
        break;
    case 3:
        exit(0); // ���α׷� ����
        break;
    default:
        printf("�߸��� �Է��Դϴ�. �ٽ� �������ּ���.\n");
    }
}

void buy_drink() {
    int choice;
    int s = 2000;
    int c = 3000;
    printf("##################\n");
    printf("1. ���̴� 2000��\n");
    printf("2. �ݶ� 3000��\n");
    printf("3. ùȭ������ ���ư���\n");
    printf("##################\n");
    printf("�������� ����ּ���: ");
    scanf_s("%d", &choice);
    switch (choice) {
    case 1:
        printf("���̴� %d�� �����ϼ̽��ϴ�\n", s);
        extra_event();
        cost += s;
        break;
    case 2:
        printf("�ݶ� %d�� �����ϼ̽��ϴ�\n", c);
        cost += c;
        extra_event();
        break;
    case 3:
        return;
    default:
        printf("�߸��� �Է��Դϴ�.\n");
    }
}

void buy_snack() {
    int choice;
    printf("##################\n");
    int pop = 1000;
    int chco = 2000;
    printf("1. ���� %d��\n", pop);
    printf("2. ���ݸ� %d��\n", chco);
    printf("3. ùȭ������ ���ư���\n");
    printf("##################\n");
    printf("�������� ����ּ���: ");
    scanf_s("%d", &choice);
    switch (choice) {
    case 1:
        printf("���� %d�� �����ϼ̽��ϴ�\n", pop);
        cost += pop;
        extra_event();
        break;
    case 2:
        printf("���� %d�� �����ϼ̽��ϴ�\n", chco);
        cost += chco;
        extra_event();
        break;
    case 3:
        return;
    default:
        printf("�߸��� �Է��Դϴ�.\n");
    }
}

void extra_event() {
    int a = rand() % 4; // 0~3 ������ ���� ����
    if (a == 1) {
        printf("<<<<<<<<�̺�Ʈ ��÷ : �ϳ� ��!!>>>>>>>>>\n");
    }
}