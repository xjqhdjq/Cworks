#include <stdio.h>
int main() {

	int customerNum;  //���尴 ��
	int columnNum;     //���� ��
	int rowNum;       //���� ��(�� ��)
	int i, j, num;

	printf("���尴 �� �Է� : ");
	scanf_s("%d", &customerNum);

	printf("�¼� ���� �� �Է� : ");
	scanf_s("%d", &columnNum);

	//������ �������� ��� �� ���� ��
	//������ �������� �ʴ� ��� �� + 1
	//if ~ else
	if (customerNum % columnNum == 0) {
		rowNum = customerNum / columnNum;
	}
	else {//customerNum % columnNum != 0
		rowNum = customerNum / columnNum + 1;
	}

	//printf("%d���� ���� �ʿ��մϴ�.\n", rowNum);
	for (i = 0; i < rowNum; i++) {
		for (j = 1; j < columnNum + 1; j++) {
			num = i * columnNum + j;
			printf("�¼�%d ", num);
			if (num == customerNum)
				break;
		}
		printf("\n");
	}

	return 0;
}