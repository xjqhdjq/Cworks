#include <stdio.h>
#include <stdlib.h>

int main() {
	//���ĺ� �빮�� 26���� ����
	char* cp;
	int i;

	cp = (char*)malloc(sizeof(char) * 50);
	if (cp == NULL) {  //���� ó��(�ʼ�)
		printf("���� �޸� �Ҵ翡 �����߽��ϴ�.\n");
		exit(1);  //��� ����
	}

	for (i = 0; i < 26; i++) {
		*(cp + i) = 'A' + i;
	}
	//printf("%d", i);   //26
	*(cp + i) = '\0';
	printf("%s", cp);  //���ڿ� ���

	free(cp);

	return 0;
}