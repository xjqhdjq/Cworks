#include <stdio.h>

int main() {

	int i = 0;
	int sum = 0;


	for (i = 1; i <= 10; i++) {
		sum += i;
	}

	printf("1~10합 : %d \n",sum);
	printf("i주소 : %p \n",&i);
	printf("sum주소 : %p \n",&sum);
	
	

	return 0;
}