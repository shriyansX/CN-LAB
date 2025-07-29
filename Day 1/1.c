#include <stdio.h>
#include <stdlib.h>  

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(int argc, char *argv[]) {
    
    if (argc != 3) {
        printf("Usage: %s <num1> <num2>\n", argv[0]);
        return 1;
    }

    int x = atoi(argv[1]);
    int y = atoi(argv[2]);

    printf("Before Swapping:\n");
    printf("x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("After Swapping:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}
