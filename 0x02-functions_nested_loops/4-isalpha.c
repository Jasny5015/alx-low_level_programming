#include "main.h"

/**
 * _isalpha(int c) - Return 1 if c is a letter upper or lowercase
 *
 * @c: character to print
 * Return: Always return 0 once successful
 */

int _isalpha(int c)


{
	int c;


	if ((c >= '97' && c <= '122') || (c >= '65' && c <= '90'))
	{
		return (1);
	}

	else
	{
		return (0);
	}
	_putchar('\n');
}
