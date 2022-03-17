#include "main.h"

/**
 * print_last_digit - This function prints the last digit of an int
 *
 * @n: This is the int passed as an argument
 *
 * Return: Always return 0 once successful
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
