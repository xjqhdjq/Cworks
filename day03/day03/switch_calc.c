#include <stdio.h>
#define _CRT_SECURET_NO_WARNINGS

int main() {

	// operator (������) ���� + - * / �� ��� ��Ģ����

	int num1 = 10;
	int num2 = 2;
	char operator;
	int result =0;

	
	printf("(+,-,*,/)�� ������ �Է� : ");
	scanf_s("%c", &operator);
	

	switch (operator)
	{
	case '+':
		result = num1 + num2;
		break;

	case '-':
		result = num1 - num2;
		break;

	case '*':
		result = num1 * num2;
		break;

	case '/':
		result = num1 / num2;
		break;

	default:
		printf("������ �����Դϴ�.");
		return;
	}


	printf("����� %d�Դϴ�.", result);

	return 0;
}