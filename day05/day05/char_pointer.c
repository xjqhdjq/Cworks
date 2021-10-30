#include <stdio.h>

int main() {

	char a = 'A';
	printf("%c\n", a);

	char* b = &a;

	printf("포인터 b가 가리키는 값은 : %c \n", *b);

	

	return 0;
}