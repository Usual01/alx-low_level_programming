#include "main.h"

/**
 *_strchr - finds the string character
 * @s: pinter
 * @c:varaible
 *Return: answer
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return ('\0');
}
