#include <stdio.h>

int main() {

	//�迭 ������ ���� �� ���

	int a[4] = { 1, 2,3,4 };
	int i;
	int* b;
	b = a;

	printf("==�迭 ���==\n");
	for (i = 0; i < 4; i++) {
		printf("2%d\n", a[i]);
	}

	printf("a[0]�� �� : %d\n", a[0]);
	printf("a[0]�� �� : %d\n", *b);

	printf("==������ �迭 b ���==\n");
	for (i = 0; i < 4; i++) {
		printf("%2d\n", *(b+i));
	}

	return 0;
}