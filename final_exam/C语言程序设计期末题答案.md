# C语言程序设计期末题答案

## 一、单选

|  1   |  2   |  3   |  4   |  5   |  6   |  7   |  8   |  9   |  10  |
| :--: | :--: | :--: | :--: | :--: | :--: | :--: | :--: | :--: | :--: |
|  A   |  B   |  D   |  C   |  D   |  C   |  D   |  B   |  C   |  A   |

## 二、判断

|  1   |  2   |  3   |  4   |  5   |  6   |  7   |  8   |  9   |  10  |
| :--: | :--: | :--: | :--: | :--: | :--: | :--: | :--: | :--: | :--: |
|  √   |  ×   |  ×   |  √   |  ×   |  ×   |  ×   |  √   |  ×   |  √   |

## 三、填空

1. 顺序结构、选择结构、循环结构

2. 0、9

3. &、*

4. n/100、(n/10)%10、n%10

## 四、程序阅读

1. 12 17

2. s=30

3. 4 5
   5 4

## 五、程序填空

1. `a * 100 + b * 10 + c`、`a * a * a + b * b * b + c * c * c`

2. `m % i == 0`、`flag = 0`、`prime(n)`

## 六、程序编写

1. ```c
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
   ```

2. ```c
   #include <stdio.h>
   
   int main() {
       int sum_1 = 0, sum_2 = 0;
   
       for (int i = 1; i <= 10; i++) {
           sum_1 += i;
           sum_2 += i * i;
       }
       
       printf("Sum: %d\n", sum_1 + sum_2);
   
       return 0;
   }
   ```

3. ```c
   #include <stdio.h>
   
   void bubble_sort(int arr[], int n) {
       for (int i = 0; i < n - 1; i++) {
           for (int j = 0; j < n - i - 1; j++) {
               if (arr[j] < arr[j + 1]) {
                   int temp = arr[j];
                   arr[j] = arr[j + 1];
                   arr[j + 1] = temp;
               }
           }
       }
   }
   
   int main() {
       int a[10];
   
       printf("Enter 10 integers:\n");
       for (int i = 0; i < 10; i++) {
           scanf("%d", &a[i]);
       }
   
       bubble_sort(a, 10);
   
       printf("Sorted array in descending order:\n");
       for (int i = 0; i < 10; i++) {
           printf("%d ", a[i]);
       }
       printf("\n");
   
       return 0;
   }
   ```
