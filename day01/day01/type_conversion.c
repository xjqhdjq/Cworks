#include <stdio.h>

int main() {

	//�ڵ� ����ȯ
	int iNum = 20;
	float fNum = iNum;

	printf("%f \n", fNum);

	//���� ����ȯ

	double dNum = 2.54;
	int iNum2 = (int)dNum; 
	printf("%d \n", iNum2);

	//����

	dNum = 1.2;
	fNum = 0.9;

	// int ���� �������̴ϱ� ������ �����ε� . 
	// �׷��� 2.1�� ���̸� ���� 0.1�� �����ǰ� 2�� ���´�..
	iNum = (int)dNum + (int)fNum;
	printf("%d \n", iNum); // 1

	iNum = (int)(dNum + fNum); 
	printf("%d \n", iNum); // 1

	//��Ģ���� 
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