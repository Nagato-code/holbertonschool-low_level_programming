#include <stdio.h>

/**
 * main - Sums the even-valued numbers of the first /
 * 4,000,000 Fibonacci sequence.
 *
 * Return: 0 if Success.
 */

int main(void)
{
	int i;
	long int a = 1, b = 2, temp = 0, sum = 0;

	for (i = 1; i <= 40; ++i)
	{
		if ((a % 2) == 0 && a <= 4000000)
			sum += a;
		temp = a + b;
		a = b;
		b = temp;
	}
	printf("%li\n", sum);

	return (0);
}
