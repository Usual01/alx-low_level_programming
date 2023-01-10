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
	char *duplicate;
	int index, len = 0;

	if (a == NULL)
		return (NULL);
	for (index = 0; str[index]; index++)
		len++;
	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);
	for (index = 0; str[index]; index++)
		duplicate[index] = str[index];

	duplicate[len] = '\0';

	return (duplicate);
}
