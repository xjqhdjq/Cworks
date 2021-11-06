#include <stdio.h>

int findMax(int*, int);
int findMaxIdx(int* a, int len);
int main() {
	int arr[] = { 80, 70, 60, 90, 40, 10 };

	//�ִ밪 ���
	int max = findMax(arr, 6);
	printf("�ִ밪 : %d\n", max);

	//�ִ밪�� ��ġ ���
	int maxIdx = findMaxIdx(arr, 6);
	printf("�ִ밪 ��ġ: %d\n", maxIdx);

	return 0;
}

int findMax(int* a, int len) {
	int maxVal = *a;  //*(a + 0)
	int i;

	for (i = 1; i < len; i++) {
		if (maxVal < *(a + i))
			maxVal = *(a + i);
	}
	return maxVal;
}

int findMaxIdx(int* a, int len) {
	int maxIdx = 0;  //0�� �ε���(ù ��ġ)
	int i;

	for (i = 1; i < len; i++) {
		if (*(a + maxIdx) < *(a + i))
			maxIdx = i;   //��ġ ����
	}
	return maxIdx;
}