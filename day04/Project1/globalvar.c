#include <stdio.h>

int quantity=2; // ��������


int price() {

	int price = 10000 * quantity;
	printf(" %d \n", price);

	return price;
}

int main() {

	printf("%d���� %d�� �Դϴ�.", quantity, price());
	
	return 0;
}

