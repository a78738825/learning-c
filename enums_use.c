
#include <stdio.h>

/*
    An enum (enumeration) lets us create a set of named integer constants.
    By default, the first value starts at 0, and each following value increases
   by 1.
*/

// Create an enum with names for the days of the week
enum Day { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY };

int main() {
  enum Day today = WEDNESDAY; // WEDNESDAY has the value 2

  printf("Today is day number: %d\n", today);
  return 0;
}
