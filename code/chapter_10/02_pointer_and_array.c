#include <stdio.h>
#include <string.h>

int main() {
    int i_arr_1[10] = {1,
                       2,
                       3,
                       4,
                       5,
                       6,
                       7,
                       8,
                       9,
                       10};
    int *i_p_1 = i_arr_1;
    for (int i = 0; i < 10; ++i) {
        printf("%d\t", *i_p_1);
        i_p_1++;
    }
    printf("\n");

    char c_arr[10] = "pointer";
    char *c_p = &c_arr[0];
    //    char *c_p = c_arr;
    printf("%c\n", *c_p);
    printf("%p\n", (void *)c_p);
    c_p++;
    printf("%c\n", *c_p);
    printf("%p\n", (void *)c_p);

    int i_arr_2[2][5] = {1,
                         2,
                         3,
                         4,
                         5,
                         6,
                         7,
                         8,
                         9,
                         10};
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 5; ++j) {
            printf("%d\t", i_arr_2[i][j]);
        }
        printf("\n");
    }

    printf("%d\n", i_arr_2[0][1]);
    printf("%d\n", *(i_arr_2[0] + 1));
    printf("%d\n", i_arr_2[1][0]);
    printf("%d\n", *(i_arr_2 + 1)[0]);

    char country[5][20] = {
        "china",
        "japan",
        "russia",
        "germany",
        "switzerland"};
    printf("%llu\n", sizeof(country));
    char *country_p[] = {
        "china",
        "japan",
        "russia",
        "germany",
        "switzerland"};
    printf("%llu\n", sizeof(country_p));

    unsigned long long total_length = 0;
    for (int i = 0; i < sizeof(country_p) / sizeof(country_p[0]); i++) {
        total_length += strlen(country_p[i]);
    }
    printf("%llu\n", total_length);
}
