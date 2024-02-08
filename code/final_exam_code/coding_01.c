#include <math.h>
#include <stdio.h>

void solve_quadratic_equation(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Two real roots: %.2f and %.2f\n", root1, root2);
    }
    else if (discriminant == 0) {
        double root = -b / (2 * a);
        printf("One real root: %.2f\n", root);
    }
    else {
        printf("No real roots\n");
    }
}

int main() {
    double a, b, c;

    printf("Enter coefficients (a, b, c): \n");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("a cannot be zero.\n");
        return 1;
    }

    solve_quadratic_equation(a, b, c);

    return 0;
}
