#include <stdio.h>
int main() {

	int customerNum; //���尴 ��
	int columNum;    //���� ��
	int rowNum;      //���� �� (�� ��)
	int i, j, num;


	printf("���尴 �� �Է� : ");
	scanf_s("%d", &customerNum);

	printf("�¼� ���� �� �Է� : ");
	scanf_s("%d", &columNum);

	// ������ �������� ��� �� ���� ��
	if (customerNum % columNum == 0) {
		rowNum = customerNum / columNum;
	}
	else {
		rowNum = customerNum / columNum + 1;
	}

	for (i = 0; i < rowNum; i++) {
		for (j = 1; j < columNum + 1; j++) {
			num = i * columNum + j;
			printf("%3d", num);
			if (num >= customerNum) {
				break;
			}
		}
		printf("\n");
	}

	return 0;
}