#include <stdio.h>

#define _CRT_SECURE_NO_WARNINGS

int main() {

	int sw = 1; //����ġ ���� �̰ɷ� ���α׷� ���� ���� ��Ʈ�� �ϴ� ��
	int balance = 0; //�ܰ�
	
	while (sw) {

	int selNo ;
	int money ;
	printf("======================== \n");
	printf("1.���� | 2.��� | 3.�ܰ� | 4.���� \n");
	printf("======================== \n");
	printf("���� > :");
	scanf_s("%d", &selNo);

	if (selNo == 1) {
		printf("���ݾ�> ");
		scanf_s("%d", &money);
		balance += money;
	}
	else if (selNo == 2) {
		printf("��ݾ�> ");
		scanf_s("%d", &money);
		
		

		if (balance - money > 0) {
			balance -= money;
		}
		else if (balance - money < 0) 
			printf("�ܰ� �����մϴ�. \n");
		
	}
	else if (selNo == 3) {
		printf("�ܰ�> %d \n", balance);
	}
	else if (selNo == 4) {
		sw = 0;
		break;
	}
	else {
		printf("�������� �ʴ� ����Դϴ�. \n");
	}
	
	

	}
	printf("���α׷� ����");
	return 0;
}