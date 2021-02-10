#include "holberton.h"

/**
 * _abs - Computes the absolue value of an integer.
 *
 * @nb: Value to consider.
 *
 * Return: The absolute value.
 */

int _abs(int nb)
{
	if (nb < 0)
		return (-nb);
	return (nb);
}
