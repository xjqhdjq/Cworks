#include <stdio.h>

int main() {


	//1���� n���� ���ϱ�

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

	printf("����? %d",sum);

	return 0;
}