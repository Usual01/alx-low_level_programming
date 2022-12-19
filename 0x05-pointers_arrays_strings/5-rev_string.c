#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses string
 * @s: variable
 */

void rev_string(char *s)
{
	int  a, b;
	char string;

	for (a = 0; s[a] != '\0'; ++a)
	{
	}
	for (b = 0; b < a / 2; ++b)
	{
		string = s[b];
		s[b] = s[a - 1 - b];
		s[a - 1 - b] = string;
	}
}
