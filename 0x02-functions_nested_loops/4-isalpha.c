#include "main.h"

/**
 * _isalpha - Return 1 if c is a letter upper or lowercase
 *
 * Description: A function that checks for alphabetic character.
 *
 * @c: ASCII value of the letter
 *
 * Return: Always return 0 once successful
 */

int _isalpha(int c)
{
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
