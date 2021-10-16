#include <stdio.h>

int main() {

	// operator (연산자) 값이 + - * / 인 경우 사칙연산

	int num1 = 10;
	int num2 = 2;
	char operator;
	int result;

	printf("(+,-,*,/)중 연산자 입력 : ");
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
		printf("연산자 오류입니다.");
	}
	
	printf("결과는 %d입니다.", result);

	return 0;
}