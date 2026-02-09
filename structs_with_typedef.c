#include <stdio.h>

/*
    A struct groups different variables together under one name.
    typedef lets us create a shorter alias for a type.

    Here, typedef + struct lets us use "Person" directly
    instead of writing "struct Person" every time.
*/

// Create a struct and give it the alias "Person"
typedef struct {
    char name[50];
    int age;
} Person;

int main() {
    // Now we can declare a Person without using "struct"
    Person p1 = {"Alice", 30};

    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);

    return 0;
}
