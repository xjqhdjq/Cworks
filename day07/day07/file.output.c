#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS_GLOBALS

int main() {

	FILE* fp;
	fopen_s(&fp, "hello.txt", "w");

	fputc('H', fp);
	fputc('E', fp);
	fputc('L', fp);
	fputc('L', fp);
	fputc('O', fp);
	fputc('\n', fp);

	fclose(fp);


	return 0;
}
