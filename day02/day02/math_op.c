#include <stdio.h>

int main() {

	int a = 99;
	int b = 2;

	printf("���ϱ� %d \n", a + b); // ���ϱ�
	printf("���� %d \n", a - b); // ����
	printf("���ϱ� %d \n", a * b); // ���ϱ�
	printf("������ %d \n", a / b); // ������
	printf("������ %d \n", a % b); // ������
	
	printf("�Ϸ�ǰ� 1���� %d \n", a++); // �� �ڵ� ������ 1 ���� �� 
	printf("������ a %d \n", a); // 100
	
	printf("�ٷ� 1���� %d \n", ++a); // �� �ڵ� �����ϸ鼭 1 ���� �� 
	printf("a % d \n", a); // 101

	printf("�Ϸ�ǰ� 1���� %d \n", a--); // �� �ڵ� ������ 1 ���� �� 
	printf("���ҵ� a %d \n", a); // 100

	printf("�ٷ� 1���� %d \n", --a); // �� �ڵ� �����ϸ鼭 1 ���� �� 
	printf("a % d \n", a); // 101


	//���� ����
	a += 2; // a�� 2 ����
	printf("%d \n", a);


	b *= 3; // b�� 3 ����
	printf("%d \n", b);

	b /= 3; // b�� 3 ����
	printf("%d \n", b);

	b -= 3; // b�� 3 ��
	printf("%d \n", b);



	return 0;
}