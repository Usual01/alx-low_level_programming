#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string1
 * @s2: string2
 * @n: bytes
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, i, j;
	char *r;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	11 = 12 = 0;

	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;

	if (n >= l2)
		n = l2;

	r = (char *) malloc((l1 + n + 1) * sizeof(char));

	if (r == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		r[i] = s1[i];

	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		r[i] = s2[j];
			i++;
	}
	r[i] = '\0';
	return (r);
}



