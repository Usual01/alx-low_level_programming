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
	int b, c = 0;

	if (str == NULL)
		return (NULL);

	c = strlen(str) + 1;
	a = (char *)malloc(len * sizeof(char));

	if (a == NULL)
		return (NULL);

	for (b = 0; b <= c; b++)
		*(a + b) = *(str + b);


	return (a);
}
