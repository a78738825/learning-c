#include <stdio.h>

/*
    A struct lets us group variables together.
    Here, we create a struct type called Person.
*/
typedef struct {
  char name[50];
  int age;
} Person;

int main() {
  // Create an array of 3 Person structs
  Person people[3] = {{"Alice", 30}, {"Bob", 25}, {"Charlie", 40}};

  // Accessing elements in the array
  for (int i = 0; i < 3; i++) {
    printf("Name: %s, Age: %d\n", people[i].name, people[i].age);
  }

  return 0;
}
