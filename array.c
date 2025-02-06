#include <stdio.h>

int main() {
    // Access a specific value from the array
    int her[] = {2, 4, 6, 8, 0};
    printf("Second element: %d\n", her[1]);

    // Print all elements of the array
    printf("All elements in the array:\n");
    for (int all = 0; all < 5; all++) {
        printf("%d\n", her[all]);
    }

    // Attempt to print elements with a condition (example implementation)
    printf("Elements or 'Not Found':\n");
    int found = 0; // A flag to indicate if we enter the loop
    for (int all = 0; all < 5; all++) {
        printf("%d\n", her[all]);
        found = 1; // Mark as found
    }

    // If the array is empty, we would reach here
    if (!found) {
        printf("Not Found!\n");
    }

    return 0;
}
