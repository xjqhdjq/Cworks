#include <stdio.h>
#include <math.h>

int main() {

	printf("%d\n", abs(3));
	printf("%d\n", abs(-3));


	//�ݿø�
	printf("%1.f\n", round(2.54));
	printf("%1.f\n", round(2.3));
	printf("%1.f\n", round(-2.3));
	printf("%1.f\n", round(-2.5));

	//����
	printf("%1.f\n", round(2.54));
	printf("%1.f\n", round(-2.54));

	return 0;
}