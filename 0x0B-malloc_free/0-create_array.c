#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create char array
 * @size: array size
 * @c: charactee variable
 * Return: answer
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int b = 0;

	if (size == 0)
		return (NULL);
	a = (char *) malloc(sizeof(char) * size);

	if (a == NULL)
		return (0);
	while (b < size)
	{
		*(b + a) = c;
		b++;
	}
	*(a + b) = '\0';
	return (a);
}


