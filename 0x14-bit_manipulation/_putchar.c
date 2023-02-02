#include <unistd.h>

/**
 * _putchar - write a character
 * @c: character
 * Return:character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
