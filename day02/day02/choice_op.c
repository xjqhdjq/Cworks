#include <stdio.h>

int main() {

	int value;
	value = (3 > 4) ? 10 : 20;
	printf("%d \n", value);


	int fA = 35;
	int mA = 39;

	char ch = (fA > mA) ? "Fr" : "M";

	printf("���̸��� �θ�� %c�̸� ���̴�", ch);

	return 0;
}