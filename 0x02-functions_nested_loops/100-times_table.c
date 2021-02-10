#include "holberton.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 *
 * @n: Value to consider.
 */

void print_times_table(int n)
{
	int line, multiplier, product;

	if (n <= 15 || n < 0)
	{
		for (line = 0; line <= n; line++)
		{
			for (multiplier = 0; multiplier <= n; multiplier++)
			{
				product = line * multiplier;
				if (multiplier == 0)
					_putchar(48);
				if (product < 10 && multiplier != 0)
					multiplication_table_style(product, 1, 3);
				else if (product >= 10 && product < 100 && multiplier != 0)
					multiplication_table_style(product, 2, 2);
				else if (product >= 100 && multiplier != 0)
					multiplication_table_style(product, 3, 1);
			}
			_putchar('\n');
		}
	}
}

/**
 * multiplication_table_style - Pretty prints the multiplication table.
 *
 * @number: Value to print.
 * @nb_digits: Number of digits of the value.
 * @nb_spaces: Number of spaces to print before the value.
 */

void multiplication_table_style(int number, int nb_digits, int nb_spaces)
{
	_putchar(44);
	while (nb_spaces != 0)
	{
		_putchar(32);
		nb_spaces--;
	}
	if (nb_digits == 3)
	{
		_putchar(((number / 10) / 10) + 48);
		_putchar(((number / 10) % 10) + 48);
		_putchar((number % 10) + 48);
	}
	if (nb_digits == 2)
	{
		_putchar((number / 10) + 48);
		_putchar((number % 10) + 48);
	}
	if (nb_digits == 1)
		_putchar((number % 10) + 48);
}
