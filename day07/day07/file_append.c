#include <stdio.h>

int main() {

	FILE* fout;
	
	fopen_s(&fout, "hello2.txt", "a");
	if (fout == NULL) {
		puts("������ ������ �� �����ϴ�");
		return -1;
	}

	fprintf(fout, "���� �Ϸ� �Ǽ���~\n");

	fclose(fout);

	return 0;
}