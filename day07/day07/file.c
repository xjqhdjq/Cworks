#include <stdio.h>

int main() {

	FILE* fp;
	char name[10];
	int kor, eng;  
	double avg;

	printf("�̸� �Է�");
	fscanf_s(stdin, "%s", name,sizeof(name));


	printf("���� ���� �Է�");
	fscanf_s(stdin, "%d", &kor);

	printf("���� ���� �Է�");
	fscanf_s(stdin, "%d", &eng);

	fopen_s(&fp, "score.txt", "w");
	if (fp == NULL) {
		puts("���� ���� �Ұ�");
		return -1;
	}

	avg = ((double)kor + (double)eng) / 2;
	fprintf(fp, "%s %d %d %3.1lf\n", name, kor, eng, avg); // ���Ͽ� |����
	fprintf(stdout, "%s %d %d %3.1lf\n", name, kor, eng, avg); // �ֿܼ� |����

	fclose(fp);

	return 0;
}
