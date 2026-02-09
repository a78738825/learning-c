#include "stdio.h"

int main(void) {
  /*
  int numbers[] = {1, 2, 3, 4, 5};
  for (int i = 0; i < 5; i++) {
    printf("%d ", numbers[i]);
  }
  */

  // 2D Arrays
  int numbers[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  for (int i = 0; i < 3; i++) {   // For Rows
    for (int j = 0; j < 3; j++) { // For Columns
      printf("%d ", numbers[i][j]);
    }
    printf("\n");
  }

  return 0;
}
