#include <stdio.h>

struct pkt {
    char ch1;
    char ch2[2];
    char ch3;
};

int main() {
    unsigned int num;

    printf("Enter a 4-byte unsigned integer: ");
    scanf("%u", &num);

    struct pkt p;

    p.ch1      = (num & 0x000000FF);         // Byte 1 (LSB)
    p.ch2[0]   = (num & 0x0000FF00) >> 8;    // Byte 2
    p.ch2[1]   = (num & 0x00FF0000) >> 16;   // Byte 3
    p.ch3      = (num & 0xFF000000) >> 24;   // Byte 4 (MSB)

    printf("\n--- Structure Contents ---\n");
    printf("ch1      : %u\n", (unsigned char)p.ch1);
    printf("ch2[0]   : %u\n", (unsigned char)p.ch2[0]);
    printf("ch2[1]   : %u\n", (unsigned char)p.ch2[1]);
    printf("ch3      : %u\n", (unsigned char)p.ch3);

    unsigned int reconstructed = 0;
    reconstructed |= ((unsigned char)p.ch1);
    reconstructed |= ((unsigned char)p.ch2[0]) << 8;
    reconstructed |= ((unsigned char)p.ch2[1]) << 16;
    reconstructed |= ((unsigned char)p.ch3)     << 24;

    printf("\nReconstructed number: %u\n", reconstructed);

    return 0;
}
