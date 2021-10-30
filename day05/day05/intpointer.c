#include <stdio.h>

int main() {
	
	//정수형 포인터 선언 및 연산
	int data = 11;

	int* ip = &data;

	printf("%x %d\n", &data, data);

	return 0;

}