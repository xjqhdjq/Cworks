#include <stdio.h>

int main() {

	int i = 0;
	int sum = 0;


	for (i = 1; i <= 10; i++) {
		sum += i;
	}

	printf("1~10钦 : %d \n",sum);
	printf("i林家 : %p \n",&i);
	printf("sum林家 : %p \n",&sum);
	
	

	return 0;
}