#include <stdio.h>

int main() {
	

	// 1���� ������ �� �� ���� 100�� �Ѵ� �ڿ���

	int n = 0;
	int sum = 0;


	while (1) {

		n++;
		sum += n;

		if (sum > 100) {
			break;
		}
	}

	printf("%d \n", n);
	printf("%d ", sum);


	/*
	int n = 0;

	while (1) {
		n++;
		printf("%d \n", n);


		if (n == 10) 
			break; // ���ǹ� 1�پȿ� ������ �߰�ȣ {} ���� ����. //�ڵ� �����غ���
		
	}
	*/

	return 0;
}