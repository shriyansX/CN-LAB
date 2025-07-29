#include <stdio.h>
void check_endianness()
{
    unsigned int x = 1;
    char *c = (char *)&x;

    if (*c == 1)
        printf("System is Little Endian.\n");
    else
        printf("System is Big Endian.\n");
}

void print_bytes(unsigned int num)
{
    unsigned char *byte = (unsigned char *)&num;
    printf("Byte representation (LSB to MSB):\n");
    for (int i = 0; i < sizeof(num); i++)
    {
        printf("Byte %d: %u (0x%02X)\n", i + 1, byte[i], byte[i]);
    }
}

unsigned int convert_endianness(unsigned int num)
{
    unsigned int b1, b2, b3, b4;

    b1 = (num & 0x000000FF) << 24;
    b2 = (num & 0x0000FF00) << 8;
    b3 = (num & 0x00FF0000) >> 8;
    b4 = (num & 0xFF000000) >> 24;

    return (b1 | b2 | b3 | b4);
}

int main()
{
    unsigned int number;

    check_endianness();

    printf("\nEnter a 4-byte unsigned integer: ");
    scanf("%u", &number);

    printf("\nOriginal Number: %u\n", number);
    print_bytes(number);

    unsigned int converted = convert_endianness(number);
    printf("\nConverted Endianness Number: %u\n", converted);
    print_bytes(converted);

    return 0;
}
