#include <stdio.h>

int square(int);
int add(int, int);

int main() {

    int result = square(4); //square ȣ��

    int result2 = add(4, 5); //add ȣ��

    printf("%d\n", result);
    printf("%d\n", result2);

    return 0;
}

//������ ���ϴ� �Լ� - 3 * 3 = 9
int square(int x) { //return�� �ְ�, �Ű������� 1���� �Լ�
    return x * x;
}

//�� ���� ���ϴ� �Լ�
int add(int x, int y) {
    return x * y;
}