#include <stdio.h>

int main() {

	//����

	int score;
	char point;


	printf("���� ���α׷� \n");
	
	printf("�� �� �����̳���? : ");
	scanf_s("%d", &score);


	if (score >= 90) {
		point = 'A';
	}
	else if (90 > score >= 80) {
		point = 'B';
	}
	else if (80 > score >= 70) {
		point = 'C';
	}
	else if (70 > score >= 60) {
		point = 'D';
	}
	else if (score < 60) {
		point = 'F';
	}printf("%c���� �Դϴ�. \n", point);

	



	return 0;
}