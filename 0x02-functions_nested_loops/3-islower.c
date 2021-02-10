#include "holberton.h"

/**
 * _islower - Tells if a char is lowercase.
 *
 * @c: the character to check.
 *
 * Return: 1 if True, 0 if False.
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
