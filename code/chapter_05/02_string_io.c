#include <stdio.h>

int main() {
  puts("hello c!");
  puts("hello \0 c!");
  
  char str[20];
  gets(str);
  printf("%s\n", str);
  return 0;
}
