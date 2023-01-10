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
	int b, c;

	b = 0;
	c = 0;

	while (str[b] != '\0'
	{
		c++;
		b++;
	}

	if (a == NULL)
		return (NULL);


	while (str[b] != '\0'
	{
		a[b] = str[b];
		b++
	}

	return (a);
}
