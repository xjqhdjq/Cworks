#include <stdio.h>
#define PI 3.1415 //PI 정의를 위에다 해버림 매크로 상수라함. (전처리) 되어있기 때매 컴파일하기전에 이미 돼있어서 메모리 안잡아먹음
//이런것 때문에 C가 빠름. Hw가 작은 Spec의 PC에서 많이 씀.
#define AREA PI * R * R
#define R 5
#define MIN_NUM 1
#define MAX_NUM 2

//메모리를 다른걸 쓰기 때문이다?
// 절차지향이랑 객체지향인건 아님. 그 차이로 그걸부르는건아니라함.
//컴파일 하는과정에서만 절차지향이라고함.


int main() {
	


	printf("%f \n", AREA);
	printf("%d \n", MIN_NUM);
	printf("%d \n", MAX_NUM);

	return 0;
}