#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	FILE* fp;  //���� ��Ʈ�� ����
	fp = fopen("hello.txt", "w");   //���� ����, w- ������

	fputs("hello~ C!", fp);  //������ �Է�

	fclose(fp);          //���� �ݱ�

	return 0;
}