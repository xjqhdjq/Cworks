#define MAX 10
#include <stdio.h>

int top = -1; // ���ÿ� ���� ����
int stack[MAX]; //  ������ �迭 ũ�⸦ 10���� ����

void push(int n) {// �ֱ� �Լ�
	top++; // top = 0
	stack[top] = n;
	printf("%d\n", stack[top]);
}

int pop() { // ���� �Լ�

	if (top < 0) {
		printf(" ������ ������ϴ�");
		return 0;
	}
	else {
	return stack[top--];

}
}

int main() {

	printf("==���ÿ� �ڷ� �ֱ�==\n");
	push(10);
	push(20);
	push(30);
	printf("==���ÿ� �ڷ� ����==\n");
	printf("%d\n", pop());
	printf("%d\n", pop());
	printf("%d\n", pop());
	printf("%d\n", pop());
	
	
	return 0;
}

