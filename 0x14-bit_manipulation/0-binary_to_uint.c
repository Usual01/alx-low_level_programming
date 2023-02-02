#include "main.h
#include <stdlib.h>
#include <stdio.h>"


/**
 * _pow_recursion - function that returns value of x in power format
 *@x:base number
 *@y:raised to the power
 *Return: raised nuber
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

/**
 *_strlen - returns a string
 *@s: pointer
 *Return: string
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i += 1;
	}
	return (i);
}

/**
 * binary_to_uint- convert binary to unsigned int
 * @b: binary
 * Return:binary_to_uint- convert binary to unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int len, exp = 0;
	unsigned int res = 0;

	if (b == NULL)
		return (0);
	while (len-- && len >= 0)
	{
		if (b[len] == '1')
			res += _pow_recursion(2, exp);
		else if (b[len] != '0')
			return (0);
	exp++;
	}
	return (res);
}

