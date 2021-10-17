#include <stdio.h>


int ab10(int a, int b) {
	a *= 10;
	b *= 10;
}

int main() {

	int a, b;

	a = 1;
	b = 2;

	ab10(a, b);


	printf("a = %d b = %d", ab10('\0', a), ab10('\0', b));



	return 0;
}