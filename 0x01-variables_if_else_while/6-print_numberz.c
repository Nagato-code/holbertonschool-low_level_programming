#include <stdio.h>

/**
 * main - prints digit numbers of base 10 w/ putchar
 *
 * Return: 0 if Success
 */

int main(void)
{
	int nc;

	for (nc = 48; nc <= 57; nc++)
		putchar(nc);
	putchar('\n');

	return (0);
}
