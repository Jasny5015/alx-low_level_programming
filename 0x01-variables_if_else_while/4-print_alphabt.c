#include<stdio.h>

/**
 * main - Prints the alphabets except q and e.
 *
 * Return: Always return 0 once successful
 */

int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
