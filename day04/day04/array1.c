#include <stdio.h>


int main() {

	int a[3];
	int i;
	int sum =0;

	a[0] = 10;
	a[1] = 40;
	a[2] = 30;

	//�迭�� �ּ� / �迭�� �̸�(a)�� �迭�� ���� �ּҿ� ����.

	printf("%x %x %x \n", &a[0], &a[1], &a[2]); // &������ ���� �ƴϰ� �ּҷ� ����¶���..
	printf("%x %x %x \n", a, a+1,a+2); // &������ ���� �ƴϰ� �ּҷ� ����¶���..

	for (i = 0; i < 3; i++) {
		printf("%d \n", a[i]);
	}

	printf("%dbyte \n", sizeof(a)); // �迭 �ϳ��� 4����Ʈ�ϱ� 3���� 12����Ʈ��.

	//�հ�

	for (i = 0; i < 3; i++) {

		sum += a[i];
	}
	printf("�հ� : %d \n", sum);

	return 0;
}