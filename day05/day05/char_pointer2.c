#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	char a[10];
	char* b;

	printf("문자를 입력하세요 : ");
	scanf("%s", a);

	b = &a;

	printf("%s", b);

	return 0;
}