#include <stdio.h>
#include <stdlib.h>

int main() {
	int* ip;
	int i;

	ip = (int*)malloc(sizeof(int) * 4);
	if (ip == NULL) {  //���� ó��(�ʼ�)
		printf("���� �޸� �Ҵ翡 �����߽��ϴ�.\n");
		exit(1);  //��� ����
	}
	//������ �����ϱ�
	*(ip + 0) = 10;
	*(ip + 1) = 20;
	*(ip + 2) = 30;
	*(ip + 3) = 40;

	//�迭�� �����ϱ�
	ip[0] = 10;
	ip[1] = 20;
	ip[2] = 30;
	ip[3] = 40;

	//���
	for (i = 0; i < 4; i++) {
		printf("%3d %3d\n", *(ip + i), ip[i]);
	}

	free(ip); //���� 

	return 0;
}