#include <stdio.h>

/**
 * main - prints the alphabet in lower case
 *
 * Return: 0 if Success
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
