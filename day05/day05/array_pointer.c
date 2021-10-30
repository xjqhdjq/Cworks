#include <stdio.h>

int main() {

	//배열 포인터 선언 및 사용

	int a[4] = { 1, 2,3,4 };
	int i;
	int* b;
	b = a;

	printf("==배열 출력==\n");
	for (i = 0; i < 4; i++) {
		printf("2%d\n", a[i]);
	}

	printf("a[0]의 값 : %d\n", a[0]);
	printf("a[0]의 값 : %d\n", *b);

	printf("==포인터 배열 b 출력==\n");
	for (i = 0; i < 4; i++) {
		printf("%2d\n", *(b+i));
	}

	return 0;
}