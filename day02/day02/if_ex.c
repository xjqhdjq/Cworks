#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS


int main() {

	int age = 7;

	if (age < 8) {
		printf("학교에 가지 않습니다. \n");
	}
	else {
		printf("학교에 갑니다. \n");
	}
	
	printf("나이는 %d세 입니다.\n", age);


	printf("================= \n");

	int score = 70;
	if (score >= 60) {
		printf("합격입니다. \n");
	}
	else {
		printf("불합격입니다. \n");
	}

	printf("점수는 %d점 입니다. \n", score);

	printf("================= \n");

	printf("홀 짝 판정 \n");

	unsigned int num;

	printf("정수를 입력하세요");
	scanf_s("%d", &num);

	if (num%2 == 0) {
		printf("입력하신 %d는 짝수입니다.", num);
	}
	else {
		printf("입력하신 %d는 홀수입니다.", num);
	}

	return 0;
}