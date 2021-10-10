#include <stdio.h>

int main() {

	int blue = 1;
	int red = 2;
	int yellow;

	printf("교환 전 blue : %d red : %d \n", blue, red);

	yellow = red;
	red = blue;
	blue = yellow;
	
	printf("교환 후 blue : %d red : %d \n", blue, red);

	return 0;
}