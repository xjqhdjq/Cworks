#include <stdio.h>
void sayHello(); //�ؿ� void �Լ� ��ü�� �ƿ� ������ �����ص� ������µ� �׷� ������ϱ� �׳� �����ص� �ǰ�
				// �ݴ�� 2�� �����ϴ°Ŵϱ�.. �׳� ������ �����ϴ°�쵵 �ְ�.. �����ϱ� ����
void sayHello2(char[]);

int main() {

	sayHello();
	sayHello2("C++"); // C++�� lang[] �迭 ������ ��
	
	return 0;
}

void sayHello() { // sayHello��� �̸��� �Լ� ������� ����
				  // void�� ��ȯ �ڷᰡ ���ٴ� ��. �׷��� return 0; �Ⱦ�

	printf("���� ��ο� �Լ�~~ \n");

}

void sayHello2(char lang[]) { //���� ()�ȿ� �ִ°� �Ű����������. 

	printf("Hello %s\n", lang);
}