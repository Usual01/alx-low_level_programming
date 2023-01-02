#include "main.h"

/**
 * rot13 - encoder rot13
 * @s: ponter
 * Return: answer
 */

char *rot13(char *s)
{

	int n;

	for (n = 0; s[n] != '\0'; n++)
	{
		if ((s[n] >= 'a' && s[n] <= 'n') || (s[n] >= 'A' && s[n] <= 'N'))
			s[n] += 13;
		else if ((s[n] >= 'n' && s[n] <= 'z') || (s[n] >= 'N' && s[n] <= 'Z'))
			s[n] -= 13;
	}
	return (s);
}
