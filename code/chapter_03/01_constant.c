// circle_area = PI * radius * radius
#include <stdio.h>
#define PI 3.14

int main() {
    //    const float PI = 3.14f;
    float radius;
    printf("please input radius of the circle:\n");
    scanf_s("%f", &radius);
    float circle_area = PI * radius * radius;
    printf("circle area:\n%.2f", circle_area);
}
