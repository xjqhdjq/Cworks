#include <stdio.h>

int main() {

	int value;
	value = (3 > 4) ? 10 : 20;
	printf("%d \n", value);


	int fA = 35;
	int mA = 39;

	char ch = (fA > mA) ? "Fr" : "M";

	printf("나이많은 부모는 %c이며 나이는", ch);

	return 0;
}