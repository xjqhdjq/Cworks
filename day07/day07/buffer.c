#include <stdio.h>

int main() {

	int age;
	char name[10];

	printf(" 나이 입력 : ");
	scanf_s("%d", &age);

	printf(" 이름 입력 : ");
	while (getchar() != '\n');
	gets(name);

	printf("나이 : %d \n", age);
	printf("이름 : %s \n", name);



	return 0;
}
