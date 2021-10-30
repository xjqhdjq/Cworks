#include <stdio.h>

int main() {
	char ch = 'J';

	char* cp;

	cp = &ch; // 포인터에 ch 주소 저장

	printf("%x %c \n", cp, *cp);
	printf("%d %d", cp, *cp);



}