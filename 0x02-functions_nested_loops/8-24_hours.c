#include "holberton.h"

/**
 * jack_bauer - Prints every minute of the day, from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int hours, minutes;

	for (hours = 0; hours <= 23; hours++)
	{
		for (minutes = 0; minutes <= 59; minutes++)
		{
			_putchar((hours / 10) + 48);
			_putchar((hours % 10) + 48);
			_putchar(58);
			_putchar((minutes / 10) + 48);
			_putchar((minutes % 10) + 48);
			_putchar('\n');
		}
	}
}
