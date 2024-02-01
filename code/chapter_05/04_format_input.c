#include <stdio.h>

int main() {
    signed int i_1;
    printf("please input signed int i_1:\n");
    scanf_s("%d", &i_1);
    printf("%d\n", i_1);

    unsigned int i_2;
    printf("please input unsigned int i_2:\n");
    scanf_s("%u", &i_2);
    printf("%u\n", i_2);

    unsigned int i_3;
    printf("please input unsigned int i_3:\n");
    scanf_s("%o", &i_3);
    printf("%o\n", i_3);

    unsigned int i_4;
    printf("please input unsigned int i_4:\n");
    scanf_s("%x", &i_4);
    printf("%x\n", i_4);

    char c_1;
    printf("please input char c_1:\n");
    fflush(stdin);// 清空输入缓冲区
    scanf("%c", &c_1);
    printf("%c\n", c_1);

    char c_arr[10];
    printf("please input char c_arr[10]:\n");
    scanf_s("%s", c_arr);
    printf("%s\n", c_arr);

    float f_1;
    printf("please input float f_1:\n");
    scanf_s("%f", &f_1);
    printf("%e\n", f_1);

    return 0;
}
