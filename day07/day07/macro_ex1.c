#include <stdio.h>
#define PI 3.14

int main() {



	int radius;
	double area, circum;

	printf("�������� �Է��Ͻÿ� : ");
	scanf_s("%d", &radius);

	area = PI * radius * radius;
	circum = 2 * PI * radius;

	printf("���� : %1f\n", area);
	printf("���� : %1f\n", circum);



	return 0;
}