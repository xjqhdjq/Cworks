#include <stdio.h>
#include <time.h>
#include <Windows.h>
int main() {

    //time_t t = time(NULL);  //time_t �ð� �ڷ���
    long t, start, end;

    t = time(NULL); //1970. 1.1 �������� ������� �ð�
    int i;

    printf("%ld��\n", t);   //%d, %ld(long decimal) 1634441580��

    //1���� 10���� ���(��� �ð��� ����) - ���� �ð� ����
    //Sleep(1000) -> 1��  <Windows.h> include
    start = time(NULL);      //���� �ð�

    for (i = 1; i <= 100; i++) {
        printf("%d\n", i);
        Sleep(20);  //0.02��
    }

    end = time(NULL);

    //double diff_timer = difftime(end, start);
    double diff_timer = (double)(end - start);  //����ȯ
    printf("����ð� : %lf��\n", diff_timer);
    return 0;
}