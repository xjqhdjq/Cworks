#include <stdio.h>

#define _CRT_SECURE_NO_WARNINGS

int main() {

	int sw = 1; //스위치 변수 이걸로 프로그램 시작 종료 컨트롤 하는 듯
	int balance = 0; //잔고
	
	while (sw) {

	int selNo ;
	int money ;
	printf("======================== \n");
	printf("1.예금 | 2.출금 | 3.잔고 | 4.종료 \n");
	printf("======================== \n");
	printf("선택 > :");
	scanf_s("%d", &selNo);

	if (selNo == 1) {
		printf("예금액> ");
		scanf_s("%d", &money);
		balance += money;
	}
	else if (selNo == 2) {
		printf("출금액> ");
		scanf_s("%d", &money);
		
		

		if (balance - money > 0) {
			balance -= money;
		}
		else if (balance - money < 0) 
			printf("잔고가 부족합니다. \n");
		
	}
	else if (selNo == 3) {
		printf("잔고> %d \n", balance);
	}
	else if (selNo == 4) {
		sw = 0;
		break;
	}
	else {
		printf("지원되지 않는 기능입니다. \n");
	}
	
	

	}
	printf("프로그램 종료");
	return 0;
}