#include <stdio.h>

int main() {
  int i_1 = 1, i_2 = 0;
  if (i_1 == 1 && i_2 == 0) {
    printf("AND\n");
  }
  if (i_1 == 6 || i_2 == 0) {
    printf("OR\n");
  }
  if (!i_1 || !i_2) {
    printf("NOT\n");
  }
  return 0;
}
