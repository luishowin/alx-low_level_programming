#include <unistd.g>

/**
 * _putchar - write the character c to stdout
 * @c: the character to be printed
 * Return: on success 1.
 * On error, -1 is returned, and error no is set
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
