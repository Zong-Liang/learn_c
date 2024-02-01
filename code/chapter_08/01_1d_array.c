#include <stdio.h>

int main() {
    //    int i_arr[12];
    //    printf("please input your telephone number:\n");
    //    for (int i = 0; i < 11; ++i) {
    //        scanf_s("%d", &i_arr[i]);
    //    }
    //    printf("your telephone number is\n");
    //    for (int i = 0; i < 11; ++i) {
    //        printf("%d", i_arr[i]);
    //    }
    //    printf("\n");
    //

    int score[10] = {98, 86, 95, 91, 94, 93, 52, 45, 37, 88};
    int score_length = sizeof(score) / sizeof(int);
    printf("the length of array is %d\n", score_length);
    int total_score = 0, average_score = 0;
    for (int i = 0; i < score_length - 1; ++i) {
        total_score += score[i];
    }
    average_score = total_score / score_length;
    printf("average score is %d\n", average_score);
}
