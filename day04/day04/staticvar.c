#include <stdio.h>

void count() {
    static int x = 0;        //�������� 
    int y = 0; //����(����) ����(static Ű���� ���)
    x += 1;
    y += 1;
    printf("x = %d, y = %d\n", x, y);
}

int main() {
    //x(��������)�� �Ҹ���� �ʰ� ������, 
    //y(��������)�� ����� �Ҹ�(����)
    count();  
    count();
    count();

    return 0;
}