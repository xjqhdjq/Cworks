#include <stdio.h>

int main() {

	/*
	int i, j;

	
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("°¡");
		}
		printf("\n");
	}

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("*");
		}
		printf("\n");
	}
	*/

	int i, j;

	for (i = 1; i < 8; i++) {

		for (j = 1; j <= i; j++) {
			printf("*");
		}printf("\n");
	}

	for (i = 8; i > 1; i--) {
		for(j = 1; j < i; j++) {
			printf("*");
		}printf("\n");
	}

	return 0;
}