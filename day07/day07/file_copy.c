#include <stdio.h>

int main() {

	FILE* fin;
	FILE* fout;
	int ch = 1;


	fopen_s(&fin, "99.txt", "r");
	fopen_s(&fout, "992.txt", "w");

	if (fin == NULL) {
		puts("파일 읽기 실패");
		return -1;
	}
	
	if (fout == NULL) {
		puts("파일 생성 실패");
		return -1;
	}

	puts("파일에 데이터 입력");
	
	while ((ch = fgetc(fin)) != EOF) {
		fputc(ch, fout);
	}
	

	fclose(fin);
	fclose(fout);

	return 0;
}