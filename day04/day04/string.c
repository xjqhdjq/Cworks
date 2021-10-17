#include <stdio.h>


int main() {

	char fruit1[] = { 'a', 'p','p','l','e','\0'}; // \0은 null과 똑같음. 끝이라고 알려줘야함.
	char fruit2[] = "apple"; // 문자열은 ""쌍따옴표로. 문자는 ''한따옴표
	char name[20]; // 처음에 초기화를 해주는거면 []로 하는데, 나중에 초기화 할거면 배열 범위 지정해줘야함

	printf("%s\n", fruit1); //전체 배열 부를 땐 이름만. [] 붙이는게아님.
	printf("%s\n", fruit2); 

	// 이름을 물어보자.
	printf("이름? :");
	scanf_s("%s", &name, sizeof(name)); // 배열을 입력받을때는 sizeof(배열변수명)을 무조건 선언해야함.// 
										// 원래는 생략해도 돼서 안쓴거임
										//? 안해도 되는데..?? 문자열일때만 해야되나봄..?
	printf("이름 : %s ", name);

	return 0;
}