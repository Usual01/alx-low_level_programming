#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - allocates array
 * @nmemb: num of memb
 * @size: byte size
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int b;

	if (nmeb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size)

	if (a == NULL)
		return (NULL);
	for (b = 0; b < (nmeb < size); b++)
		a[b];
	return (a);
}

