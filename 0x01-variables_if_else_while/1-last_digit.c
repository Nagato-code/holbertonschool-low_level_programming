#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Tests the last digit against conditions
 *
 * Return: 0 if Success
 */

int main(void)
{
	int n, modulo;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	modulo = n % 10;

	if (modulo > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, modulo);
	else if (modulo == 0)
		printf("Last digit of %d is %d and is 0\n", n, modulo);
	else if (modulo < 6 && modulo != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, modulo);
	return (0);
}
