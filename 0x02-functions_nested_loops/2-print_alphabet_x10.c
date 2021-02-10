#include "holberton.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet in lowercase.
 */

void print_alphabet_x10(void)
{
	char c;
	int nb;

	for (nb = 1; nb <= 10; nb++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
