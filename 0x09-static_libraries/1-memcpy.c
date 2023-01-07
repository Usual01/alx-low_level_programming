#include "main.h"

/**
 * _memcpy - function that copies the memory area
 * @dest: buffer
 * @src: copied string
 * @n: bytes
 * Return: answer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
