#include <stdio.h>

int main() {

	//���� �ڷ����� ����
	char val = -130;
	printf("%d", val);

	char val2 = 128; //overflow
	printf("%d", val2);

	unsigned char val3 = 128;
	printf("%d", val3);

	int iNum = 2147483647;
	printf("\d\n", iNum);

	int iNum2 = 21474836478; // d���ä�
	printf("\d\n", iNum2);


	float fNum = 1.123456;
	double dnum = 1.123456789012345;

	printf("%f \h \n", fNum);
	printf("%.15lf\n", dnum);

	return 0;
}