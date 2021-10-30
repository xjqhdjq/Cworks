#define MAX 10
#include <stdio.h>

int top = -1; // 스택에 값이 없음
int stack[MAX]; //  정수형 배열 크기를 10으로 지정

void push(int n) {// 넣기 함수
	top++; // top = 0
	stack[top] = n;
	printf("%d\n", stack[top]);
}

int pop() { // 빼기 함수

	if (top < 0) {
		printf(" 스택이 비었습니다");
		return 0;
	}
	else {
	return stack[top--];

}
}

int main() {

	printf("==스택에 자료 넣기==\n");
	push(10);
	push(20);
	push(30);
	printf("==스택에 자료 빼기==\n");
	printf("%d\n", pop());
	printf("%d\n", pop());
	printf("%d\n", pop());
	printf("%d\n", pop());
	
	
	return 0;
}

