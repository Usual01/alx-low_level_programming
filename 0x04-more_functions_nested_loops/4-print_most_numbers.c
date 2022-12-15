#include "main.h"

/**
 * print_most_numbers - betty
 * Return: whaet
 */

void print_most_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		if (a != '4' && a != '2')
		{
			_putchar(a);
		}
	}
	_putchar('\n');
}
