#include <stdio.h>

int main() {

	//5 ���� ���� ���� ������ �հ�� ���

	int arr[5][2]; // �л� 5���� ����,���� ���� �迭�� �����߰�
	int sumMath=0; //�հ�
	int sumEng=0; //�հ�
	int k = 0; // ����,���� ������ �������� ����ġ ����
	int avg=0; //���


	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 2; j++) {
			if (k == 0) {
				printf("%d�� �л��� ���� ���� �Է� : ", i + 1);
				scanf_s("%d", &arr[i][j]);
				sumMath += arr[i][j];
				k = 1;
			}
			else {
				printf("%d�� �л��� ���� ���� �Է� : ", i + 1);
				scanf_s("%d", &arr[i][j]);
				sumEng += arr[i][j];
			}
		}
		k = 0;
	}

	avg = (sumMath + sumEng) / 5;

	printf("���� ���� �հ�� : %d \n", sumMath);
	printf("���� ���� �հ�� : %d \n", sumEng);
	printf("����� : %d \n", avg);
	
	return 0;
}