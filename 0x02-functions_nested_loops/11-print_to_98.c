#include "holberton.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98.
 *
 * @n: Value to consider.
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		for (; n >= 98; n--)
		{
			putchar_long_ints(n);
			if (n != 98)
			{
				_putchar(44);
				_putchar(32);
			}
		}
	}
	else if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			putchar_long_ints(n);
			if (n != 98)
			{
				_putchar(44);
				_putchar(32);
			}
		}
	}
	_putchar('\n');
}

/**
 * putchar_long_ints - Recursive function that prints long ints with putchar.
 *
 * @n: Value to consider.
 */

void putchar_long_ints(int n)
{
	if (n < 0)
	{
		_putchar(45);
		n = -n;
	}
	if (n / 10)
	{
		putchar_long_ints(n / 10);
	}
	_putchar((n % 10) + 48);
}
