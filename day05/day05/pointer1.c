#include <stdio.h>

int main() {
	char ch = 'J';

	char* cp;

	cp = &ch; // �����Ϳ� ch �ּ� ����

	printf("%x %c \n", cp, *cp);
	printf("%d %d", cp, *cp);



}