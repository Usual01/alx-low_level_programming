#include "main.h"

/**
 * string_toupper - lowercase to uppercase
 * @s: variale
 * Return: answer
 */

char *string_toupper(char *s)
{
	int i;

	while (s[i] != '\0')
	{
	if (s[i] >= 97 && s[i] <= 122)
		s[i] = s[i] - 32;
	i++;
	}
	return (s);
}
