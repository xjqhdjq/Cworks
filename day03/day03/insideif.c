#include <stdio.h>
#define _CRT_SECURET_NO_WARNINGS

int main() {

	//수가 10이상 짝수인경우
	//수가 10이상 홀수인경우
	//수가 10보다 작고 짝수인경우
	//수가 10보다 작은 홀수

	int i;
	for (int j = 1; j = 100; j++) {
		printf("수 입력 : ");
		scanf_s("%d", &i);

		/*
		if (i >= 10) {
			if (i % 2 == 0) {
				printf("수가 10이상인 짝수.");
			}
			else {
				printf("수가 10이상인 홀수.");
			}

		}
		else if (i < 10) {
			if (i % 2 == 0) {
				printf("수가 10미만인 짝수.");
			}
			else {
				printf("수가 10미만인 홀수.");
			}
		}
		*/

		if (i >= 10 && i % 2 == 0) {
			printf("%d는 10 이상인 짝수 \n", i);
		}
		else if (i >= 10 && i % 2 != 0) {
			printf("%d는 10 이상인 홀수 \n", i);
		}

		else if (i < 10 && i % 2 == 0) {
			printf("%d는 10 미만인 짝수 \n", i);
		}
		else if (i < 10 && i % 2 != 0) {
			printf("%d는 10 미만인 홀수 \n", i);
		}
		else {
			printf("수를 입력하세요.");
			continue;
		}

	}

	return 0;
}