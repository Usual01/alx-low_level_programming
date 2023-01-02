#include "main.h"

/**
 * leet - encodes to 1337
 * @s: - variable
 * Return: ANSWER
 */

char  *leet(char *s)
{
	int c, d;
	char a[] = "aeotlAEOTL";
	char b[] = "4307143071";

	for (c = 0; s[c] != '\0'; c++)
	{
		for (d = 0; a[d] != '\0'; d++)
		{
			if (s[c] == a[d])
				s[c] = b[d];
		}
	}

	return (s);
}
