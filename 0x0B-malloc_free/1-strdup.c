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

	b = 0;
	c = 0;

	if (str == NULL)
		return (NULL);
	while (str[b])
		b++;
	a = malloc(sizeof(char) * (c + 1));

	if (a == NULL)
		return (NULl);
	while ((a[b] == str[b])
		b++;
	a[c] = '\0';

	return (a);
}
