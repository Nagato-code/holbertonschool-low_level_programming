#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: 0 if Success.
 */

int main(void)
{
	int i;
	long int a, b, temp;

	a = 1;
	b = 2;

	for (i = 1; i <= 50; ++i)
	{
		printf("%li", a);
		if (i != 50)
		{
			putchar(44);
			putchar(32);
		}
		temp = a + b;
		a = b;
		b = temp;
	}
	putchar('\n');

	return (0);
}
