#include <stdio.h>

int main() {
	//��� ����� �� - const ���̱�
	int min_num = 1;
	const int MAX_NUM = 100; // ���ʻ� ����� ������ �빮�ڷ� ��
	const float PI = 3.141592;
	int radius = 5;
	float area;


	min_num = 10;
	// max_num = 1000; ����� ������ �� ����. ex ��¥.. 12���� / 3.141592.. ��


	printf("%d \n", min_num);
	printf("%d \n", MAX_NUM);


	// ���� ���� ����ϱ�
	area = PI * radius * radius;
	printf("%f \n", area);

	return 0;
}