#include <stdio.h>

int main() {

	//5 명의 수학 영어 점수의 합계와 평균

	int arr[5][2]; // 학생 5명의 수학,영어 점수 배열로 선언했고
	int sumMath=0; //합계
	int sumEng=0; //합계
	int k = 0; // 수학,영어 나눠서 넣을려고 스위치 만듬
	int avg=0; //평균


	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 2; j++) {
			if (k == 0) {
				printf("%d번 학생의 수학 점수 입력 : ", i + 1);
				scanf_s("%d", &arr[i][j]);
				sumMath += arr[i][j];
				k = 1;
			}
			else {
				printf("%d번 학생의 영어 점수 입력 : ", i + 1);
				scanf_s("%d", &arr[i][j]);
				sumEng += arr[i][j];
			}
		}
		k = 0;
	}

	avg = (sumMath + sumEng) / 5;

	printf("수학 점수 합계는 : %d \n", sumMath);
	printf("영어 점수 합계는 : %d \n", sumEng);
	printf("평균은 : %d \n", avg);
	
	return 0;
}