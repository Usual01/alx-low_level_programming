#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @n:pointer
 * @index:index
 * Return: 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;

	if (*n & i)
		*n ^= i;

	return (1);
}
