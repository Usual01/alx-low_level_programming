#include <stdio.h>

/**
 * main - access
 * Return: 0
 */

int main(void)
{
	unsigned long int a, b, c, d, e, f, h;

	b = 1;
	c = 2;

	printf("%lu", b);

	for (a = 1; a < 91; a++)
	{
		printf(", %lu", c);
		c += b;
		b -= c;
	}

	d = b / 1000000000;
	e = b % 1000000000;
	f = c / 1000000000;
	h = c % 1000000000;

	for (a = 92; a < 99; ++a)
	{
		printf(", %lu", f + (h / 1000000000));
		printf("%lu", h % 1000000000);
		f += d;
		d -= f;
		h += e;
		e -= h;
	}
	printf("\n");
	return (0);
}
