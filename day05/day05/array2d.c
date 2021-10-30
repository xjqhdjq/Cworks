#include <stdio.h>

int main()
{

	// 학생 3 명의 수학과 영어점수\
	
	int a[3][2];


	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			if (i == j) {
				printf("%d번 학생의 수학 점수 입력:", i + 1);
				scanf_s("%d", &a[i][j]);
			}
			else {
				printf("%d번 학생의 영어 점수 입력:", i + 1);
				scanf_s("%d", &a[i][j]);
			}
		}

	}


	for (int s = 0; s < 3; s++) {
		for (int k = 0; k < 2; k++) {
			if (s == k) {
				printf("%d번 학생의 수학 점수 : %d \n", s + 1, a[s][k]);
			}
			else {
				printf("%d번 학생의 영어 점수 : %d \n", s + 1, a[s][k]);
			}
		}
	}


	return 0;
}