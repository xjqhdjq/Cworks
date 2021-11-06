#include <stdio.h>
#define ADD(x,y)(x+y)
#define MUL(x,y)(x*y)

/*
int ADD(int x, int y) {
	return x + y;
}*/

int main() {

	int a = 10, b = 20;
	int result;

	printf(" a + b = %d \n", ADD(a, b));
	result = 30 / MUL(2,5);
	printf(" result = %d \n", result);

	return 0;
}