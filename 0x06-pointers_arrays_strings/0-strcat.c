#include "main.h"

/**
 * _strcat - concatenates string
 * @dest:pointer variable
 * @src: pointer variable
 * Return: pointer
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;

	while (dest[a])
		a++;
	for (b = 0; src[b]; b++)
		dest[a++] = src[b++];
	return (dest);
}
