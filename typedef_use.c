#include <stdio.h>

/*
    typedef lets us create a new name (alias) for an existing type.
    It does NOT create a new type — just a simpler name to use in code.
*/

// Create a short name "uint" for "unsigned int"
typedef unsigned int uint;

int main() {
  uint age = 25; // same as: unsigned int age = 25;

  printf("Age: %u\n", age);
  return 0;
}
