#include <stdio.h>
#include <string.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;
    printf("%llu\n", sizeof(data));

    data.i = 10;
    printf("int data: %d\n", data.i);

    data.f = 3.14f;
    printf("float data: %.2f\n", data.f);

    strcpy(data.str, "Hello, Union!");
    printf("string data: %s\n", data.str);

    return 0;
}
