#include <stdio.h>
#include <stdlib.h>  // For atoi()

// Swap function using pointers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(int argc, char *argv[]) {
    // Check if exactly two arguments are passed
    if (argc != 3) {
        printf("Usage: %s <num1> <num2>\n", argv[0]);
        return 1;
    }

    // Convert command-line arguments to integers
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);

    printf("Before Swapping:\n");
    printf("x = %d, y = %d\n", x, y);

    // Call swap function
    swap(&x, &y);

    printf("After Swapping:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}
