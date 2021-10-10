#include <stdio.h>

int main() {

	int a = 99;
	int b = 2;

	printf("더하기 %d \n", a + b); // 더하기
	printf("빼기 %d \n", a - b); // 빼기
	printf("곱하기 %d \n", a * b); // 곱하기
	printf("나누기 %d \n", a / b); // 나누기
	printf("나머지 %d \n", a % b); // 나머지
	
	printf("완료되고 1증가 %d \n", a++); // 이 코드 끝나야 1 더해 짐 
	printf("증가된 a %d \n", a); // 100
	
	printf("바로 1증가 %d \n", ++a); // 이 코드 시작하면서 1 더해 짐 
	printf("a % d \n", a); // 101

	printf("완료되고 1감소 %d \n", a--); // 이 코드 끝나야 1 더해 짐 
	printf("감소된 a %d \n", a); // 100

	printf("바로 1감소 %d \n", --a); // 이 코드 시작하면서 1 더해 짐 
	printf("a % d \n", a); // 101


	//복합 대입
	a += 2; // a에 2 더해
	printf("%d \n", a);


	b *= 3; // b에 3 곱해
	printf("%d \n", b);

	b /= 3; // b에 3 나눠
	printf("%d \n", b);

	b -= 3; // b에 3 빼
	printf("%d \n", b);



	return 0;
}