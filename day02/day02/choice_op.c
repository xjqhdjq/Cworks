#include <stdio.h>

int main() {
    //���� ������ - ���ǽ� ? ��(1) : ����(0)
    int value;
    value = (3 > 4) ? 10 : 20;
    printf("��� �� : %d\n", value);

    int fatherAge = 35;
    int motherAge = 38;

    printf("%d\n", fatherAge);   //���� ��
    printf("%x\n", &fatherAge);  //&�ּ��� ��

    char ch = (fatherAge > motherAge) ? 'T' : 'F';
    printf("��� �� : %c\n", ch);
    return 0;
}
