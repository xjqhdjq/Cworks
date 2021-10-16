#include <stdio.h>

int main() {

	int arr[5];

	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 0;
	arr[4] = 50;

	printf("%d\n", arr[0]); 

	for (int i = 0; i < 3; i++) {
		printf("%d\n", arr[i]);
	}

	return 0;
}