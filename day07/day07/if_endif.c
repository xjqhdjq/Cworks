#include <stdio.h>
#define VER 10
#define BIT16


int main() {

	int max = 0;

#if VER >= 10
	printf("버전 %d입니다.", VER);
#endif // VER >= 10

	printf("\n==========================\n");

#ifdef BIT16
	max = 32767;
#else  
	max = 2147474535;
#endif // BIT16
	printf("int형 변수의 최대값 : %d\n", max);

	return 0;
}