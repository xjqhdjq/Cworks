#include <stdio.h>
#include <Windows.h>

int main() {

	long t, start, end;
	int i;
	
	/*
	t = time(NULL); // �ð������� �� ����ϴ� �Լ�. �� �ܿ�
	
	printf("%ld�� \n", t);
	*/

	start = time(NULL); // ���۽ð�

	for (i = 1; i <= 100; i++) {
		printf("%d \n", i);
		Sleep(20);
	}

	end = time(NULL); // ����ð�

	double diff_timer = (double)(end - start);
	printf("%����ð� : %lf�� \n", diff_timer);

	return 0;
}