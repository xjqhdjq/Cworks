#include <stdio.h>

int main() {

	printf("10 == 10의 값은? : %d \n", 10 == 10); // 1
	printf("10 != 10의 값은? : %d \n", 10 != 10); // 0
	printf("10 > 10의 값은? : %d \n", 10 > 10); // 0
	printf("10 >= 10의 값은? : %d \n", 10 >= 10); // 1

	int a = 5;
	int b = 3;
	int c = 2;

	printf("0 && 1의 값은? : %d \n", a < b&& b > c); // 0
	printf("0 && 0의 값은? : %d \n", a < b&& b < c); // 0
	printf("0 && 0의 값은? : %d \n", a < b&& b > c); // 0
	
	printf("0 || 1의 값은? : %d \n", a < b || b > c); // 0
	printf("0 || 0의 값은? : %d \n", a < b || b < c); // 0
	printf("1 || 0의 값은? : %d \n", a > b || b < c); // 0

	printf("!0 의 값은? : %d \n", !(a < b)); // 0
	printf("!1 의 값은? : %d \n", !(b > c)); // 0

	return 0;
}