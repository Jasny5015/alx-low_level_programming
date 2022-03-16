#include "main.h"

/**
 * _isalpha(int c) - Return 1 if c is a letter upper or lowercase
 *
 * @c: character to print
 * Return: Always return 0 once successful
 */

int _isalpha(int c)


{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < "Z"))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
