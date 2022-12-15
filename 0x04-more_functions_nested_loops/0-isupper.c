#include "main.h"

/**
 * _isupper - checks for uppercase
 *  @c: variable
 *  Return: 1 else
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
