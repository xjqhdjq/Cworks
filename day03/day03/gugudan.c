#include <stdio.h>

int main() {

	int n;

	printf(" ´Ü  : ");
	scanf_s("%d", &n);

	for (int i = n; i <= n; i++) {
		for (int j = 1; j <= 9; j++) {
			printf("%d * %d = %d \n", i, j, i * j);
		}
	}




	return 0;
}