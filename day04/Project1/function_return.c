#include <stdio.h>

int square(int);
int add(int, int);

int main() {

	int result = square(3);
	int result2 = add(4,5);



	printf("%d \n", result);
	printf("%d \n", result2);

	return 0;
}


// ������ ���ϴ� �Լ� -

int square(int x) {

	return x * x;
}

int add(int x, int y) {
	return x * y;
}