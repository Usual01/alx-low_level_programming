#include "main.h"

/**
 * _islower - returns lowercase characters
 * @c: the character to check
 * Return: 1 else 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
