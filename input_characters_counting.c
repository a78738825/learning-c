#include <stdio.h>

int main(void) {
  int c;
  int i = 0;

  while ((c = getchar()) != EOF) {
    putchar(c);
    printf(" [%d]\n", i);
    i++;
  }

  return 0;
}
