#include <stdio.h>

int main() {
	int value = myAbs(-4);

	printf("%d \n", value);
	printf("%d \n", value);
	
	return 0;


}

int myAbs(int x){
	if (x < 0) {
		x = -x;
	}
	else {
		return x;
	}
}

