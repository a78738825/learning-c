#include <stdio.h>

int main() {
  int a = 10, b = 20;

  // Ternary operator to find the larger number
  int max = (a > b) ? a : b;

  printf("The larger number is: %d\n", max);

  // Another example: even/odd check
  int num = 7;
  printf("%d is %s\n", num, (num % 2 == 0) ? "even" : "odd");

  return 0;
}
