#include <stdio.h>
#define _CRT_SECURET_NO_WARNINGS

int main() {

	//���� 10�̻� ¦���ΰ��
	//���� 10�̻� Ȧ���ΰ��
	//���� 10���� �۰� ¦���ΰ��
	//���� 10���� ���� Ȧ��

	int i;
	for (int j = 1; j = 100; j++) {
		printf("�� �Է� : ");
		scanf_s("%d", &i);

		/*
		if (i >= 10) {
			if (i % 2 == 0) {
				printf("���� 10�̻��� ¦��.");
			}
			else {
				printf("���� 10�̻��� Ȧ��.");
			}

		}
		else if (i < 10) {
			if (i % 2 == 0) {
				printf("���� 10�̸��� ¦��.");
			}
			else {
				printf("���� 10�̸��� Ȧ��.");
			}
		}
		*/

		if (i >= 10 && i % 2 == 0) {
			printf("%d�� 10 �̻��� ¦�� \n", i);
		}
		else if (i >= 10 && i % 2 != 0) {
			printf("%d�� 10 �̻��� Ȧ�� \n", i);
		}

		else if (i < 10 && i % 2 == 0) {
			printf("%d�� 10 �̸��� ¦�� \n", i);
		}
		else if (i < 10 && i % 2 != 0) {
			printf("%d�� 10 �̸��� Ȧ�� \n", i);
		}
		else {
			printf("���� �Է��ϼ���.");
			continue;
		}

	}

	return 0;
}