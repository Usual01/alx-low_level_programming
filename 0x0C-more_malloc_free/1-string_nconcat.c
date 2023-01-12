#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two srings
 * @s1: string
 * @s2: string
 * @n:bytes amount
 * Return: babau
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int str1, str2;

	str1 = str2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[str1] != '\0')
		str1 += 1;
	while (s2[str2] != '\0')
		str2 += 1;
	str2++;
	if (n >= str2)
		n = str2;
	str = malloc(sizeof(*str) * n + (str1 + 1));

	if (str == NULL)
		return (NULL);
	str1 = 0;
	while (s1[str1] != '\0')
	{
		str[str1] = s1[str1];
		str1 += 1;
	}
	while (s2[str2] != '\0' && str2 < n)
	{
		str[str1] = s2[str2];
		str1++;
		str2++;
	}
	str[str1] = '\0';

	return (str);
}







