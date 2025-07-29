#include <stdio.h>

int main() {
    unsigned int num;
    printf("Enter an unsigned integer: ");
    scanf("%u", &num);

    // Extract each byte and store in character variables
    unsigned char byte1 = (num & 0x000000FF);
    unsigned char byte2 = (num & 0x0000FF00) >> 8;
    unsigned char byte3 = (num & 0x00FF0000) >> 16;
    unsigned char byte4 = (num & 0xFF000000) >> 24;

    // Print byte values
    printf("\nExtracted Bytes:\n");
    printf("Byte 1 (LSB): %u\n", byte1);
    printf("Byte 2      : %u\n", byte2);
    printf("Byte 3      : %u\n", byte3);
    printf("Byte 4 (MSB): %u\n", byte4);

    return 0;
}
