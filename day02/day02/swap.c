#include <stdio.h>

int main() {

	int blue = 1;
	int red = 2;
	int yellow;

	printf("��ȯ �� blue : %d red : %d \n", blue, red);

	yellow = red;
	red = blue;
	blue = yellow;
	
	printf("��ȯ �� blue : %d red : %d \n", blue, red);

	return 0;
}