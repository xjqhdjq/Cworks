#include <stdio.h>

main() {  //���������δ� int main �ؾ��ϳ� ����� �׳� main�ص� ��. ����� main�̶� �׳� �̷���..
	
	int a; // ������ ���� a�� ����
	int b;
	int c = -22;


	a = 7; // ���������� ���� �־������. ->�ʱ�ȭ �ߴ� ��.
	b = 6;

	a = a + 1;

	//�ڷ����� ũ��

	printf("int �� = %d Byte \n", sizeof(int)); //�ڷ����� ũ�⸦ �˷��ִ� �Լ� sizeof. 4 byte = 32bit

	printf("%d \n", a);
	printf("%d \n", b);
	printf("%d \n", c);
	printf("������ ���̴� %d���̰�, ���� ���̴� %d�� �Դϴ�. \n", a, b);



}