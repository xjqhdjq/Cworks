#include <stdio.h>
int findmax(int[], int);
int findMaxIdx(int[], int);

int main() {


	int num[] = { 21, 35, 71, 100, 2 ,66, 97,  };
	int maxVal = findmax(num, 7);
	int maxIdx = findMaxIdx(num, 7);

	printf("최대값은 : %d \n", maxVal);

	printf("최대값의 위치는 : %d", maxIdx);

	return 0;
}

int findmax(int num[], int len) {

	int max = num[0];
	int i;

	//최대값 설정 (배열의 첫번째값)
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