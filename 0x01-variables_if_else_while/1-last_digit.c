#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * 1-last_digit
 *
 * My code C
 */

int main(void)
{
	int n, a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

      a = n % 10;

 if (a > 5)

 printf("% dand is greater than 5\n", n);

else if (a == 0)

	printf("%d and is 0\n");

else if (a < 6)

	printf("%d and is less than 6 and not 0\n");

	return (0);
}
