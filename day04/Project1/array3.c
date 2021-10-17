#include <stdio.h>

// 191 page.

int main() {

	int family[3];


	for (int i=0; i<3; i++){
	
	printf("방 번호 : ");
	scanf_s("%d", &family[i]);

	}


	printf("시은이네 호텔 방 번호는 %d호 입니다. \n", family[0]);
	printf("지훈이네 호텔 방 번호는 %d호 입니다. \n", family[1]);
	printf("할아버지 할머니 호텔 방 번호는 %d호 입니다. \n", family[2]);

	printf("%x \n", &family[0]);
	printf("%x \n", family);


	return 0;
}