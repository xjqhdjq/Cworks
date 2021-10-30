#include <stdio.h>

void sayHello(char name[]) {
	printf("Hello~ %s\n", name);
}


void sayHello2(char* name) {
	printf("Hello~ %s\n", name);
}

int main() {

	sayHello("sunny");
	sayHello2("hyunsoo");


	return 0;
}