#include <stdio.h>

// 191 page.

int main() {

	int family[3];


	for (int i=0; i<3; i++){
	
	printf("�� ��ȣ : ");
	scanf_s("%d", &family[i]);

	}


	printf("�����̳� ȣ�� �� ��ȣ�� %dȣ �Դϴ�. \n", family[0]);
	printf("�����̳� ȣ�� �� ��ȣ�� %dȣ �Դϴ�. \n", family[1]);
	printf("�Ҿƹ��� �ҸӴ� ȣ�� �� ��ȣ�� %dȣ �Դϴ�. \n", family[2]);

	printf("%x \n", &family[0]);
	printf("%x \n", family);


	return 0;
}