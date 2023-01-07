#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 *  @c: Print character
 *  Return: answer
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}


