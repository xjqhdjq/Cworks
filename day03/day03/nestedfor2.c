#include <stdio.h>

int main() {
	//��ø for
	/*
	1 2 3 4 5
	6 7 8 9 10
	11 12 13 14 15
	16 17 18 19 20
	21 22 23 24 25
	*/

	int i, j, num;
	for (i = 0; i < 5; i++) {
		for (j = 1; j < 6; j++) {
			num = i * 5 + j;
			printf("%d ", num);
		}
		printf("\n");
	}
	return 0;
}