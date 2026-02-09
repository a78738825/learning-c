#include <stdio.h>

int main(void) {
  // int c;
  //
  // printf("Type a character: ");
  // c = getchar();   // waits for user to press a key
  //
  // printf("You typed: %c\n", c);

  int c;
  printf("Type something (Ctrl+D or Ctrl+Z to end):\n");

  while ((c = getchar()) != EOF) {
    putchar(c);
  }

  printf("\nReached EOF!\n");

  return 0;
}
