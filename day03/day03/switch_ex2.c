#include <stdio.h>

int main() {

	int month;
	int day;

	printf("알고싶은 달을 입력하세요 : ");
	scanf_s("%d", &month);

	switch (month)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		day = 31;
		break;
	case 2:
		day = 28;
		break;
	case 4: case 6: case 9: case 11:
		day = 30;
		break;
	default:
		day = 0;
		break;
	}

	printf("%d월은 %d일 입니다." ,month,day);

	return 0;
}