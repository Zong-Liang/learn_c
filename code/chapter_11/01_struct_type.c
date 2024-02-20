#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
    float height;
};
//typedef struct Person P;

int main() {
    //    printf("%llu\n", strlen("China\n"));
    //    P person_1;
    struct Person person_1;

    strcpy(person_1.name, "John");
    person_1.age = 30;
    person_1.height = 175.5f;

    printf("name: %s\n", person_1.name);
    printf("age: %d\n", person_1.age);
    printf("height: %.1f\n", person_1.height);

    struct Student {
        char name[20];
        char gender[10];
        int grade;
    } student_arr[5] = {{"jerry", "male", 6},
                        {"tom", "male", 4},
                        {"rose", "female", 2},
                        {"jack", "male", 5},
                        {"lily", "female", 1}};

    for (int i = 0; i < 5; ++i) {
        printf("%s\t", student_arr[i].name);
        printf("%s\t", student_arr[i].gender);
        printf("%d\t", student_arr[i].grade);
        printf("\n");
    }

    struct Student *student_p;
    printf("%p\n", (void *)student_p);
    strcpy(student_p->name, "jobs");
    strcpy(student_p->gender, "male");
    student_p->grade = 9;
    printf("%s\t", student_p->name);
    printf("%s\t", (*student_p).gender);
    printf("%d\t", student_p->grade);
    printf("\n");

    struct Student *student_arr_p = student_arr;
    for (int i = 0; i < 5; ++i) {
        printf("%s\t", student_arr_p->name);
        printf("%s\t", student_arr_p->gender);
        printf("%d\t", student_arr_p->grade);
        printf("\n");
        student_arr_p++;
    }

    return 0;
}
