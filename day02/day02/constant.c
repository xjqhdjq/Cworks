#include <stdio.h>

int main() {
	//��� - const
	const int MIN_NUM = 1;
	const int MAX_NUM = 100;
	const float PI = 3.1415;  //��� PI�� 3.1415�� ������
	int radius = 5;
	float area;

	//MIN_NUM = 10;  ����� ������ �� ����
	//max_num = 1000; 

	printf("%d\n", MIN_NUM);
	printf("%d\n", MAX_NUM);

	//���� ���� ����ϱ� : PI * ������ * ������
	area = PI * radius * radius;
	printf("���� ���� : %.2f\n", area);
	return 0;
}