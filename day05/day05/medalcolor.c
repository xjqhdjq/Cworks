#include <stdio.h>

int main() {

	int ranking = 1;

	char *medalColor; // 이걸 포인터 안쓰고 그냥 써버리면 c , s, 등 문자 하나만 됐는데 아님 배열썻어야됏자나
	//근데 포인터 쓰니까 그냥 그 주소값으로 전달받아서 문자열로 저장이 되는거임 

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
	printf("%d등 메달 색깔은 %s입니다.", ranking, medalColor);

	return 0;
}