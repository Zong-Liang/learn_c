/*
 int
 unsigned
 short
 unsigned short
 long
 unsigned long
 char
 unsigned char
 float
 double
 long double
*/

#include <stdio.h>

int main() {
    int int_1 = 1;
    printf("the size of int int_1 is %zd\n", sizeof(int_1));
    unsigned int_2 = 2;
    printf("the size of unsigned int_2 is %zd\n", sizeof(int_2));
    short int_3 = 3;
    printf("the size of short int_3 is %zd\n", sizeof(int_3));
    unsigned short int_4 = 4;
    printf("the size of unsigned short int_4 is %zd\n", sizeof(int_4));
    long int_5 = 5;
    printf("the size of long int_5 is %zd\n", sizeof(int_5));
    unsigned long int_6 = 5;
    printf("the size of unsigned long int_6 is %zd\n", sizeof(int_6));
    char char_1 = 'a';
    printf("the size of char char_1 is %zd\n", sizeof(char_1));
    unsigned char char_2 = 'A';
    printf("the size of unsigned char char_2 is %zd\n", sizeof(char_2));
    float float_1 = 2.74f;
    printf("the size of float float_1 is %zd\n", sizeof(float_1));
    double double_1 = 2.74;
    printf("the size of double double_1 is %zd\n", sizeof(double_1));
    long double double_2 = 1.68;
    printf("the size of long double double_2 is %zd\n", sizeof(double_2));
}
