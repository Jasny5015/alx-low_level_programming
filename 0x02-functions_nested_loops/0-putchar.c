#include <unistd.h>
#include "holberton.h"

/**
 * * _putchar - writes the character c to stdout
 * * @c: The character to print
 *
 * Return: Always return 0 once successful
 * * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
