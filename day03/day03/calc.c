#include <stdio.h>

int main() {

	// operator (������) ���� + - * / �� ��� ��Ģ����

	int num1 = 10;
	int num2 = 2;
	char operator;
	int result;

	printf("(+,-,*,/)�� ������ �Է� : ");
	scanf_s("%c", &operator);

	if (operator == '+') {
		result = num1 + num2;
	}
	else if (operator == '-') {
		result = num1 - num2;
	}
	else if (operator == '*') {
		result = num1 * num2;
	}
	else if (operator == '/') {
		result = num1 / num2;
	}
	else {
		printf("������ �����Դϴ�.");
	}
	
	printf("����� %d�Դϴ�.", result);

	return 0;
}