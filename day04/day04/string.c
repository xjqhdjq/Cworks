#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    //���ڿ� �迭 ����� ���
    char fruit1[6] = { 'a', 'p', 'p', 'l', 'e', '\0'}; //�� �� '\0' - null
    char fruit2[] = "apple";
    char name[20];

    printf("%s\n", fruit1);
    printf("%s\n", fruit2);

    //�̸��� ����� ����ϱ�
    printf("����� �̸��� �����ΰ���? ");
    //scanf_s("%s", name, sizeof(name));  //�迭�� ���(���Ĺ���, �迭, �迭�� ũ��)
    scanf("%s", name);
    printf("����� �̸��� %s�̱���", name);

    return 0;
}