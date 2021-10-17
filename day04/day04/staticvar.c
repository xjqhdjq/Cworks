#include <stdio.h>

void count() {
	int x = 0; // 지역변수. 호출할때만 사용되고 다시 초기화됨. 
	static int y = 0; //정적변수를 사용해야 초기화되지 않고 꾸준히 증가한다. 프로그램이 종료돼야 소멸.

	x += 1;
	y += 1;
	printf("x = %d, y = %d \n", x, y);
}


int main() {


	count();
	count();
	count(); // 그래서 이거 실행하면 y값만 증가함.


	return 0;
}