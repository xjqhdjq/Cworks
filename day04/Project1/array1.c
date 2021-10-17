#include <stdio.h>


int main() {

	int a[3];
	int i;
	int sum =0;

	a[0] = 10;
	a[1] = 40;
	a[2] = 30;

	//배열의 주소 / 배열의 이름(a)은 배열의 시작 주소와 같다.

	printf("%x %x %x \n", &a[0], &a[1], &a[2]); // &붙으면 값이 아니고 주소로 가라는뜻임..
	printf("%x %x %x \n", a, a+1,a+2); // &붙으면 값이 아니고 주소로 가라는뜻임..

	for (i = 0; i < 3; i++) {
		printf("%d \n", a[i]);
	}

	printf("%dbyte \n", sizeof(a)); // 배열 하나당 4바이트니까 3개라 12바이트임.

	//합계

	for (i = 0; i < 3; i++) {

		sum += a[i];
	}
	printf("합계 : %d \n", sum);

	return 0;
}