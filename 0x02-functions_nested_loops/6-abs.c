#include "main.h"

/**
 * _abs - a function that returns the absolute value of an int
 *
 * Return: Always return 0 once successful
 *
 * @i: i is an integer
 */

int _abs(int i)
{
	if (i < 0)
	{
		return (i * -1);
	}
	else
	{
		return (i);
	}
}
