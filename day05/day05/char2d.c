#include <stdio.h>

int main() {

	char name[4][10] = {

		"sunny",
		"Hyunsoo",
		"soomi",
		"youngsang"
	};

	printf("%x %s \n", &name[0], name[0]); // �ּҶ� �� ���. �ּҶ� &�־����


	// ��ü ���

	for (int i = 0; i < 4; i++) {
		printf("%x %s \n", &name[i], name[i]);
	}

	return 0;
}