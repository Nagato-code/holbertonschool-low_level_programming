#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: 0 if Success
 */

int main(void)
{
	int nb;

	for (nb = 48; nb <= 57; nb++)
	{
		putchar(nb);
		if (nb < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');

	return (0);
}
