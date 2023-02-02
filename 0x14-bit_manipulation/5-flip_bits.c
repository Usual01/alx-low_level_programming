#include "main.h"

/**
 * flip_bits - returns required number of flipped bits.
 * @n: no 1
 * @m: no 2
 * Return: bit num
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;

	for (i = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			i++;
	}
	return (i);
}

