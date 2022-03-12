#include<stdio.h>
/**
 * main - Prints combo digits
 *
 * Return: return 0 once successful
 */

int main(void)
{
	int n, m, e;

	for (n = 48; n < 58; n++)
	{
		for (m = 49; m < 58; m++)
		{
			for (e = 50; e < 58; e++)
			{
				if (e > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(e);
					if (n != 55 || m != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
