#include <stdio.h>
void sayHello(); //밑에 void 함수 자체를 아예 위에다 선언해도 상관없는데 그럼 더러우니까 그냥 선언해도 되고
				// 반대로 2번 선언하는거니까.. 그냥 위에다 선언하는경우도 있고.. 생각하기 나름
void sayHello2(char[]);

int main() {

	sayHello();
	sayHello2("C++"); // C++이 lang[] 배열 안으로 들어감
	
	return 0;
}

void sayHello() { // sayHello라는 이름의 함수 만들려고 선언
				  // void는 반환 자료가 없다는 뜻. 그래서 return 0; 안씀

	printf("쎄이 헬로우 함수~~ \n");

}

void sayHello2(char lang[]) { //여기 ()안에 있는건 매개변수라고함. 

	printf("Hello %s\n", lang);
}