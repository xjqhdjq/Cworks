#include <stdio.h>


int main() {

	int x, n1, n2;

	printf("���� �Է� : ");
	scanf_s("%d", &x);

	printf("%d * %d = %d \n", x,x,x * x);
	printf("x�� �ּҰ� : 0x%x \n", &x); // �տ� 0x�� ���̴� ������ 16������ 0x��¼��� �����ϱ� .


	printf("�� ���� �Է��ϼ��� : ");
	scanf_s("%d %d", &n1, &n2);
	printf("%d - %d = %d �Դϴ�. \n",n1,n2, n1 - n2);

	printf("n1�� �ּҰ� : 0x%x \n", &n1);
	printf("n2�� �ּҰ� : 0x%x \n", &n2);

	return 0;
}