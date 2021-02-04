#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 *
 * Return: 0 if Success
 */

int main(void)
{
	int nb;

	for (nb = 0; nb < 10; nb++)
		printf("%d", nb);
	printf("\n");

	return (0);
}
