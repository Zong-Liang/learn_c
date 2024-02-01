#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
    float height;
};

//typedef struct Person P;

int main() {
    //    P person_1;
    struct Person person_1;

    strcpy(person_1.name, "John");
    person_1.age = 30;
    person_1.height = 175.5f;

    printf("name: %s\n", person_1.name);
    printf("age: %d\n", person_1.age);
    printf("height: %.1f\n", person_1.height);

    return 0;
}
