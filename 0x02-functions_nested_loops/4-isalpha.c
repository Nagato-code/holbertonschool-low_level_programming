#include "holberton.h"

/**
 * _isalpha - Checks if alpha characters.
 *
 * @c: Value to check.
 *
 * Return: 1 if True, 0 if False.
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'));
}
