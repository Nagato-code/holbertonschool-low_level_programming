#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lowercase
 *
 * Return: 0 if Success
 */

int main(void)
{
	char c;
	int nb;

	for (nb = 48; nb <= 57; nb++)
		putchar(nb);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
