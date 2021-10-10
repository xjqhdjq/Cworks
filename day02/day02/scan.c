#include <stdio.h>

int main() {

	int i;
	float f;

	printf("정수 입력 : ");
	scanf_s("%d", &i);

	printf("%d입력하셨습니다. \n", i);

	printf("실수 입력 : ");
	scanf_s("%f", &f);

	printf("%f 입력하셨습니다. \n", f);
	
	return 0;
}