#include "main.c"

/**
 *print_rev - prints a string in reverse order
* @s: variable
*/

void print_rev(char *s)
{
	int value;

	for (value = 0; s[value] != 0; ++value)
	{
	}
	for (--value; value >= 0; --value)
		_putchar(s[value]);
	_putchar('\n');
}

