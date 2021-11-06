#include <stdio.h>

int main() {

	FILE* fout;
	int i = 0;
	
	fopen_s(&fout, "Ascii.txt", "wt");
	if (fout == NULL) {
		puts("파일을 생성할 수 없습니다.");
		return -1;
	}


	puts("ASCII 테이블 작성");
	for (i = 1; i < 128; i++) {

		if (i % 10 == 0) {
			fputc('\n',fout);
		}
		fputc(i, fout);
		fputc('\t', fout);

	}


	fclose(fout);

	return 0;
}