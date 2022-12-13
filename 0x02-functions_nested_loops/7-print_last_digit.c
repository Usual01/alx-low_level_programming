#include "main.h"

/**
 * print_last_digit - the croatia coach was clueless
 * @d: waste of semi final space
 * Return: value of last
 */

int print_last_digit(int d)
{
	int n;

	if (d < 0)
		d = -d;
	n = d % 10;
	if (n < 0)
		n = -n;
	_putchar(n + '0');
	return (n);
}

