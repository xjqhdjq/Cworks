#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//struct ����ü �ڷ��� ����
struct Student {
	int number;  //��ȣ(��� ����- �ʱ�ȭ ���� ����)
	char name[20];  //�̸�
	double weight;  //������
};

int main() {
	//�迭 ��ü ����(�� ���� ���)
	struct Student s[3] = {
		{101, "���ϴ�", 50.2},
		{102, "������", 61.5},
		{103, "������", 45.8}
	};
	int i;

	for (i = 0; i < 3; i++) {
		printf("�й� : %d\n", s[i].number);
		printf("�̸� : %s\n", s[i].name);
		printf("������ : %3.1lf\n", s[i].weight);
	}
	return 0;
}