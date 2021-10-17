#include <stdio.h>

int quantity=2; // 전역변수


int price() {

	int price = 10000 * quantity;
	printf(" %d \n", price);

	return price;
}

int main() {

	printf("%d개에 %d원 입니다.", quantity, price());
	
	return 0;
}

