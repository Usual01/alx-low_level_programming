#include "main.h"

/**
 * more_numbers - gosh
 */

void more_numbers(void)
{
	int a, b;

	for (a = '0'; a <= '9' ; a++)
	{
		for (b = '0'; b <= '13'; b++)
		{
			_putchar(a);
		}
		_putchar('\n')
	}
	_putchar('\n');
}
