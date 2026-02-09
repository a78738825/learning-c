
#include <stdio.h>

/*
    A struct (structure) lets us group different variables together
    under one name. Each variable inside is called a "member".
*/

// Define a struct type named "Person"
struct Person {
  char name[50];
  int age;
};

int main() {
  // Create a variable of type struct Person
  struct Person p1 = {"Alice", 30};

  printf("Name: %s\n", p1.name);
  printf("Age: %d\n", p1.age);

  return 0;
}
