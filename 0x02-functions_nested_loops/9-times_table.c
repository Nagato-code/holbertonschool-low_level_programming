#include "holberton.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int line, multiplier, product;

	for (line = 0; line <= 9; line++)
	{
		for (multiplier = 0; multiplier <= 9; multiplier++)
		{
			product = line * multiplier;
			if (multiplier == 0)
				_putchar(48);
			if (product < 10 && multiplier != 0)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar(product + 48);
			}
			else if (product >= 10 && multiplier != 0)
			{
				_putchar(44);
				_putchar(32);
				_putchar((product / 10) + 48);
				_putchar((product % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
