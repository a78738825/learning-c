#include <stdio.h>

/*
 * A "lookup table" trick for fast pass/fail evaluation.
 *
 * Instead of using a comparison like:
 *     pass = marks >= 45;
 *
 * we precompute an array where:
 *   - indices 0..44  map to 0 (fail)
 *   - indices 45..100 map to 1 (pass)
 *
 * Then the result is obtained with a single array lookup.
 * It’s mostly a curiosity here — a comparison is just as fast —
 * but it shows how tables can replace branching logic.
 */

// Initialize array using GCC-style designated range initializers
int result[101] = {
    [0 ... 44] = 0,  // all marks from 0 to 44 → fail
    [45 ... 100] = 1 // all marks from 45 to 100 → pass
};

int main(void) {
    int marks;

    printf("Enter marks (0–100): ");
    scanf("%d", &marks);

    // Guard against out-of-range values to avoid invalid indexing
    if (marks < 0 || marks > 100) {
        printf("Out of range!\n");
        return 1;
    }

    // Lookup instead of comparing
    int pass = result[marks];

    if (pass)
        printf("Status: PASS\n");
    else
        printf("Status: FAIL\n");

    return 0;
}
