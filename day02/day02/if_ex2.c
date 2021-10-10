#include <stdio.h>

int main() {

	int age;
	int charge = 0;

	printf("나이를 입력하세요 : ");
	scanf_s("%d", &age);

	if (age < 8)
	{
		charge = 1000;
		printf("미취학 아동입니다.");
	}
	else if (age < 14) {
		charge = 2000;
		printf("초등학생입니다.");
	}
	else if (age < 17) {
		charge = 3000;
		printf("중학생입니다.");
	}
	else if (age < 20) {
		charge = 4000;
		printf("고등학생입니다.");
	}
	else {
		charge = 3000;
		printf("일반인입니다.");
		
	}printf("입장료는 %d원 입니다.", charge);
	return 0;
}