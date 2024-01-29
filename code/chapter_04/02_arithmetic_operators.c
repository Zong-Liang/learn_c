#include <stdio.h>

int main() {
  int i_1 = 6, i_2 = 8;
  printf("addition: %d\n", i_2 + i_1);
  printf("subtraction: %d\n", i_2 - i_1);
  printf("multiplication: %d\n", i_2 * i_1);
  printf("division: %d\n", i_2 / i_1);
  printf("modulo_arithmetic: %d\n", i_2 % i_1);
  i_1++;
  printf("after self_increment: %d\n", i_1);
  i_2--;
  printf("after self_decrement: %d\n", i_2);
  return 0;
}
