#include "main.h"

/**
 * reverse_array - function that reverse content
 * @a: pointer
 * @n:pointer
 */

void reverse_array(int *a, int n)
{
	int b, c, d;

	c = 0;
	d = n - 1;

	while (c < d)
	{
		b = a[c];
		a[c] = a[d];
		a[d] = b;

		c++;
		d--;
	}
}
