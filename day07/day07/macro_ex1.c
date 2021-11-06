#include <stdio.h>
#define PI 3.14

int main() {



	int radius;
	double area, circum;

	printf("반지름을 입력하시오 : ");
	scanf_s("%d", &radius);

	area = PI * radius * radius;
	circum = 2 * PI * radius;

	printf("넓이 : %1f\n", area);
	printf("넓이 : %1f\n", circum);



	return 0;
}