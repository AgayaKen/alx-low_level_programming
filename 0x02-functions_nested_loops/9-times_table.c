#include <stdio.h>

/**
 * times_table - Display multiply table.
 */

void times_table(void)
{
	int i, j, n, c;

	for (i = 0; i <= 9; i++)
	{
		c = 0;
		for (j = 0; j <= 9; j++)
		{
			n = i * j;
			if (n <= 9 && i * (j + 1) <= 9)
			{
				putchar(n + '0');
				if (c != 9)
				{
					putchar(',');
					putchar(' ');
					putchar(' ');
				}
			}
			else
			{
				if (n / 10 == 0)
				{
					putchar(n + '0');
				}
				else
				{
					putchar((n / 10) + '0');
					putchar((n % 10) + '0');
				}
				if (c != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
			c++;
		}
		putchar('\n');
	}
}
