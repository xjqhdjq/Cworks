#include <stdio.h>
int findmax(int[], int);
int findMaxIdx(int[], int);

int main() {


	int num[] = { 21, 35, 71, 100, 2 ,66, 97,  };
	int maxVal = findmax(num, 7);
	int maxIdx = findMaxIdx(num, 7);

	printf("�ִ밪�� : %d \n", maxVal);

	printf("�ִ밪�� ��ġ�� : %d", maxIdx);

	return 0;
}

int findmax(int num[], int len) {

	int max = num[0];
	int i;

	//�ִ밪 ���� (�迭�� ù��°��)
	for (i = 0; i < len; i++) {
		if (max < num[i]) {
			max = num[i];
		}
		else {
			continue;
		}
	}
	return max;
}

int findMaxIdx(int num[], int len) {
	int maxIdx = 0;
	int i;


	for (i = 0; i < len; i++) {
		if (num[maxIdx] < num[i]) {
			maxIdx = i;
		}
	}

	return maxIdx;

}