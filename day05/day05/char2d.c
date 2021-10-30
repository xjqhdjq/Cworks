#include <stdio.h>

int main() {

	char name[4][10] = {

		"sunny",
		"Hyunsoo",
		"soomi",
		"youngsang"
	};

	printf("%x %s \n", &name[0], name[0]); // 주소랑 값 출력. 주소라 &있어야함


	// 전체 출력

	for (int i = 0; i < 4; i++) {
		printf("%x %s \n", &name[i], name[i]);
	}

	return 0;
}