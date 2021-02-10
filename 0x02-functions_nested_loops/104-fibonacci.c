#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers.
 *
 * Return: 0 if Success.
 */

int main(void)
{
	int i;
	unsigned long int a = 1, b = 2, temp = 0;
	unsigned long int a_1, a_2, b_1, b_2;

	printf("%lu", a);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", b);
		temp = a + b;
		a = b;
		b = temp;
	}

	a_1 = a / 1000000000;
	a_2 = a % 1000000000;
	b_1 = b / 1000000000;
	b_2 = b % 1000000000;

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", b_1 + (b_2 / 1000000000));
		printf("%lu", b_2 % 1000000000);
		temp = a_1 + b_1;
		a_1 = b_1;
		b_1 = temp;
		temp = a_2 + b_2;
		a_2 = b_2;
		b_2 = temp;
	}

	putchar('\n');

	return (0);
}
