#include <stdio.h>

int main() {

	int i = 0;
	int sum = 0;


	for (i = 1; i <= 10; i++) {
		sum += i;
	}

	printf("1~10�� : %d \n",sum);
	printf("i�ּ� : %p \n",&i);
	printf("sum�ּ� : %p \n",&sum);
	
	

	return 0;
}