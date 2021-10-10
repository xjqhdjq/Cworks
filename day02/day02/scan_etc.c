#include <stdio.h>


int main() {

	int x, n1, n2;

	printf("숫자 입력 : ");
	scanf_s("%d", &x);

	printf("%d * %d = %d \n", x,x,x * x);
	printf("x의 주소값 : 0x%x \n", &x); // 앞에 0x를 붙이는 이유는 16진수가 0x어쩌고로 나오니까 .


	printf("두 수를 입력하세용 : ");
	scanf_s("%d %d", &n1, &n2);
	printf("%d - %d = %d 입니다. \n",n1,n2, n1 - n2);

	printf("n1의 주소값 : 0x%x \n", &n1);
	printf("n2의 주소값 : 0x%x \n", &n2);

	return 0;
}