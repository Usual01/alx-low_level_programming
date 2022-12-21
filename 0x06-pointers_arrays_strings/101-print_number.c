#include "main.h"

/**
 * print_number - print numbers anad character
 * @n:shush
 * Return: answer
 */

void print_number(int n)
{
	unsigned int a;

	a = -n;

	if (n < 0)
	{
		_putchar('-');
		a = -n;
	}
	if (a / 10 != 0)
	{
		print_number(a / 10);
	}
	_putchar((n1 % 10) + '0');
}

