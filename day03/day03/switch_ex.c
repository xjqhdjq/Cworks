#include <stdio.h>

int main() {


	int ranking = 1;
	char medalColor;

	switch (ranking) {
	case 1:
		medalColor = 'G';
		break;
	case 2:
		medalColor = 'S';
		break;
	case 3:
		medalColor = 'B';
		break;
	default:
		medalColor = 'N';
		break;
	}
	printf("%d�� �޴��� ������ %c", ranking, medalColor);

	return 0;
}