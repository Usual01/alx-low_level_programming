#include "main.h"

/**
 * _strstr - a matching substrings
 * @haystack: substring
 * @needle: substing
 * Return: answer
 */

char *_strstr(char *haystack, char *needle)
{
	char *a, *b;

	while (*haystack != '\0')
	{
		a = haystack;
		b = needle;
		while (*a != '\0' && *haystack == *b)
		{
			haystack++;
			b++;
		}
		if (!*b)
			return (a);
		haystack++;
	}
	return ('\0');
}
