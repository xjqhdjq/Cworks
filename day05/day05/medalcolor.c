#include <stdio.h>

int main() {

	int ranking = 1;

	char *medalColor; // �̰� ������ �Ⱦ��� �׳� ������� c , s, �� ���� �ϳ��� �ƴµ� �ƴ� �迭����߉��ڳ�
	//�ٵ� ������ ���ϱ� �׳� �� �ּҰ����� ���޹޾Ƽ� ���ڿ��� ������ �Ǵ°��� 

	switch (ranking)
	{
	case 1:
		medalColor = "Gold";
		break;
	case 2:
		medalColor = "Silver";
		break;
	case 3:
		medalColor = "Bronze";
		break;
	default:
		medalColor = "None";
		break;
	}
	printf("%d�� �޴� ������ %s�Դϴ�.", ranking, medalColor);

	return 0;
}