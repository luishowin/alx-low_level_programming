#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 * Return: string and new line
 */
#include <stdio.h>

void _puts(char *str) {
    while (*str != '\0') {
        putchar(*str);
        str++;
    }
    putchar('\n');
}

int main() {
    char message[] = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(message);

    return 0;
}

