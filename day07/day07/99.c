#include <stdio.h>

int main() {

	FILE* fout;
	int i, j;
	int sum = 0;

	fopen_s(&fout, "99.txt", "w");
	if (fout == NULL) {
		puts("������ ������ �� �����ϴ�");
		return -1;
	}

	//������

	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			fprintf(fout, "%d * %d = %d \n", i, j, i * j);
		}
		fprintf(fout,"\n");
	}


	fclose(fout);

	return 0;
}