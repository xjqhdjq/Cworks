#include <stdio.h>

int main() {
	//�ڵ� ����ȯ : ū �ڷ��� = ���� �ڷ���
	int iNum = 20;
	float fNum = iNum;  

	printf("%f\n", fNum);  //20.000000

	//���� ����ȯ : �����ڷ��� = (���� �ڷ���)ū �ڷ���
	double dNum = 2.54;
	int iNum2 = (int)dNum;  
	printf("%d\n", iNum2);

	//����
	dNum = 1.2;
	fNum = 0.9;

	iNum = (int)dNum + (int)fNum;
	printf("%d\n", iNum);  //1

	iNum = (int)(dNum + fNum);
	printf("%d\n", iNum);  //2

	//��Ģ����(+ - * /)
	int n1 = 10, n2 = 4;  //���� �ߺ� ���� - �޸� ���
	int result;
	float result2;

	result = n1 + n2;
	printf("%d\n", result);  //14

	result = n1 - n2;
	printf("%d\n", result);  //6

	result = n1 * n2;
	printf("%d\n", result); //40

	result2 = (float)n1 / n2; //2.5
	printf("%.1f\n", result2);


	return 0;
}