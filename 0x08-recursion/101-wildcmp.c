#include "main.h"

/**
 * wildcmp - compares strings
 * @s1:string
 * @s2:string
 *Return:identical
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);
	else if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s2 == '*')
	return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	return (0);
}
