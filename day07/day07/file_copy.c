#include <stdio.h>

int main() {

	FILE* fin;
	FILE* fout;
	int ch = 1;


	fopen_s(&fin, "99.txt", "r");
	fopen_s(&fout, "992.txt", "w");

	if (fin == NULL) {
		puts("���� �б� ����");
		return -1;
	}
	
	if (fout == NULL) {
		puts("���� ���� ����");
		return -1;
	}

	puts("���Ͽ� ������ �Է�");
	
	while ((ch = fgetc(fin)) != EOF) {
		fputc(ch, fout);
	}
	

	fclose(fin);
	fclose(fout);

	return 0;
}