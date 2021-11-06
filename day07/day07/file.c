#include <stdio.h>

int main() {

	FILE* fp;
	char name[10];
	int kor, eng;  
	double avg;

	printf("이름 입력");
	fscanf_s(stdin, "%s", name,sizeof(name));


	printf("국어 점수 입력");
	fscanf_s(stdin, "%d", &kor);

	printf("영어 점수 입력");
	fscanf_s(stdin, "%d", &eng);

	fopen_s(&fp, "score.txt", "w");
	if (fp == NULL) {
		puts("파일 생성 불가");
		return -1;
	}

	avg = ((double)kor + (double)eng) / 2;
	fprintf(fp, "%s %d %d %3.1lf\n", name, kor, eng, avg); // 파일에 |쓰기
	fprintf(stdout, "%s %d %d %3.1lf\n", name, kor, eng, avg); // 콘솔에 |쓰기

	fclose(fp);

	return 0;
}
