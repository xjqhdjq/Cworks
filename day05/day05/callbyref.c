#include <stdio.h>

int callByVal(int);
int callByRef(int*);

int main() {

	int n = 10;
	int result = 0;

	printf("==callByVal 호출==\n");
	result = callByVal(n);
	printf("%d\n", result);
	printf("%d\n", n); //10


	printf("==callByRef 호출==\n");
	result = callByRef(&n);
	printf("%d\n", result);
	printf("%d\n", n); //11 포인터 쓰면 값이 유지가 됨 주소값으로 가기때문에 

	return 0;
}

int callByVal(int i) {
	i++;
	return i;
}

int callByRef(int* i) {
	*i = *i + 1;
	return *i;
}