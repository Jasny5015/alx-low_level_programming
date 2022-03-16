#include "main.h"
#include <stdio.h>

/**
 * _abs - value absolute
 *
 * @n: The int to print
 * Return: Always return 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n')
		return (0);
}
