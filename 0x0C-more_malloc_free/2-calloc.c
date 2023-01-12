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
	void *a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size)

	if (a == NULL)
		return (NULL);
	_memset(a, 0, nmemb * size;
	return (a);
}

/**
 * _memset - fills memeory
 * @s: memory to retur
 * @b: byte size
 * @n:byte
 * Return: sring
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int o = 0;

	while (o < n)
	{
		*(s + o) = b;
		o += 1;
	}
	return (o);
}
