#include <stdio.h>
#include "main.h"


/**
 * main - Entry point
 * Description: prints text
 * Return: always 0
 */


int main(void)
{
	int i;
	char str[] = "_putchar";

	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	putchar('\n');
	return (0);
}

/**
#include "main.h

int proudb(name)
{
	return (write(1, &name, 1));
}
*/
