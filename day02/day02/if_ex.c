#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS


int main() {

	int age = 7;

	if (age < 8) {
		printf("�б��� ���� �ʽ��ϴ�. \n");
	}
	else {
		printf("�б��� ���ϴ�. \n");
	}
	
	printf("���̴� %d�� �Դϴ�.\n", age);


	printf("================= \n");

	int score = 70;
	if (score >= 60) {
		printf("�հ��Դϴ�. \n");
	}
	else {
		printf("���հ��Դϴ�. \n");
	}

	printf("������ %d�� �Դϴ�. \n", score);

	printf("================= \n");

	printf("Ȧ ¦ ���� \n");

	unsigned int num;

	printf("������ �Է��ϼ���");
	scanf_s("%d", &num);

	if (num%2 == 0) {
		printf("�Է��Ͻ� %d�� ¦���Դϴ�.", num);
	}
	else {
		printf("�Է��Ͻ� %d�� Ȧ���Դϴ�.", num);
	}

	return 0;
}