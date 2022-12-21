#include "main.h"

/**
 * cap_string - capitalize
 * @s: pointer
 * Return: @s
 */

char *cap_string(char *s)
{
	char arr[] = " \t\n,;.!?\"(){}";
	int c, p;

	for (c = 0; s[c] != '\0'; c++)
	{
		for (p = 0; arr[p] != '\0' && (s[c] >= 'a' && s[c] <= 'z'); p++)
		{
			if (c == 0)
				s[c] -= 'a' - 'A';
			if (arr[p] == s[c - 1])
				s[c] -= 'a' - 'A';
		}
	}
	return (s);
}
