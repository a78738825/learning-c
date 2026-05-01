# Pointer Printing in C

Use `%p` to print a pointer (memory address).

## Syntax

```c
#include <stdio.h>

int main() {
    int x = 42;
    int *ptr = &x;

    printf("Address of x: %p\n", (void*)ptr);

    return 0;
}
```

### Possible Output

```text
Address of x: 0x7ffee4b8c9ac
```

The hexadecimal-looking number is the memory address. Tiny treasure-map coordinates inside RAM 🗺️

---

## Why cast to `(void*)`?

The C standard says `%p` expects a `void*`.

So this is the safest and most portable form:

```c
printf("%p", (void*)ptr);
```

---

## Pointer Datatypes

Pointers do have types:

```c
int *p1;
char *p2;
float *p3;
```

But when printing addresses, `%p` is the universal doorway.

---

## Common Mistake

```c
printf("%d", ptr);   // Wrong
```

`%d` is for integers, not addresses. Using it for pointers can produce warnings or undefined behavior. Like trying to mail a house key through a pasta strainer 🍝🔑
