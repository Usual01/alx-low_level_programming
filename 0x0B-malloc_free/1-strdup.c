#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - copies the string
 * @str: duplicate string
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *a;
	unsigned int b, c;

	if (str == NULL)
		return (NULL);
	for (b = 0; str[b] != '\0'; b++)
		;

	a = malloc(sizeof(char) * (b + 1));

	if (a == NULL)
		return (NULl);

	for (c = 0; c <= b; c++)
		a[c] = str[c];
	
	return (a);
}
