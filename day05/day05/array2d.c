#include <stdio.h>

int main()
{

	// �л� 3 ���� ���а� ��������\
	
	int a[3][2];


	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			if (i == j) {
				printf("%d�� �л��� ���� ���� �Է�:", i + 1);
				scanf_s("%d", &a[i][j]);
			}
			else {
				printf("%d�� �л��� ���� ���� �Է�:", i + 1);
				scanf_s("%d", &a[i][j]);
			}
		}

	}


	for (int s = 0; s < 3; s++) {
		for (int k = 0; k < 2; k++) {
			if (s == k) {
				printf("%d�� �л��� ���� ���� : %d \n", s + 1, a[s][k]);
			}
			else {
				printf("%d�� �л��� ���� ���� : %d \n", s + 1, a[s][k]);
			}
		}
	}


	return 0;
}