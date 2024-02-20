#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main() {
    int i_1 = -6;
    printf("%d\n", abs(i_1));

    long int i_2 = -8;
    printf("%ld\n", labs(i_2));

    double d_1 = -3.14;
    printf("%f\n", fabs(d_1));

    double angle = 30.0;
    double radians = angle * M_PI / 180.0;
    printf("%.3f\n", sin(radians));
    printf("%.3f\n", cos(radians));
    printf("%.3f\n", tan(radians));

    char c_1 = 'a';
    char c_2 = '8';
    printf("%d\n", isalpha(c_1));
    printf("%d\n", isalpha(c_2));

    printf("%d\n", isdigit(c_1));
    printf("%d\n", isdigit(c_2));

    printf("%d\n", isalnum(c_1));
    printf("%d\n", isalnum(c_2));

    char c_arr_1[10] = "hello";
    char c_arr_2[10] = "string";
    printf("%s\n", c_arr_1);
    printf("%s\n", c_arr_2);

    //    printf("%s\n", strcpy(c_arr_1, c_arr_2));
    //    printf("%s\n", c_arr_1);
    //    printf("%s\n", strcpy(c_arr_2, c_arr_1));
    //    printf("%s\n", c_arr_2);
    //    printf("%s\n", strcat(c_arr_1, c_arr_2));
    //    printf("%d\n", strcmp(c_arr_1, c_arr_2));
    //    printf("%s\n", strupr(c_arr_1));
    //    printf("%s\n", c_arr_1);
    //    printf("%s\n", strlwr(c_arr_1));
    printf("%llu\n", strlen(c_arr_1));
    printf("%llu\n", strlen(c_arr_2));
}
