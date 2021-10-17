#include <stdio.h>

int main() {

	//배열 복사 

	char a1[] = "TEN";
	char a2[4];
	int i;

	// a1을 a2에 저장

	for (i = 0; i < 5; i++) {
		a2[i] = a1[i];
	}

	printf("a2 %s \n", a2);

	//a1을 a2에 거꾸로 저장 NET가 나와야함

	for (i = 0; i < 5; i++) {
		
		a1[i] = a2[2-i];
	}
	a1[3] = '\0';

	printf("a1 %s \n", a1);

	return 0;
}