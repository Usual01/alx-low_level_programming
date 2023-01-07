#include "main.h"

/**
 * _strcmp - compares strings
 * @s1:variable
 * @s2:pointer
 *
 * Return: answer
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0, b;

	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			b = s1[a] - s2[a];
		}
		else
		{
			b = s1[a] - s2[a];
		}
		a++;
	}
	return (b);
}
