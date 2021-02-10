#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/** variable si le nombre est supérieur a 0 */
 if (n > 0)
{
    printf("%d is positive\n", n);
}
/** variable si le nombre est egale a 0  */
	else if (n === 0)
{
	printf("%d is zero\n", n);
}
 /** variable si le nombre est inférieur a 0  */
	else if (n < 0)
{
	printf("%d is negative\n", n);
}
	return (0);
}
