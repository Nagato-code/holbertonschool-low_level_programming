#include "holberton.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @nb: Value to consider.
 *
 * Return: Value of the last digit.
 */

int print_last_digit(int nb)
{
	nb %= 10;
	if (nb < 0)
		nb = -nb;
	_putchar(nb + 48);
	return (nb);
}
