#include "main.h"

/**
 * print_diagsums - print of the sum of the diagonal of square matrix
 * @a: pointer
 * @size: matrix size
 */

void print_diagsums(int *a, int size)
{
	int b, c, d;

	c = 0;
	d = 0;

	for (b = 0; b < (size * size); b++)
	{
		if (b % (size + 1) == 0)
			c += a[b];
		if (b % (size - 1) == 0 && b != 0 && b < size * size - 1)
			d += a[b];
	}
	printf("%d, %d\n", c, d);
}
