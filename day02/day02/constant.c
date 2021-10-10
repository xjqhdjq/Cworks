#include <stdio.h>

int main() {
	//상수 만드는 법 - const 붙이기
	int min_num = 1;
	const int MAX_NUM = 100; // 관례상 상수는 변수를 대문자로 씀
	const float PI = 3.141592;
	int radius = 5;
	float area;


	min_num = 10;
	// max_num = 1000; 상수는 변경할 수 없음. ex 날짜.. 12개월 / 3.141592.. 등


	printf("%d \n", min_num);
	printf("%d \n", MAX_NUM);


	// 원의 넓이 계산하기
	area = PI * radius * radius;
	printf("%f \n", area);

	return 0;
}