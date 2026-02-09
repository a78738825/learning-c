#include <stdbool.h>
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    if (size > 0) {
        printf("size = %d\n", size);
        for (int i = 0; i < size; i++) {
            printf("arr[%d] = %d\n", i, arr[i]);
        }
    }

    return 0;
}
