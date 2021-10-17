#include <stdio.h>
#include <Windows.h>

int main() {

	long t, start, end;
	int i;
	
	/*
	t = time(NULL); // 시간측정할 때 사용하는 함수. 걍 외워
	
	printf("%ld초 \n", t);
	*/

	start = time(NULL); // 시작시간

	for (i = 1; i <= 100; i++) {
		printf("%d \n", i);
		Sleep(20);
	}

	end = time(NULL); // 종료시간

	double diff_timer = (double)(end - start);
	printf("%수행시간 : %lf초 \n", diff_timer);

	return 0;
}