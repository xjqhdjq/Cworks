#include <stdio.h>

int main() {

	//문자 자료형
	char ch = 'a'; //문자형 변수 ch에 a를 저장.
	printf("%c \n", ch);
	printf("%d \n", ch); // 아스키 코드 값

	//자료형의 크기
	printf("char형 = %d Byte \n", sizeof(char));

	ch = 98;

	printf("%c \n", ch);
	printf("%c \n", ch + 1); // c출력
	printf("%d \n", ch);

	
	char f[7] = "banana"; // 영문은 6개인데 배열 맨 뒤에 null값이 들어가야하기때매 1개 더 늘어나서 7개가 돼야함.
	char h[3] = "가"; // 한글이니까 ㄱ + ㅏ 라 2개임. 근데 null값 생각해서 3개
	char h2[] = "\uD55C"; // 유니코드
	char h3[] = "\uAE00"; // 유니코드



	printf("%s \n", f);
	printf("%s \n", h);
	printf("%s \n", h2);
	printf("%s \n", h3);


	return 0;
}