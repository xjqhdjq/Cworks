#include <stdio.h>

void count() {
	int x = 0; // ��������. ȣ���Ҷ��� ���ǰ� �ٽ� �ʱ�ȭ��. 
	static int y = 0; //���������� ����ؾ� �ʱ�ȭ���� �ʰ� ������ �����Ѵ�. ���α׷��� ����ž� �Ҹ�.

	x += 1;
	y += 1;
	printf("x = %d, y = %d \n", x, y);
}


int main() {


	count();
	count();
	count(); // �׷��� �̰� �����ϸ� y���� ������.


	return 0;
}