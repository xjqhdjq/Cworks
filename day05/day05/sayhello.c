#include <stdio.h>

void sayHello(char name[]) {
    printf("Hello~ %s\n", name);
}

void sayHello2(char* name) {
    printf("Hello~ %s\n", name);
}

int main() {
    sayHello("sunny");    //�迭 ȣ��
    sayHello2("hyunsoo"); //������ ȣ��
    return 0;
}