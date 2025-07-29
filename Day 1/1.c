#include <stdio.h>

int stringToInt(char str[])
{
    int num = 0, i = 0, sign = 1;

    if (str[0] == '-')
    {
        sign = -1;
        i++;
    }

    while (str[i] != '\0')
    {
        num = num * 10 + (str[i] - '0');
        i++;
    }

    return sign * num;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Usage: %s <num1> <num2>\n", argv[0]);
        return 1;
    }

    int x = stringToInt(argv[1]);
    int y = stringToInt(argv[2]);

    printf("Before Swapping:\n");
    printf("x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("After Swapping:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}
