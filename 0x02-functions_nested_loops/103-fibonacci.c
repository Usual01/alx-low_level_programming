#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	unsigned long int b, c, d, e;

	b = 1;
	c = 2;
	e = 0;

	for (a = 0; a < 33; ++a)
	{
		if (b < 4000000 && (b % 2) == 0)
		{
			e += b;
		}
		d = b + c;
		b = c;
		c = d;
	}
	printf("%lu\n", e);
	return (0);
}
