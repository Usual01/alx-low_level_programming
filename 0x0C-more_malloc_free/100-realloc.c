#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - reallocates memory block
 * @ptr: pinter
 * @old_size: size inn bytes
 * @new_size:size in bytes
 * Return:pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *reaptr;

	if (ptr == NULL)
	{
		reaptr = malloc(new_size);
		if (reaptr == NULL)
		{
			free(ptr);
			return (NULL);
		}
		free(ptr);
		return (reaptr);
	}
	if (new_size == old_size)
		return (ptr);
		if (new_size == 0 && ptr != NULL)
		{
			free(ptr);
			return (NULL);
		}
	if (new_size > old_size)
		_memcpy(reaptr, ptr, old_size);
	free(ptr);
	return (reaptr);
}
/**
 * _memcpy - copies memory
 * @dest:dest positions
 * @src:source
 * @n: bytes
 * Return: answer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (i < n)
	{
		*(dest + i) = *(src + j);
		i += 1;
		j += 1;
	}
	return (dest);
}

