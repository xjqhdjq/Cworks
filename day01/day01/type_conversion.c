#include <stdio.h>

int main() {

	//자동 형변환
	int iNum = 20;
	float fNum = iNum;

	printf("%f \n", fNum);

	//강제 형변환

	double dNum = 2.54;
	int iNum2 = (int)dNum; 
	printf("%d \n", iNum2);

	//연산

	dNum = 1.2;
	fNum = 0.9;

	// int 형은 정수형이니까 리턴이 정수로됨 . 
	// 그래서 2.1이 값이면 뒤의 0.1은 생략되고 2만 나온다..
	iNum = (int)dNum + (int)fNum;
	printf("%d \n", iNum); // 1

	iNum = (int)(dNum + fNum); 
	printf("%d \n", iNum); // 1

	//사칙연산 
	int n1 = 10, n2 = 4;
	int result;
	double result2;

	result = n1 + n2;
	printf("%d + %d = %d \n",n1,n2,result);

	result = n1 - n2;
	printf("%d \n", result);

	result = n1 * n2;
	printf("%d \n", result);

	result2 = (double)n1 / n2;
	printf("%.1lf \n", result2);




	return 0;
}