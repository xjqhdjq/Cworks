#include <stdio.h>

int main() {
	
	//������ ������ ���� �� ����
	int data = 11;

	int* ip = &data;

	printf("%x %d\n", &data, data);

	return 0;

}