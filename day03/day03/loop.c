#include <stdio.h>

int main() {
	

	// 1부터 더했을 때 그 합이 100이 넘는 자연수

	int n = 0;
	int sum = 0;


	while (1) {

		n++;
		sum += n;

		if (sum > 100) {
			break;
		}
	}

	printf("%d \n", n);
	printf("%d ", sum);


	/*
	int n = 0;

	while (1) {
		n++;
		printf("%d \n", n);


		if (n == 10) 
			break; // 조건문 1줄안에 끝나면 중괄호 {} 생략 가능. //코드 간결해보임
		
	}
	*/

	return 0;
}