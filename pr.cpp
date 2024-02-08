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
    printf("1. 음료수 사기 \n");
    printf("2. 과자 사기 \n");
    printf("3. 종료 \n");
    printf("##################\n");
    printf("선택지를 골라주세요: ");
    scanf_s("%d", &choice_1);
    switch (choice_1) {
    case 1:
        buy_drink();
        break;
    case 2:
        buy_snack();
        break;
    case 3:
        exit(0); // 프로그램 종료
        break;
    default:
        printf("잘못된 입력입니다. 다시 선택해주세요.\n");
    }
}

void buy_drink() {
    int choice;
    int s = 2000;
    int c = 3000;
    printf("##################\n");
    printf("1. 사이다 2000원\n");
    printf("2. 콜라 3000원\n");
    printf("3. 첫화면으로 돌아가기\n");
    printf("##################\n");
    printf("선택지를 골라주세요: ");
    scanf_s("%d", &choice);
    switch (choice) {
    case 1:
        printf("사이다 %d원 구매하셨습니다\n", s);
        extra_event();
        cost += s;
        break;
    case 2:
        printf("콜라 %d원 구매하셨습니다\n", c);
        cost += c;
        extra_event();
        break;
    case 3:
        return;
    default:
        printf("잘못된 입력입니다.\n");
    }
}

void buy_snack() {
    int choice;
    printf("##################\n");
    int pop = 1000;
    int chco = 2000;
    printf("1. 팝콘 %d원\n", pop);
    printf("2. 초콜릿 %d원\n", chco);
    printf("3. 첫화면으로 돌아가기\n");
    printf("##################\n");
    printf("선택지를 골라주세요: ");
    scanf_s("%d", &choice);
    switch (choice) {
    case 1:
        printf("팝콘 %d원 구매하셨습니다\n", pop);
        cost += pop;
        extra_event();
        break;
    case 2:
        printf("팝콘 %d원 구매하셨습니다\n", chco);
        cost += chco;
        extra_event();
        break;
    case 3:
        return;
    default:
        printf("잘못된 입력입니다.\n");
    }
}

void extra_event() {
    int a = rand() % 4; // 0~3 사이의 난수 생성
    if (a == 1) {
        printf("<<<<<<<<이벤트 당첨 : 하나 더!!>>>>>>>>>\n");
    }
}