#include <stdio.h>

/**
 * main - Prints the alphabet in reverse, lowercase
 *
 * Return: 0 if Success
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');

	return (0);
}
