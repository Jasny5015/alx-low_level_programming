#include<stdio.h>
/**
 * main - Prints all possible combo of digits
 *
 * Return: Always return 0 once success
 */

int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
