#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a string, followed by a new line, to stdout.
 * @str: Pointer to the string to be printed.
 */
void _puts(char *str)
{
    if (str == NULL)
        return;

    while (*str)
    {
        putchar(*str);
        str++;
    }

    putchar('\n');
}

int main()
{
    char message[] = "Hello, World!";
    _puts(message);

    return 0;
}
