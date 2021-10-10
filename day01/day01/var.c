#include <stdio.h>

main() {  //문법적으로는 int main 해야하나 요새는 그냥 main해도 됨. 교재는 main이라 그냥 이렇게..
	
	int a; // 정수형 변수 a를 선언
	int b;
	int c = -22;


	a = 7; // 선언했으면 값을 넣어줘야함. ->초기화 했다 함.
	b = 6;

	a = a + 1;

	//자료형의 크기

	printf("int 형 = %d Byte \n", sizeof(int)); //자료형의 크기를 알려주는 함수 sizeof. 4 byte = 32bit

	printf("%d \n", a);
	printf("%d \n", b);
	printf("%d \n", c);
	printf("선영이 나이는 %d살이고, 현수 나이는 %d살 입니다. \n", a, b);



}