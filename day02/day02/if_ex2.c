#include <stdio.h>

int main() {

	int age;
	int charge = 0;

	printf("���̸� �Է��ϼ��� : ");
	scanf_s("%d", &age);

	if (age < 8)
	{
		charge = 1000;
		printf("������ �Ƶ��Դϴ�.");
	}
	else if (age < 14) {
		charge = 2000;
		printf("�ʵ��л��Դϴ�.");
	}
	else if (age < 17) {
		charge = 3000;
		printf("���л��Դϴ�.");
	}
	else if (age < 20) {
		charge = 4000;
		printf("����л��Դϴ�.");
	}
	else {
		charge = 3000;
		printf("�Ϲ����Դϴ�.");
		
	}printf("������ %d�� �Դϴ�.", charge);
	return 0;
}