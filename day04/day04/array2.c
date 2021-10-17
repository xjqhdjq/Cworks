#include <stdio.h>

int main() {

	int arr[] = { 10, 20, 30, 40 };
	int i;
	int sum = 0;

	printf("arr[2] = %d \n", arr[2]);

	for (i = 0; i < 4; i++) {
		printf("arr[%d] = %3d  ", i, arr[i]);
	}
	

	for (i = 0; i < 4; i++) {
		sum += arr[i];
	}

	printf("\nÇÕ°è : %d \n", sum);

	return 0;
}