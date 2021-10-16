#include <stdio.h>
#define _CRT_SECURET_NO_WARNINGS

int main() {

	// operator (연산자) 값이 + - * / 인 경우 사칙연산

	int num1 = 10;
	int num2 = 2;
	char operator;
	int result =0;

	
	printf("(+,-,*,/)중 연산자 입력 : ");
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
		printf("연산자 오류입니다.");
		return;
	}


	printf("결과는 %d입니다.", result);

	return 0;
}