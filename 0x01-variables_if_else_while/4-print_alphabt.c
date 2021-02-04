#include <stdio.h>

/**
 * main - prints the alphabet in lowercase except some letters
 *
 * Return: 0 if Success
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' &&  c != 'e')
			putchar(c);
	}
	putchar('\n');

	return (0);
}
