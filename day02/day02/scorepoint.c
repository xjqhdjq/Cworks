#include <stdio.h>

int main() {

	//학점

	int score;
	char point;


	printf("학점 프로그램 \n");
	
	printf("몇 점 맞으셨나요? : ");
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
	}printf("%c학점 입니다. \n", point);

	



	return 0;
}