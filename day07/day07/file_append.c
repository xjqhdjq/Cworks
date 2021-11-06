#include <stdio.h>

int main() {

	FILE* fout;
	
	fopen_s(&fout, "hello2.txt", "a");
	if (fout == NULL) {
		puts("파일을 생성할 수 없습니다");
		return -1;
	}

	fprintf(fout, "좋은 하루 되세요~\n");

	fclose(fout);

	return 0;
}