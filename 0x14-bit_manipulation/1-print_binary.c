#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
    if (n > 1)
        print_binary(n >> 1);

    putchar((n & 1) + '0');
}

int main(void)
{
    unsigned long int num = 42;
    printf("Binary representation of %lu: ", num);
    print_binary(num);
    putchar('\n');
    return 0;
}