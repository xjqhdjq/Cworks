#include <stdio.h>

int main() {

	//�迭 ���� 

	char a1[] = "TEN";
	char a2[4];
	int i;

	// a1�� a2�� ����

	for (i = 0; i < 5; i++) {
		a2[i] = a1[i];
	}

	printf("a2 %s \n", a2);

	//a1�� a2�� �Ųٷ� ���� NET�� ���;���

	for (i = 0; i < 5; i++) {
		
		a1[i] = a2[2-i];
	}
	a1[3] = '\0';

	printf("a1 %s \n", a1);

	return 0;
}