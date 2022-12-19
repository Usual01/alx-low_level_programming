#include "main.h"
#include <stdio.h>

/**
 * _strlen - length of string
 * @s: variable
 * Return: length
 */

int _strlen(char *s)
{
	int value;

	for (value = 0; *s != '\0' ; ++s)
	{
		++value;
	}
	return (value);
}
