#include <stdio.h>

/**
 * print_alphabet - Print alphabet in lowercase
 */

void print_alphabet(void)
{
	int c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
}
