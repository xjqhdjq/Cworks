#include <stdio.h>
int main() {

	int customerNum; //입장객 수
	int columNum;    //열의 수
	int rowNum;      //행의 수 (줄 수)
	int i, j, num;


	printf("입장객 수 입력 : ");
	scanf_s("%d", &customerNum);

	printf("좌석 열의 수 입력 : ");
	scanf_s("%d", &columNum);

	// 나누어 떨어지는 경우 줄 수는 몫
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