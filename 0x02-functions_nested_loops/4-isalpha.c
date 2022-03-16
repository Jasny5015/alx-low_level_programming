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
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}

	else
	{
		return (0);
	}
	_putchar('\n');
}
