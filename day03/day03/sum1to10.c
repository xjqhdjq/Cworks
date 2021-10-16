#include <stdio.h>

int main() {


	//1부터 n까지 더하기

	int n;
	int sum = 0;

	printf(" n : ");
	scanf_s("%d", &n);

	/*for (int i = 1; i = n; i++) {
		
		sum += i;

	}*/

	while (n > 0) {
		sum += n;
		n--;
	}

	printf("합은? %d",sum);

	return 0;
}