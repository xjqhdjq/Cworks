#include <stdio.h>

int main() {

	//���� �ڷ���
	char ch = 'a'; //������ ���� ch�� a�� ����.
	printf("%c \n", ch);
	printf("%d \n", ch); // �ƽ�Ű �ڵ� ��

	//�ڷ����� ũ��
	printf("char�� = %d Byte \n", sizeof(char));

	ch = 98;

	printf("%c \n", ch);
	printf("%c \n", ch + 1); // c���
	printf("%d \n", ch);

	
	char f[7] = "banana"; // ������ 6���ε� �迭 �� �ڿ� null���� �����ϱ⶧�� 1�� �� �þ�� 7���� �ž���.
	char h[3] = "��"; // �ѱ��̴ϱ� �� + �� �� 2����. �ٵ� null�� �����ؼ� 3��
	char h2[] = "\uD55C"; // �����ڵ�
	char h3[] = "\uAE00"; // �����ڵ�



	printf("%s \n", f);
	printf("%s \n", h);
	printf("%s \n", h2);
	printf("%s \n", h3);


	return 0;
}